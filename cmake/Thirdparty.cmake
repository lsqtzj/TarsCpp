
option(TARS_MYSQL "option for mysql" ON)
option(TARS_SSL "option for ssl" OFF)
option(TARS_HTTP2 "option for http2" OFF)
option(TARS_PROTOBUF "option for protocol" OFF)
option(TARS_GPERF    "option for gperf" OFF)

IF(UNIX)
    FIND_PACKAGE(ZLIB)
    IF(NOT ZLIB_FOUND)
        SET(ERRORMSG "zlib library not found. Please install appropriate package, remove CMakeCache.txt and rerun cmake.")
        IF(CMAKE_SYSTEM_NAME MATCHES "Linux")
            SET(ERRORMSG ${ERRORMSG} "On Debian/Ubuntu, package name is zlib1g-dev(apt-get install  zlib1g-dev), on Redhat/Centos and derivates it is zlib-devel (yum install zlib-devel).")
        ENDIF()
        MESSAGE(FATAL_ERROR ${ERRORMSG})
    ENDIF()

ENDIF(UNIX)

if (TARS_MYSQL)
    add_definitions(-DTARS_MYSQL=1)
endif ()

if (TARS_GPERF)
    add_definitions(-DTARS_GPERF=1)
endif ()

if (TARS_SSL)
    add_definitions(-DTARS_SSL=1)
endif ()

if (TARS_HTTP2)
    add_definitions(-DTARS_HTTP2=1)
endif ()

if (TARS_PROTOBUF)
    add_definitions(-DTARS_PROTOBUF=1)
endif ()
# 判断外部引用放远程经常出现无法下载的问题，所以把压缩包放到了 lib 目录中
# TarsFramework 项目编译时,目录位置在./tarscpp/lib/ 
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/lib/protobuf-cpp-3.11.3.tar.gz")    
    set(External_LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/lib")
else()
    set(External_LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/tarscpp/lib")
endif()
#-------------------------------------------------------------

set(THIRDPARTY_PATH "${CMAKE_BINARY_DIR}/src")

set(LIB_MYSQL)
set(LIB_HTTP2)
set(LIB_SSL)
set(LIB_CRYPTO)
set(LIB_PROTOBUF)
set(LIB_GTEST)
set(LIB_GPERF)
set(LIB_TCMALLOC_PROFILER)
set(LIB_TCMALLOC_MINIMAL)
#-------------------------------------------------------------

add_custom_target(thirdparty)

include(ExternalProject)

if (TARS_GPERF)

    set(GPERF_DIR_INC "${THIRDPARTY_PATH}/gperf/include")
    set(GRPEF_DIR_LIB "${THIRDPARTY_PATH}/gperf/lib")
    include_directories(${GPERF_DIR_INC})
    link_directories(${GRPEF_DIR_LIB})

    if (UNIX)
        set(LIB_GPERF "profiler")
        set(LIB_TCMALLOC_PROFILER "tcmalloc_and_profiler")
        set(LIB_TCMALLOC_MINIMAL "tcmalloc_and_minimal")

        ExternalProject_Add(ADD_${LIB_GPERF}
                URL file://${External_LIB_DIR}/gperftools-2.7.tar.gz
                DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
                PREFIX ${CMAKE_BINARY_DIR}
                INSTALL_DIR ${CMAKE_SOURCE_DIR}
                CONFIGURE_COMMAND ./configure --prefix=${CMAKE_BINARY_DIR}/src/gperf --disable-shared --disable-debugalloc
                SOURCE_DIR ${CMAKE_BINARY_DIR}/src/gperf-lib
                BUILD_IN_SOURCE 1
                BUILD_COMMAND make
                # INSTALL_COMMAND ${CMAKE_COMMAND}  --build . --config release --target install
                URL_MD5 c6a852a817e9160c79bdb2d3101b4601
                )

        add_dependencies(thirdparty ADD_${LIB_GPERF})

        INSTALL(FILES ${CMAKE_BINARY_DIR}/src/gperf/bin/pprof
                PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ
                DESTINATION thirdparty/bin/)
        INSTALL(DIRECTORY ${CMAKE_BINARY_DIR}/src/gperf/lib DESTINATION thirdparty)
        INSTALL(DIRECTORY ${CMAKE_BINARY_DIR}/src/gperf/include/gperftools DESTINATION thirdparty/include)

    endif (UNIX)

endif (TARS_GPERF)


if(WIN32)

    ExternalProject_Add(ADD_CURL
        URL file://${External_LIB_DIR}/curl-7.69.1.tar.gz
        DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
        PREFIX ${CMAKE_BINARY_DIR}
        INSTALL_DIR ${CMAKE_SOURCE_DIR}
        CONFIGURE_COMMAND ${CMAKE_COMMAND} . -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/src/curl
        SOURCE_DIR ${CMAKE_BINARY_DIR}/src/curl-lib
        BUILD_IN_SOURCE 1
        BUILD_COMMAND ${CMAKE_COMMAND} --build . --config release
        INSTALL_COMMAND ${CMAKE_COMMAND} --build . --config release --target install
        URL_MD5 b9bb5e11d579425154a9f97ed44be9b8
    )

    add_dependencies(thirdparty ADD_CURL)

    INSTALL(DIRECTORY ${CMAKE_BINARY_DIR}/src/curl/ DESTINATION thirdparty)
endif(WIN32)

if (WIN32)
    set(LIB_GTEST "gtest")

    if (CMAKE_BUILD_TYPE STREQUAL "Debug")
        set(LIB_GTEST "${LIB_GTEST}d")
    endif()

    ExternalProject_Add(ADD_${LIB_GTEST}
            URL file://${External_LIB_DIR}/release-1.10.0.zip
            DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
            PREFIX ${CMAKE_BINARY_DIR}
            INSTALL_DIR ${CMAKE_SOURCE_DIR}
            CONFIGURE_COMMAND ${CMAKE_COMMAND} . -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE} -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/src/gtest -A x64 -Dgtest_force_shared_crt=on
            SOURCE_DIR ${CMAKE_BINARY_DIR}/src/gtest-lib
            BUILD_IN_SOURCE 1
            BUILD_COMMAND ${CMAKE_COMMAND} --build . --config ${CMAKE_BUILD_TYPE}
            INSTALL_COMMAND ${CMAKE_COMMAND} --build . --config  ${CMAKE_BUILD_TYPE}  --target install
            URL_MD5 82358affdd7ab94854c8ee73a180fc53
            )
else()
    set(LIB_GTEST "gtest")

    ExternalProject_Add(ADD_${LIB_GTEST}
            URL file://${External_LIB_DIR}/release-1.10.0.tar.gz
            DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
            PREFIX ${CMAKE_BINARY_DIR}
            INSTALL_DIR ${CMAKE_SOURCE_DIR}
            CONFIGURE_COMMAND ${CMAKE_COMMAND} . -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/src/gtest
            SOURCE_DIR ${CMAKE_BINARY_DIR}/src/gtest-lib
            BUILD_IN_SOURCE 1
            BUILD_COMMAND make
            URL_MD5 ecd1fa65e7de707cd5c00bdac56022cd
            )
endif()

INSTALL(DIRECTORY ${CMAKE_BINARY_DIR}/src/gtest/ DESTINATION thirdparty)

add_dependencies(thirdparty ADD_${LIB_GTEST})

if (TARS_PROTOBUF)
    set(PROTOBUF_DIR_INC "${THIRDPARTY_PATH}/protobuf/include")
    set(PROTOBUF_DIR_LIB "${THIRDPARTY_PATH}/protobuf/lib")
    set(PROTOBUF_DIR_LIB64 "${THIRDPARTY_PATH}/protobuf/lib64")
    include_directories(${PROTOBUF_DIR_INC})
    link_directories(${PROTOBUF_DIR_LIB})
    link_directories(${PROTOBUF_DIR_LIB64})

    if (WIN32)
        set(LIB_PROTOC "libprotoc")
        set(LIB_PROTOBUF "libprotobuf")

        ExternalProject_Add(ADD_${LIB_PROTOBUF}
                URL file://${External_LIB_DIR}/protobuf-cpp-3.11.3.tar.gz
                DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
                PREFIX ${CMAKE_BINARY_DIR}
                INSTALL_DIR ${CMAKE_SOURCE_DIR}
                CONFIGURE_COMMAND ${CMAKE_COMMAND} cmake -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/src/protobuf -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=ON
                SOURCE_DIR ${CMAKE_BINARY_DIR}/src/protobuf-lib
                BUILD_IN_SOURCE 1
                BUILD_COMMAND ${CMAKE_COMMAND} --build . --config release
                INSTALL_COMMAND ${CMAKE_COMMAND} --build . --config release --target install
                URL_MD5 fb59398329002c98d4d92238324c4187
                )
    else ()
        set(LIB_PROTOC "protoc")
        set(LIB_PROTOBUF "protobuf")

        ExternalProject_Add(ADD_${LIB_PROTOBUF}
                URL file://${External_LIB_DIR}/protobuf-cpp-3.11.3.tar.gz
                DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
                PREFIX ${CMAKE_BINARY_DIR}
                INSTALL_DIR ${CMAKE_SOURCE_DIR}
                CONFIGURE_COMMAND ${CMAKE_COMMAND} cmake -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/src/protobuf -DBUILD_SHARED_LIBS=OFF
                SOURCE_DIR ${CMAKE_BINARY_DIR}/src/protobuf-lib
                BUILD_IN_SOURCE 1
                BUILD_COMMAND make
                URL_MD5 fb59398329002c98d4d92238324c4187
                )

    endif ()

    INSTALL(DIRECTORY ${CMAKE_BINARY_DIR}/src/protobuf/ DESTINATION thirdparty)

    add_dependencies(thirdparty ADD_${LIB_PROTOBUF})

endif ()


if (TARS_SSL)
    set(SSL_DIR "${THIRDPARTY_PATH}/openssl")
    set(SSL_DIR_INC "${THIRDPARTY_PATH}/openssl/include/")
    set(SSL_DIR_LIB "${THIRDPARTY_PATH}/openssl/lib")
    include_directories(${SSL_DIR_INC})
    link_directories(${SSL_DIR_LIB})

    if (WIN32)
        set(LIB_SSL "libssl")
        set(LIB_CRYPTO "libcrypto")

        ExternalProject_Add(ADD_${LIB_SSL}
                URL file://${External_LIB_DIR}/openssl-1.1.1l.tar.gz
                DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
                PREFIX ${CMAKE_BINARY_DIR}
                INSTALL_DIR ${CMAKE_SOURCE_DIR}
                CONFIGURE_COMMAND perl Configure --prefix=${CMAKE_BINARY_DIR}/src/openssl --openssldir=ssl VC-WIN64A no-asm
                SOURCE_DIR ${CMAKE_BINARY_DIR}/src/openssl-lib
                BUILD_IN_SOURCE 1
                BUILD_COMMAND nmake
                INSTALL_COMMAND nmake install
                URL_MD5 ac0d4387f3ba0ad741b0580dd45f6ff3
                )
    else ()
        set(LIB_SSL "ssl")
        set(LIB_CRYPTO "crypto")

        ExternalProject_Add(ADD_${LIB_SSL}
                URL file://${External_LIB_DIR}/openssl-1.1.1l.tar.gz
                DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
                PREFIX ${CMAKE_BINARY_DIR}
                INSTALL_DIR ${CMAKE_SOURCE_DIR}
                CONFIGURE_COMMAND ./config --prefix=${CMAKE_BINARY_DIR}/src/openssl --openssldir=ssl no-shared
                SOURCE_DIR ${CMAKE_BINARY_DIR}/src/openssl-lib
                BUILD_IN_SOURCE 1
                BUILD_COMMAND make
                URL_MD5 ac0d4387f3ba0ad741b0580dd45f6ff3
                )

    endif ()

    INSTALL(DIRECTORY ${CMAKE_BINARY_DIR}/src/openssl/ DESTINATION thirdparty)

    add_dependencies(thirdparty ADD_${LIB_SSL})
endif ()

if (TARS_MYSQL)
    set(MYSQL_DIR_INC "${THIRDPARTY_PATH}/mysql/include")
    set(MYSQL_DIR_LIB "${THIRDPARTY_PATH}/mysql/lib")
    include_directories(${MYSQL_DIR_INC})
    link_directories(${MYSQL_DIR_LIB})

    if (WIN32)
        set(LIB_MYSQL "libmysql")
        # 压缩包修改了 CMakeLists.txt, 注释 INCLUDE(cmake/abi_check.cmake) openeuler 20.09 编译问题
        ExternalProject_Add(ADD_${LIB_MYSQL}
                URL file://${External_LIB_DIR}/mysql-connector-c-6.1.11-src.fixed.zip
                DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
                PREFIX ${CMAKE_BINARY_DIR}
                INSTALL_DIR ${CMAKE_SOURCE_DIR}
                CONFIGURE_COMMAND ${CMAKE_COMMAND} . -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/src/mysql -DBUILD_CONFIG=mysql_release
                SOURCE_DIR ${CMAKE_BINARY_DIR}/src/mysql-lib
                BUILD_IN_SOURCE 1
                BUILD_COMMAND ${CMAKE_COMMAND} --build . --config release
                INSTALL_COMMAND ${CMAKE_COMMAND} --build . --config release --target install
                URL_MD5 2b58df15e9c13f39164d94829ca8fc18
                )

    else ()
        set(LIB_MYSQL "mysqlclient")
        # 压缩包修改了 CMakeLists.txt,注释 INCLUDE(cmake/abi_check.cmake) openeuler 20.09 编译问题
        ExternalProject_Add(ADD_${LIB_MYSQL}
                URL file://${External_LIB_DIR}/mysql-connector-c-6.1.11-src.fixed.tar.gz
                DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
                PREFIX ${CMAKE_BINARY_DIR}
                INSTALL_DIR ${CMAKE_SOURCE_DIR}
                CONFIGURE_COMMAND ${CMAKE_COMMAND} .  -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/src/mysql -DDEFAULT_CHARSET=utf8 -DDEFAULT_COLLATION=utf8_general_ci -DDISABLE_SHARED=1
                SOURCE_DIR ${CMAKE_BINARY_DIR}/src/mysql-lib
                BUILD_IN_SOURCE 1
                BUILD_COMMAND make mysqlclient
                URL_MD5 bcd7b30c329e4e4906646376100c58cd
                )

    endif ()

    INSTALL(DIRECTORY ${CMAKE_BINARY_DIR}/src/mysql/lib DESTINATION thirdparty)
    INSTALL(DIRECTORY ${CMAKE_BINARY_DIR}/src/mysql/include/ DESTINATION thirdparty/include/mysql)

    add_dependencies(thirdparty ADD_${LIB_MYSQL})
endif ()


if (TARS_HTTP2)

    set(NGHTTP2_DIR_INC "${THIRDPARTY_PATH}/nghttp2/include/")
    set(NGHTTP2_DIR_LIB "${THIRDPARTY_PATH}/nghttp2/lib")
    set(NGHTTP2_DIR_LIB64 "${THIRDPARTY_PATH}/nghttp2/lib64")
    include_directories(${NGHTTP2_DIR_INC})
    link_directories(${NGHTTP2_DIR_LIB})
    link_directories(${NGHTTP2_DIR_LIB64})

    set(LIB_HTTP2 "nghttp2_static")

    if (WIN32)
        ExternalProject_Add(ADD_${LIB_HTTP2}
                URL file://${External_LIB_DIR}/nghttp2-1.40.0.tar.gz
                DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
                PREFIX ${CMAKE_BINARY_DIR}
                INSTALL_DIR ${CMAKE_SOURCE_DIR}
                CONFIGURE_COMMAND ${CMAKE_COMMAND} .  -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/src/nghttp2 -DENABLE_LIB_ONLY=ON -DENABLE_STATIC_LIB=ON
                SOURCE_DIR ${CMAKE_BINARY_DIR}/src/nghttp2-lib
                BUILD_IN_SOURCE 1
                BUILD_COMMAND ${CMAKE_COMMAND} --build . --config release
                INSTALL_COMMAND ${CMAKE_COMMAND} --build . --config release --target install
                URL_MD5 5df375bbd532fcaa7cd4044b54b1188d
                )

    else ()
        ExternalProject_Add(ADD_${LIB_HTTP2}
                URL file://${External_LIB_DIR}/nghttp2-1.40.0.tar.gz
                DOWNLOAD_DIR ${CMAKE_SOURCE_DIR}/download
                PREFIX ${CMAKE_BINARY_DIR}
                INSTALL_DIR ${CMAKE_SOURCE_DIR}
                CONFIGURE_COMMAND ${CMAKE_COMMAND} . -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/src/nghttp2 -DENABLE_LIB_ONLY=ON -DENABLE_STATIC_LIB=ON
                SOURCE_DIR ${CMAKE_BINARY_DIR}/src/nghttp2-lib
                BUILD_IN_SOURCE 1
                BUILD_COMMAND make
                URL_MD5 5df375bbd532fcaa7cd4044b54b1188d
                )

    endif ()

    INSTALL(DIRECTORY ${CMAKE_BINARY_DIR}/src/nghttp2/ DESTINATION thirdparty)

    add_dependencies(thirdparty ADD_${LIB_HTTP2})

endif ()

message("----------------------------------------------------")
message("TARS_MYSQL:                ${TARS_MYSQL}")
message("TARS_HTTP2:                ${TARS_HTTP2}")
message("TARS_SSL:                  ${TARS_SSL}")
message("TARS_PROTOBUF:             ${TARS_PROTOBUF}")
message("TARS_GPERF:                ${TARS_GPERF}")
