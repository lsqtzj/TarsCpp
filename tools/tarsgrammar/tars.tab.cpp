/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 17 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"

#include <iostream>
#include <memory>
#include <cassert>

using namespace std;

#define YYSTYPE GrammarBasePtr

#include "parse.h"
#define YYDEBUG 1
#define YYINITDEPTH 10000

#line 85 "tars.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_TARS_TAB_HPP_INCLUDED
# define YY_YY_TARS_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TARS_VOID = 258,               /* TARS_VOID  */
    TARS_STRUCT = 259,             /* TARS_STRUCT  */
    TARS_BOOL = 260,               /* TARS_BOOL  */
    TARS_BYTE = 261,               /* TARS_BYTE  */
    TARS_SHORT = 262,              /* TARS_SHORT  */
    TARS_INT = 263,                /* TARS_INT  */
    TARS_DOUBLE = 264,             /* TARS_DOUBLE  */
    TARS_FLOAT = 265,              /* TARS_FLOAT  */
    TARS_LONG = 266,               /* TARS_LONG  */
    TARS_STRING = 267,             /* TARS_STRING  */
    TARS_VECTOR = 268,             /* TARS_VECTOR  */
    TARS_MAP = 269,                /* TARS_MAP  */
    TARS_NAMESPACE = 270,          /* TARS_NAMESPACE  */
    TARS_INTERFACE = 271,          /* TARS_INTERFACE  */
    TARS_IDENTIFIER = 272,         /* TARS_IDENTIFIER  */
    TARS_OUT = 273,                /* TARS_OUT  */
    TARS_OP = 274,                 /* TARS_OP  */
    TARS_KEY = 275,                /* TARS_KEY  */
    TARS_ROUTE_KEY = 276,          /* TARS_ROUTE_KEY  */
    TARS_REQUIRE = 277,            /* TARS_REQUIRE  */
    TARS_OPTIONAL = 278,           /* TARS_OPTIONAL  */
    TARS_CONST_INTEGER = 279,      /* TARS_CONST_INTEGER  */
    TARS_CONST_FLOAT = 280,        /* TARS_CONST_FLOAT  */
    TARS_FALSE = 281,              /* TARS_FALSE  */
    TARS_TRUE = 282,               /* TARS_TRUE  */
    TARS_STRING_LITERAL = 283,     /* TARS_STRING_LITERAL  */
    TARS_SCOPE_DELIMITER = 284,    /* TARS_SCOPE_DELIMITER  */
    TARS_CONST = 285,              /* TARS_CONST  */
    TARS_ENUM = 286,               /* TARS_ENUM  */
    TARS_UNSIGNED = 287,           /* TARS_UNSIGNED  */
    BAD_CHAR = 288                 /* BAD_CHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TARS_TAB_HPP_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TARS_VOID = 3,                  /* TARS_VOID  */
  YYSYMBOL_TARS_STRUCT = 4,                /* TARS_STRUCT  */
  YYSYMBOL_TARS_BOOL = 5,                  /* TARS_BOOL  */
  YYSYMBOL_TARS_BYTE = 6,                  /* TARS_BYTE  */
  YYSYMBOL_TARS_SHORT = 7,                 /* TARS_SHORT  */
  YYSYMBOL_TARS_INT = 8,                   /* TARS_INT  */
  YYSYMBOL_TARS_DOUBLE = 9,                /* TARS_DOUBLE  */
  YYSYMBOL_TARS_FLOAT = 10,                /* TARS_FLOAT  */
  YYSYMBOL_TARS_LONG = 11,                 /* TARS_LONG  */
  YYSYMBOL_TARS_STRING = 12,               /* TARS_STRING  */
  YYSYMBOL_TARS_VECTOR = 13,               /* TARS_VECTOR  */
  YYSYMBOL_TARS_MAP = 14,                  /* TARS_MAP  */
  YYSYMBOL_TARS_NAMESPACE = 15,            /* TARS_NAMESPACE  */
  YYSYMBOL_TARS_INTERFACE = 16,            /* TARS_INTERFACE  */
  YYSYMBOL_TARS_IDENTIFIER = 17,           /* TARS_IDENTIFIER  */
  YYSYMBOL_TARS_OUT = 18,                  /* TARS_OUT  */
  YYSYMBOL_TARS_OP = 19,                   /* TARS_OP  */
  YYSYMBOL_TARS_KEY = 20,                  /* TARS_KEY  */
  YYSYMBOL_TARS_ROUTE_KEY = 21,            /* TARS_ROUTE_KEY  */
  YYSYMBOL_TARS_REQUIRE = 22,              /* TARS_REQUIRE  */
  YYSYMBOL_TARS_OPTIONAL = 23,             /* TARS_OPTIONAL  */
  YYSYMBOL_TARS_CONST_INTEGER = 24,        /* TARS_CONST_INTEGER  */
  YYSYMBOL_TARS_CONST_FLOAT = 25,          /* TARS_CONST_FLOAT  */
  YYSYMBOL_TARS_FALSE = 26,                /* TARS_FALSE  */
  YYSYMBOL_TARS_TRUE = 27,                 /* TARS_TRUE  */
  YYSYMBOL_TARS_STRING_LITERAL = 28,       /* TARS_STRING_LITERAL  */
  YYSYMBOL_TARS_SCOPE_DELIMITER = 29,      /* TARS_SCOPE_DELIMITER  */
  YYSYMBOL_TARS_CONST = 30,                /* TARS_CONST  */
  YYSYMBOL_TARS_ENUM = 31,                 /* TARS_ENUM  */
  YYSYMBOL_TARS_UNSIGNED = 32,             /* TARS_UNSIGNED  */
  YYSYMBOL_BAD_CHAR = 33,                  /* BAD_CHAR  */
  YYSYMBOL_34_ = 34,                       /* ';'  */
  YYSYMBOL_35_ = 35,                       /* '{'  */
  YYSYMBOL_36_ = 36,                       /* '}'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_38_ = 38,                       /* '='  */
  YYSYMBOL_39_ = 39,                       /* '['  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_42_ = 42,                       /* '*'  */
  YYSYMBOL_43_ = 43,                       /* ':'  */
  YYSYMBOL_44_ = 44,                       /* '<'  */
  YYSYMBOL_45_ = 45,                       /* '>'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_start = 47,                     /* start  */
  YYSYMBOL_definitions = 48,               /* definitions  */
  YYSYMBOL_49_1 = 49,                      /* $@1  */
  YYSYMBOL_50_2 = 50,                      /* $@2  */
  YYSYMBOL_definition = 51,                /* definition  */
  YYSYMBOL_enum_def = 52,                  /* enum_def  */
  YYSYMBOL_53_3 = 53,                      /* @3  */
  YYSYMBOL_enum_id = 54,                   /* enum_id  */
  YYSYMBOL_enumerator_list = 55,           /* enumerator_list  */
  YYSYMBOL_enumerator = 56,                /* enumerator  */
  YYSYMBOL_namespace_def = 57,             /* namespace_def  */
  YYSYMBOL_58_4 = 58,                      /* @4  */
  YYSYMBOL_key_def = 59,                   /* key_def  */
  YYSYMBOL_60_5 = 60,                      /* $@5  */
  YYSYMBOL_key_members = 61,               /* key_members  */
  YYSYMBOL_interface_def = 62,             /* interface_def  */
  YYSYMBOL_63_6 = 63,                      /* @6  */
  YYSYMBOL_interface_id = 64,              /* interface_id  */
  YYSYMBOL_interface_exports = 65,         /* interface_exports  */
  YYSYMBOL_interface_export = 66,          /* interface_export  */
  YYSYMBOL_operation = 67,                 /* operation  */
  YYSYMBOL_operation_preamble = 68,        /* operation_preamble  */
  YYSYMBOL_return_type = 69,               /* return_type  */
  YYSYMBOL_parameters = 70,                /* parameters  */
  YYSYMBOL_routekey_qualifier = 71,        /* routekey_qualifier  */
  YYSYMBOL_out_qualifier = 72,             /* out_qualifier  */
  YYSYMBOL_struct_def = 73,                /* struct_def  */
  YYSYMBOL_74_7 = 74,                      /* @7  */
  YYSYMBOL_struct_id = 75,                 /* struct_id  */
  YYSYMBOL_struct_exports = 76,            /* struct_exports  */
  YYSYMBOL_data_member = 77,               /* data_member  */
  YYSYMBOL_struct_type_id = 78,            /* struct_type_id  */
  YYSYMBOL_const_initializer = 79,         /* const_initializer  */
  YYSYMBOL_const_def = 80,                 /* const_def  */
  YYSYMBOL_type_id = 81,                   /* type_id  */
  YYSYMBOL_type = 82,                      /* type  */
  YYSYMBOL_type_no = 83,                   /* type_no  */
  YYSYMBOL_vector = 84,                    /* vector  */
  YYSYMBOL_map = 85,                       /* map  */
  YYSYMBOL_scoped_name = 86,               /* scoped_name  */
  YYSYMBOL_keyword = 87                    /* keyword  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   565

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  199

#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,    42,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    34,
      44,    38,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    68,    68,    75,    74,    79,    78,    83,    88,    95,
      99,   103,   107,   110,   114,   124,   123,   146,   159,   170,
     174,   182,   193,   198,   212,   220,   219,   253,   252,   271,
     284,   304,   303,   337,   341,   352,   355,   358,   363,   370,
     376,   393,   422,   423,   434,   436,   447,   458,   470,   482,
     494,   506,   510,   519,   530,   542,   541,   583,   587,   593,
     602,   606,   611,   620,   629,   647,   669,   691,   708,   712,
     716,   720,   729,   739,   749,   757,   765,   773,   786,   806,
     824,   833,   843,   853,   862,   867,   871,   880,   889,   893,
     902,   906,   910,   914,   918,   922,   926,   930,   934,   938,
     942,   946,   950,   954,   972,   976,   980,   984,   993,   997,
    1006,  1009,  1015,  1028,  1031,  1034,  1037,  1040,  1043,  1046,
    1049,  1052,  1055,  1058,  1061,  1064,  1067,  1070,  1073,  1076,
    1079,  1082,  1085,  1088,  1091,  1094,  1097,  1100
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TARS_VOID",
  "TARS_STRUCT", "TARS_BOOL", "TARS_BYTE", "TARS_SHORT", "TARS_INT",
  "TARS_DOUBLE", "TARS_FLOAT", "TARS_LONG", "TARS_STRING", "TARS_VECTOR",
  "TARS_MAP", "TARS_NAMESPACE", "TARS_INTERFACE", "TARS_IDENTIFIER",
  "TARS_OUT", "TARS_OP", "TARS_KEY", "TARS_ROUTE_KEY", "TARS_REQUIRE",
  "TARS_OPTIONAL", "TARS_CONST_INTEGER", "TARS_CONST_FLOAT", "TARS_FALSE",
  "TARS_TRUE", "TARS_STRING_LITERAL", "TARS_SCOPE_DELIMITER", "TARS_CONST",
  "TARS_ENUM", "TARS_UNSIGNED", "BAD_CHAR", "';'", "'{'", "'}'", "','",
  "'='", "'['", "']'", "')'", "'*'", "':'", "'<'", "'>'", "$accept",
  "start", "definitions", "$@1", "$@2", "definition", "enum_def", "@3",
  "enum_id", "enumerator_list", "enumerator", "namespace_def", "@4",
  "key_def", "$@5", "key_members", "interface_def", "@6", "interface_id",
  "interface_exports", "interface_export", "operation",
  "operation_preamble", "return_type", "parameters", "routekey_qualifier",
  "out_qualifier", "struct_def", "@7", "struct_id", "struct_exports",
  "data_member", "struct_type_id", "const_initializer", "const_def",
  "type_id", "type", "type_no", "vector", "map", "scoped_name", "keyword", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    59,   123,   125,    44,    61,    91,
      93,    41,    42,    58,    60,    62
};
#endif

#define YYPACT_NINF (-146)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-113)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     145,   -22,   286,    20,   445,    16,   372,   475,    42,  -146,
      26,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,    11,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,     7,     2,  -146,    37,    51,    23,   182,    19,
    -146,  -146,    35,  -146,  -146,  -146,    31,    32,    33,    49,
     102,    66,    -2,  -146,   386,   415,  -146,  -146,  -146,  -146,
     153,    -5,    69,  -146,     8,    87,   102,   505,   252,   220,
    -146,   120,  -146,  -146,     5,  -146,    29,    78,  -146,  -146,
    -146,  -146,  -146,  -146,    79,    86,    88,  -146,  -146,  -146,
    -146,  -146,    75,    80,    83,  -146,    81,  -146,    90,    93,
    -146,    12,   112,  -146,   372,   372,   314,    98,   103,  -146,
    -146,   107,   122,  -146,  -146,   533,   127,   108,  -146,   153,
    -146,   505,   252,  -146,   252,  -146,  -146,    15,    68,    82,
    -146,  -146,  -146,  -146,   372,   372,  -146,  -146,   220,  -146,
    -146,   -26,   109,   118,  -146,  -146,  -146,  -146,  -146,   343,
    -146,  -146,  -146,   117,   119,  -146,   146,  -146,  -146,   372,
     372,  -146,   153,   153,  -146,  -146,  -146,  -146,  -146
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       7,    13,    15,     9,    12,    10,    31,    11,    55,    14,
       5,    59,   114,   113,   115,   116,   117,   118,   120,   119,
     121,   122,   124,   125,   126,    57,   127,   123,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    58,    25,
      33,    34,     0,    86,    90,    91,    93,    95,    99,    98,
      97,   100,     0,     0,   110,     0,     0,     0,    85,    88,
     101,   102,   103,    17,    18,     1,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,   111,    92,    94,    96,
       0,    80,     0,    84,     0,     0,     0,    24,     0,     0,
       6,     0,    27,   105,     0,   109,     0,    77,    72,    73,
      75,    76,    74,    79,     0,     0,     0,    82,    89,    87,
     112,     4,    21,     0,    20,    22,     0,    43,     0,    37,
      39,     0,     0,    42,     0,     0,     0,     0,    61,    63,
      71,     0,     0,   106,   104,     0,     0,     0,    83,     0,
      16,    24,     0,    32,     0,    54,    53,     0,     0,     0,
      45,    41,    68,    69,     0,     0,    70,    56,     0,    26,
      29,     0,     0,    78,    81,    23,    19,    36,    35,     0,
      40,    49,    47,    64,    67,    60,     0,    28,   108,     0,
       0,    46,     0,     0,    30,    50,    48,    65,    66
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,   -65,  -146,  -146,  -146,  -146,  -146,  -146,    13,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -109,
    -146,  -146,  -146,  -146,  -146,   -17,   -13,  -146,  -146,  -146,
      -1,  -146,  -146,  -145,  -146,    -6,   -82,  -146,  -146,  -146,
     -51,     3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    76,    80,    10,    11,    77,    12,   123,
     124,    13,    81,    14,   142,   171,    15,    78,    16,   128,
     129,   130,   131,   132,   157,   158,   159,    17,    79,    18,
     137,   138,   139,   113,    19,   140,    68,    69,    70,    71,
      72,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    82,   104,   106,   175,    48,   143,    51,    83,   118,
      74,   186,    20,    53,   187,   100,   133,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    95,    64,    64,
     155,   121,   119,   156,   115,   102,   141,    49,   116,   114,
      65,    65,    75,   177,    66,   178,    85,   197,   198,   -44,
     144,    84,   179,   -44,    86,    52,   180,    87,    88,    89,
      -3,    90,    94,   172,    95,    96,   145,    97,    98,    53,
     133,    93,   133,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    53,    99,    64,   117,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    65,   114,    64,
      66,   101,    -8,     1,   120,   -52,     2,  -110,   146,   -52,
     147,    65,   148,   149,    66,   152,   150,     3,     4,   -51,
     151,     1,     5,   -51,     2,   160,   153,   154,   162,   163,
     166,   161,     6,     7,   167,     3,     4,   168,    -8,   170,
       5,   114,   114,   169,   173,    -8,     1,  -112,   174,     2,
       6,     7,   181,   182,   188,   192,    -8,   193,   183,   184,
       3,     4,   189,   194,   176,     5,   190,   185,     0,     0,
     107,     0,     0,   191,     0,     6,     7,   108,   109,   110,
     111,   112,    65,   195,   196,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,    31,    32,    33,    34,    91,
      36,     0,    37,     0,    38,    39,    40,    41,    42,    43,
      44,     0,    45,    46,    47,     0,     0,     0,     0,     0,
       0,    53,     0,     0,    92,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,     0,    64,     0,     0,
       0,     0,   134,   135,   136,     0,     0,     0,     0,    65,
       0,     0,    66,   126,     0,   127,   -62,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,     0,    66,     0,     0,    21,   -38,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    35,    36,     0,    37,     0,    38,    39,
      40,    41,    42,    43,    44,    53,    45,    46,    47,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
       0,    64,     0,     0,     0,     0,   164,   165,     0,     0,
       0,     0,     0,    65,    53,     0,    66,     0,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,     0,
      64,   155,     0,     0,   156,     0,     0,     0,     0,     0,
       0,     0,    65,    53,     0,    66,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,   103,     0,    64,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    65,     0,    64,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,   105,     0,    66,     0,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,     0,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,    66,    22,    23,
      24,    25,    26,    27,    28,    29,     0,    30,    31,    32,
      33,    34,    50,    36,     0,    37,     0,    38,    39,    40,
      41,    42,    43,    44,     0,    45,    46,    47,    22,    23,
      24,    25,    26,    27,    28,    29,     0,    30,    31,    32,
      33,    34,    73,    36,     0,    37,     0,    38,    39,    40,
      41,    42,    43,    44,     0,    45,    46,    47,    22,    23,
      24,    25,    26,    27,    28,    29,     0,    30,    31,    32,
      33,    34,   122,    36,     0,    37,     0,    38,    39,    40,
      41,    42,    43,    44,     0,    45,    46,    47,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,     0,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
       6,    52,    84,    85,   149,     2,     1,     4,     1,     1,
       7,    37,    34,     1,    40,    80,    98,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    29,    17,    17,
      18,    96,    24,    21,    39,    37,   101,    17,    43,    90,
      29,    29,     0,   152,    32,   154,    44,   192,   193,    37,
      45,    44,    37,    41,    17,    39,    41,     6,     7,     8,
      34,    38,    43,   145,    29,    34,    37,    35,    35,     1,
     152,    68,   154,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     1,    35,    17,    17,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    29,   149,    17,
      32,    35,     0,     1,    17,    37,     4,    29,    29,    41,
      24,    29,    24,    38,    32,    34,    36,    15,    16,    37,
      37,     1,    20,    41,     4,   131,    36,    34,   134,   135,
     136,    19,    30,    31,    36,    15,    16,    34,    36,    17,
      20,   192,   193,    36,    17,     0,     1,    29,    40,     4,
      30,    31,   158,   159,    45,    38,    36,    38,   164,   165,
      15,    16,   179,    17,   151,    20,   179,   168,    -1,    -1,
      17,    -1,    -1,   179,    -1,    30,    31,    24,    25,    26,
      27,    28,    29,   189,   190,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    42,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,     1,    -1,     3,    36,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    -1,    -1,     1,    36,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,     1,    30,    31,    32,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      -1,    -1,    -1,    29,     1,    -1,    32,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      17,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,     1,    -1,    32,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     1,    -1,    17,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    29,    -1,    17,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,     1,    -1,    32,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    32,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    15,    16,    20,    30,    31,    47,    48,
      51,    52,    54,    57,    59,    62,    64,    73,    75,    80,
      34,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      12,    13,    14,    15,    16,    17,    18,    20,    22,    23,
      24,    25,    26,    27,    28,    30,    31,    32,    87,    17,
      17,    87,    39,     1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    17,    29,    32,    81,    82,    83,
      84,    85,    86,    17,    87,     0,    49,    53,    63,    74,
      50,    58,    86,     1,    44,    44,    17,     6,     7,     8,
      38,    17,    42,    87,    43,    29,    34,    35,    35,    35,
      48,    35,    37,     1,    82,     1,    82,    17,    24,    25,
      26,    27,    28,    79,    86,    39,    43,    17,     1,    24,
      17,    48,    17,    55,    56,    87,     1,     3,    65,    66,
      67,    68,    69,    82,    22,    23,    24,    76,    77,    78,
      81,    48,    60,     1,    45,    37,    29,    24,    24,    38,
      36,    37,    34,    36,    34,    18,    21,    70,    71,    72,
      81,    19,    81,    81,    22,    23,    81,    36,    34,    36,
      17,    61,    82,    17,    40,    79,    55,    65,    65,    37,
      41,    81,    81,    81,    81,    76,    37,    40,    45,    71,
      72,    81,    38,    38,    17,    81,    81,    79,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    49,    48,    50,    48,    48,    48,    51,
      51,    51,    51,    51,    51,    53,    52,    54,    54,    55,
      55,    56,    56,    56,    56,    58,    57,    60,    59,    61,
      61,    63,    62,    64,    64,    65,    65,    65,    65,    66,
      67,    68,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    72,    74,    73,    75,    75,    75,
      76,    76,    76,    77,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    80,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    85,    85,
      86,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     4,     0,     4,     1,     0,     1,
       1,     1,     1,     1,     1,     0,     5,     2,     2,     3,
       1,     1,     1,     3,     0,     0,     6,     0,     7,     1,
       3,     0,     5,     2,     2,     3,     3,     1,     0,     1,
       3,     2,     1,     1,     0,     1,     3,     2,     4,     2,
       4,     1,     1,     1,     1,     0,     5,     2,     2,     2,
       3,     1,     0,     1,     3,     5,     5,     3,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       2,     5,     3,     4,     2,     1,     1,     3,     1,     3,
       1,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     4,     2,     6,     3,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3:
#line 75 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 1459 "tars.tab.cpp"
    break;

  case 5:
#line 79 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyerrok;
}
#line 1467 "tars.tab.cpp"
    break;

  case 7:
#line 84 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("`;' missing after definition");
}
#line 1475 "tars.tab.cpp"
    break;

  case 8:
#line 88 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 1482 "tars.tab.cpp"
    break;

  case 9:
#line 96 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    assert(yyvsp[0] == 0 || NamespacePtr::dynamicCast(yyvsp[0]));
}
#line 1490 "tars.tab.cpp"
    break;

  case 10:
#line 100 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    assert(yyvsp[0] == 0 || InterfacePtr::dynamicCast(yyvsp[0]));
}
#line 1498 "tars.tab.cpp"
    break;

  case 11:
#line 104 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    assert(yyvsp[0] == 0 || StructPtr::dynamicCast(yyvsp[0]));
}
#line 1506 "tars.tab.cpp"
    break;

  case 12:
#line 108 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 1513 "tars.tab.cpp"
    break;

  case 13:
#line 111 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    assert(yyvsp[0] == 0 || EnumPtr::dynamicCast(yyvsp[0]));
}
#line 1521 "tars.tab.cpp"
    break;

  case 14:
#line 115 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    assert(yyvsp[0] == 0 || ConstPtr::dynamicCast(yyvsp[0]));
}
#line 1529 "tars.tab.cpp"
    break;

  case 15:
#line 124 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = yyvsp[0];
}
#line 1537 "tars.tab.cpp"
    break;

  case 16:
#line 128 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    if(yyvsp[-2])
    {
        g_parse->popContainer();
        yyval = yyvsp[-2];
    }
    else
    {
        yyval = 0;
    }

    yyval = yyvsp[-3];
}
#line 1555 "tars.tab.cpp"
    break;

  case 17:
#line 147 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    NamespacePtr c = NamespacePtr::dynamicCast(g_parse->currentContainer());
    if(!c)
    {
        g_parse->error("enum must define in namespace");
    }
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[0]);
    EnumPtr e = c->createEnum(ident->v);
    g_parse->pushContainer(e);

    yyval = e;
}
#line 1572 "tars.tab.cpp"
    break;

  case 18:
#line 160 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->error("keyword `" + ident->v + "' cannot be used as enumeration name");
    yyval = yyvsp[0];
}
#line 1582 "tars.tab.cpp"
    break;

  case 19:
#line 171 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = yyvsp[-1];
}
#line 1590 "tars.tab.cpp"
    break;

  case 20:
#line 175 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 1597 "tars.tab.cpp"
    break;

  case 21:
#line 183 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    TypePtr type        = TypePtr::dynamicCast(g_parse->createBuiltin(Builtin::KindLong));
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[0]);
    TypeIdPtr tPtr      = new TypeId(type, ident->v);
    tPtr->disableDefault();
    EnumPtr e = EnumPtr::dynamicCast(g_parse->currentContainer());
    assert(e);
    e->addMember(tPtr);
    yyval = e;
}
#line 1612 "tars.tab.cpp"
    break;

  case 22:
#line 194 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->error("keyword `" + ident->v + "' cannot be used as enumerator");
}
#line 1621 "tars.tab.cpp"
    break;

  case 23:
#line 199 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    TypePtr type        = TypePtr::dynamicCast(g_parse->createBuiltin(Builtin::KindLong));
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[-2]);
    TypeIdPtr tPtr      = new TypeId(type, ident->v);
    ConstGrammarPtr sPtr    = ConstGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->checkConstValue(tPtr, sPtr->t);
    tPtr->setDefault(sPtr->v);
    EnumPtr e = EnumPtr::dynamicCast(g_parse->currentContainer());
    assert(e);
    e->addMember(tPtr);
    yyval = e;
}
#line 1638 "tars.tab.cpp"
    break;

  case 24:
#line 212 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 1645 "tars.tab.cpp"
    break;

  case 25:
#line 220 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[0]);
    ContainerPtr c      = g_parse->currentContainer();
    NamespacePtr n      = c->createNamespace(ident->v);
    if(n)
    {
        g_parse->pushContainer(n);
        yyval = GrammarBasePtr::dynamicCast(n);
    }
    else
    {
        yyval = 0;
    }
}
#line 1664 "tars.tab.cpp"
    break;

  case 26:
#line 235 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    if(yyvsp[-3])
    {
        g_parse->popContainer();
        yyval = yyvsp[-3];
    }
    else
    {
        yyval = 0;
    }
}
#line 1680 "tars.tab.cpp"
    break;

  case 27:
#line 253 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[-1]);
    StructPtr sp = StructPtr::dynamicCast(g_parse->findUserType(ident->v));
    if(!sp)
    {
        g_parse->error("struct '" + ident->v + "' undefined!");
    }

    g_parse->setKeyStruct(sp);
}
#line 1695 "tars.tab.cpp"
    break;

  case 28:
#line 264 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 1702 "tars.tab.cpp"
    break;

  case 29:
#line 272 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    StructPtr np = g_parse->getKeyStruct();
    if(np)
    {
        np->addKey(ident->v);
    }
    else
    {
        yyval = 0;
    }
}
#line 1719 "tars.tab.cpp"
    break;

  case 30:
#line 285 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    StructPtr np = g_parse->getKeyStruct();
    if(np)
    {
        np->addKey(ident->v);
    }
    else
    {
        yyval = 0;
    }   
}
#line 1736 "tars.tab.cpp"
    break;

  case 31:
#line 304 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);

    NamespacePtr c = NamespacePtr::dynamicCast(g_parse->currentContainer());

    InterfacePtr cl = c->createInterface(ident->v);
    if(cl)
    {
        g_parse->pushContainer(cl);
        yyval = GrammarBasePtr::dynamicCast(cl);
    }
    else
    {
        yyval = 0;
    }
}
#line 1757 "tars.tab.cpp"
    break;

  case 32:
#line 321 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    if(yyvsp[-3])
    {
       g_parse->popContainer();
       yyval = GrammarBasePtr::dynamicCast(yyvsp[-3]);
    }
    else
    {
       yyval = 0;
    }
}
#line 1773 "tars.tab.cpp"
    break;

  case 33:
#line 338 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = yyvsp[0];
}
#line 1781 "tars.tab.cpp"
    break;

  case 34:
#line 342 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->error("keyword `" + ident->v + "' cannot be used as interface name");
    yyval = yyvsp[0];
}
#line 1791 "tars.tab.cpp"
    break;

  case 35:
#line 353 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 1798 "tars.tab.cpp"
    break;

  case 36:
#line 356 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 1805 "tars.tab.cpp"
    break;

  case 37:
#line 359 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("`;' missing after definition");
}
#line 1813 "tars.tab.cpp"
    break;

  case 38:
#line 363 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 1820 "tars.tab.cpp"
    break;

  case 40:
#line 377 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    if(yyvsp[-2])
    {
        g_parse->popContainer();
        yyval = GrammarBasePtr::dynamicCast(yyvsp[-2]);
    }
    else
    {
        yyval = 0;
    }
}
#line 1836 "tars.tab.cpp"
    break;

  case 41:
#line 394 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    TypePtr returnType = TypePtr::dynamicCast(yyvsp[-1]);
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    string name        = ident->v;
    InterfacePtr cl    = InterfacePtr::dynamicCast(g_parse->currentContainer());
    if(cl)
    {
         OperationPtr op = cl->createOperation(name, returnType);
         if(op)
         {
             g_parse->pushContainer(op);
             yyval = GrammarBasePtr::dynamicCast(op);
         }
         else
         {
             yyval = 0;
         }
    }
    else
    {
        yyval = 0;
    }
}
#line 1864 "tars.tab.cpp"
    break;

  case 43:
#line 424 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = 0;
}
#line 1872 "tars.tab.cpp"
    break;

  case 44:
#line 434 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 1879 "tars.tab.cpp"
    break;

  case 45:
#line 437 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    TypeIdPtr  tsp         = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
        op->createParamDecl(tsp, false, false);
    }
}
#line 1894 "tars.tab.cpp"
    break;

  case 46:
#line 448 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    TypeIdPtr  tsp         = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
        op->createParamDecl(tsp, false, false);
    }
}
#line 1909 "tars.tab.cpp"
    break;

  case 47:
#line 459 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    BoolGrammarPtr isOutParam  = BoolGrammarPtr::dynamicCast(yyvsp[-1]);
    TypeIdPtr  tsp         = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
        op->createParamDecl(tsp, isOutParam->v, false);
    }
}
#line 1925 "tars.tab.cpp"
    break;

  case 48:
#line 471 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    BoolGrammarPtr isOutParam  = BoolGrammarPtr::dynamicCast(yyvsp[-1]);
    TypeIdPtr  tsp         = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
        op->createParamDecl(tsp, isOutParam->v, false);
    }
}
#line 1941 "tars.tab.cpp"
    break;

  case 49:
#line 483 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    BoolGrammarPtr isRouteKeyParam  = BoolGrammarPtr::dynamicCast(yyvsp[-1]);
    TypeIdPtr  tsp              = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
         op->createParamDecl(tsp, false, isRouteKeyParam->v);
    }
}
#line 1957 "tars.tab.cpp"
    break;

  case 50:
#line 495 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    BoolGrammarPtr isRouteKeyParam = BoolGrammarPtr::dynamicCast(yyvsp[-1]);
    TypeIdPtr  tsp             = TypeIdPtr::dynamicCast(yyvsp[0]);

    OperationPtr op = OperationPtr::dynamicCast(g_parse->currentContainer());
    assert(op);
    if(op)
    {
         op->createParamDecl(tsp, false, isRouteKeyParam->v);
    }
}
#line 1973 "tars.tab.cpp"
    break;

  case 51:
#line 507 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("'out' must be defined with a type");
}
#line 1981 "tars.tab.cpp"
    break;

  case 52:
#line 511 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("'routekey' must be defined with a type");
}
#line 1989 "tars.tab.cpp"
    break;

  case 53:
#line 520 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    BoolGrammarPtr routekey = new BoolGrammar;
    routekey->v = true;
    yyval = GrammarBasePtr::dynamicCast(routekey);
}
#line 1999 "tars.tab.cpp"
    break;

  case 54:
#line 531 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    BoolGrammarPtr out = new BoolGrammar;
    out->v = true;
    yyval = GrammarBasePtr::dynamicCast(out);
}
#line 2009 "tars.tab.cpp"
    break;

  case 55:
#line 542 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    NamespacePtr np = NamespacePtr::dynamicCast(g_parse->currentContainer());
    if(np)
    {
         StructPtr sp = np->createStruct(ident->v);
         if(sp)
         {
             g_parse->pushContainer(sp);
             yyval = GrammarBasePtr::dynamicCast(sp);
         }
         else
         {
             yyval = 0;
         }
    }
    else
    {
       g_parse->error("struct '" + ident->v + "' must definition in namespace");
    }
}
#line 2035 "tars.tab.cpp"
    break;

  case 56:
#line 564 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    if(yyvsp[-3])
    {
        g_parse->popContainer();
    }
    yyval = yyvsp[-3];

    StructPtr st = StructPtr::dynamicCast(yyval);
    assert(st);
    if(st->getAllMemberPtr().size() == 0)
    {
        g_parse->error("struct `" + st->getSid() + "' must have at least one member");
    }
}
#line 2054 "tars.tab.cpp"
    break;

  case 57:
#line 584 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = yyvsp[0];
}
#line 2062 "tars.tab.cpp"
    break;

  case 58:
#line 588 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);

    g_parse->error("keyword `" + ident->v + "' cannot be used as struct name");
}
#line 2072 "tars.tab.cpp"
    break;

  case 59:
#line 594 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("abstract declarator '<anonymous struct>' used as declaration");
}
#line 2080 "tars.tab.cpp"
    break;

  case 60:
#line 603 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{

}
#line 2088 "tars.tab.cpp"
    break;

  case 61:
#line 607 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
   g_parse->error("';' missing after definition");
}
#line 2096 "tars.tab.cpp"
    break;

  case 62:
#line 611 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2103 "tars.tab.cpp"
    break;

  case 63:
#line 621 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = GrammarBasePtr::dynamicCast(yyvsp[0]);
}
#line 2111 "tars.tab.cpp"
    break;

  case 64:
#line 630 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StructPtr np = StructPtr::dynamicCast(g_parse->currentContainer());
    if(np)
    {
        IntergerGrammarPtr iPtr = IntergerGrammarPtr::dynamicCast(yyvsp[-2]);
        g_parse->checkTag(iPtr->v);

        TypeIdPtr tPtr  = TypeIdPtr::dynamicCast(yyvsp[0]);
        tPtr->setRequire(iPtr->v);
        np->addTypeId(tPtr);
        yyval = GrammarBasePtr::dynamicCast(yyvsp[0]);
    }
    else
    {
        yyval = 0;
    }
}
#line 2133 "tars.tab.cpp"
    break;

  case 65:
#line 648 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StructPtr np = StructPtr::dynamicCast(g_parse->currentContainer());
    if(np)
    {
        IntergerGrammarPtr iPtr = IntergerGrammarPtr::dynamicCast(yyvsp[-4]);
        g_parse->checkTag(iPtr->v);

        TypeIdPtr tPtr   = TypeIdPtr::dynamicCast(yyvsp[-2]);
        ConstGrammarPtr sPtr = ConstGrammarPtr::dynamicCast(yyvsp[0]);
        g_parse->checkConstValue(tPtr, sPtr->t);

        tPtr->setRequire(iPtr->v);
        tPtr->setDefault(sPtr->v);
        np->addTypeId(tPtr);
        yyval = GrammarBasePtr::dynamicCast(yyvsp[-2]);
    }
    else
    {
        yyval = 0;
    }
}
#line 2159 "tars.tab.cpp"
    break;

  case 66:
#line 670 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StructPtr np = StructPtr::dynamicCast(g_parse->currentContainer());
    if(np)
    {
        IntergerGrammarPtr iPtr = IntergerGrammarPtr::dynamicCast(yyvsp[-4]);
        g_parse->checkTag(iPtr->v);

        TypeIdPtr tPtr   = TypeIdPtr::dynamicCast(yyvsp[-2]);
        ConstGrammarPtr sPtr = ConstGrammarPtr::dynamicCast(yyvsp[0]);
        g_parse->checkConstValue(tPtr, sPtr->t);

        tPtr->setOptional(iPtr->v);
        tPtr->setDefault(sPtr->v);
        np->addTypeId(tPtr);
        yyval = GrammarBasePtr::dynamicCast(yyvsp[-2]);
    }
    else
    {
        yyval = 0;
    }
}
#line 2185 "tars.tab.cpp"
    break;

  case 67:
#line 692 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StructPtr np = StructPtr::dynamicCast(g_parse->currentContainer());
    if(np)
    {
        IntergerGrammarPtr iPtr = IntergerGrammarPtr::dynamicCast(yyvsp[-2]);
        g_parse->checkTag(iPtr->v);
        TypeIdPtr tPtr = TypeIdPtr::dynamicCast(yyvsp[0]);
        tPtr->setOptional(iPtr->v);
        np->addTypeId(tPtr);
        yyval = GrammarBasePtr::dynamicCast(yyvsp[0]);
    }
    else
    {
        yyval = 0;
    }
}
#line 2206 "tars.tab.cpp"
    break;

  case 68:
#line 709 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("struct member need 'tag'");
}
#line 2214 "tars.tab.cpp"
    break;

  case 69:
#line 713 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("struct member need 'tag'");
}
#line 2222 "tars.tab.cpp"
    break;

  case 70:
#line 717 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("struct member need 'require' or 'optional'");
}
#line 2230 "tars.tab.cpp"
    break;

  case 71:
#line 721 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("struct member need 'tag' or 'require' or 'optional'");
}
#line 2238 "tars.tab.cpp"
    break;

  case 72:
#line 730 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    IntergerGrammarPtr intVal = IntergerGrammarPtr::dynamicCast(yyvsp[0]);
    ostringstream sstr;
    sstr << intVal->v;
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::VALUE;
    c->v = sstr.str();
    yyval = c;
}
#line 2252 "tars.tab.cpp"
    break;

  case 73:
#line 740 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    FloatGrammarPtr floatVal = FloatGrammarPtr::dynamicCast(yyvsp[0]);
    ostringstream sstr;
    sstr << floatVal->v;
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::VALUE;
    c->v = sstr.str();
    yyval = c;
}
#line 2266 "tars.tab.cpp"
    break;

  case 74:
#line 750 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::STRING;
    c->v = ident->v;
    yyval = c;
}
#line 2278 "tars.tab.cpp"
    break;

  case 75:
#line 758 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::BOOL;
    c->v = ident->v;
    yyval = c;
}
#line 2290 "tars.tab.cpp"
    break;

  case 76:
#line 766 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::BOOL;
    c->v = ident->v;
    yyval = c;
}
#line 2302 "tars.tab.cpp"
    break;

  case 77:
#line 774 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);

    if (g_parse->checkEnum(ident->v) == false)
    {
        g_parse->error("error enum default value, not defined yet");
    }
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::ENUM;
    c->v = ident->v;
    yyval = c;
}
#line 2319 "tars.tab.cpp"
    break;

  case 78:
#line 787 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{

    StringGrammarPtr scoped = StringGrammarPtr::dynamicCast(yyvsp[-2]);
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[0]);
    
    if (g_parse->checkEnum(ident->v) == false)
    {
        g_parse->error("error enum default value, not defined yet");
    }
    ConstGrammarPtr c = new ConstGrammar();
    c->t = ConstGrammar::ENUM;
    c->v = scoped->v + "::" + ident->v;
    yyval = c;
}
#line 2338 "tars.tab.cpp"
    break;

  case 79:
#line 807 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    NamespacePtr np = NamespacePtr::dynamicCast(g_parse->currentContainer());
    if(!np)
    {
        g_parse->error("const type must define in namespace");
    }

    TypeIdPtr t   = TypeIdPtr::dynamicCast(yyvsp[-2]);
    ConstGrammarPtr c = ConstGrammarPtr::dynamicCast(yyvsp[0]);
    ConstPtr cPtr = np->createConst(t, c);
    yyval = cPtr;
}
#line 2355 "tars.tab.cpp"
    break;

  case 80:
#line 825 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    TypePtr type = TypePtr::dynamicCast(yyvsp[-1]);
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);

    TypeIdPtr typeIdPtr = new TypeId(type, ident->v);

    yyval = GrammarBasePtr::dynamicCast(typeIdPtr);
}
#line 2368 "tars.tab.cpp"
    break;

  case 81:
#line 834 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    TypePtr type = g_parse->createVector(TypePtr::dynamicCast(yyvsp[-4]));
    IntergerGrammarPtr iPtrSize = IntergerGrammarPtr::dynamicCast(yyvsp[-1]);
    g_parse->checkArrayVaid(type,iPtrSize->v);
    type->setArray(iPtrSize->v);
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[-3]);
    TypeIdPtr typeIdPtr = new TypeId(type, ident->v);
    yyval = GrammarBasePtr::dynamicCast(typeIdPtr);
}
#line 2382 "tars.tab.cpp"
    break;

  case 82:
#line 844 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    TypePtr type = g_parse->createVector(TypePtr::dynamicCast(yyvsp[-2]));
    //IntergerGrammarPtr iPtrSize = IntergerGrammarPtr::dynamicCast($4);
    g_parse->checkPointerVaid(type);
    type->setPointer(true);
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    TypeIdPtr typeIdPtr = new TypeId(type, ident->v);
    yyval = GrammarBasePtr::dynamicCast(typeIdPtr);
}
#line 2396 "tars.tab.cpp"
    break;

  case 83:
#line 854 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    TypePtr type = TypePtr::dynamicCast(yyvsp[-3]);
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[-2]);
    TypeIdPtr typeIdPtr = new TypeId(type, ident->v);
    IntergerGrammarPtr iPtrSize = IntergerGrammarPtr::dynamicCast(yyvsp[-1]);
    g_parse->checkArrayVaid(type,iPtrSize->v);
    yyval = GrammarBasePtr::dynamicCast(typeIdPtr);
}
#line 2409 "tars.tab.cpp"
    break;

  case 84:
#line 863 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->error("keyword `" + ident->v + "' cannot be used as data member name");
}
#line 2418 "tars.tab.cpp"
    break;

  case 85:
#line 868 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("missing data member name");
}
#line 2426 "tars.tab.cpp"
    break;

  case 86:
#line 872 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    g_parse->error("unkown type");
}
#line 2434 "tars.tab.cpp"
    break;

  case 87:
#line 881 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{

    TypePtr type = TypePtr::dynamicCast(yyvsp[-2]);
    IntergerGrammarPtr iPtrSize = IntergerGrammarPtr::dynamicCast(yyvsp[0]);
    g_parse->checkArrayVaid(type,iPtrSize->v);
    type->setArray(iPtrSize->v);
    yyval = type;
}
#line 2447 "tars.tab.cpp"
    break;

  case 88:
#line 890 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = yyvsp[0];
}
#line 2455 "tars.tab.cpp"
    break;

  case 89:
#line 894 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
   g_parse->error("array missing size");
}
#line 2463 "tars.tab.cpp"
    break;

  case 90:
#line 903 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindBool);
}
#line 2471 "tars.tab.cpp"
    break;

  case 91:
#line 907 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindByte);
}
#line 2479 "tars.tab.cpp"
    break;

  case 92:
#line 911 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindShort,true);
}
#line 2487 "tars.tab.cpp"
    break;

  case 93:
#line 915 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindShort);
}
#line 2495 "tars.tab.cpp"
    break;

  case 94:
#line 919 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindInt,true);
}
#line 2503 "tars.tab.cpp"
    break;

  case 95:
#line 923 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindInt);
}
#line 2511 "tars.tab.cpp"
    break;

  case 96:
#line 927 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindLong,true);
}
#line 2519 "tars.tab.cpp"
    break;

  case 97:
#line 931 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindLong);
}
#line 2527 "tars.tab.cpp"
    break;

  case 98:
#line 935 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindFloat);
}
#line 2535 "tars.tab.cpp"
    break;

  case 99:
#line 939 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindDouble);
}
#line 2543 "tars.tab.cpp"
    break;

  case 100:
#line 943 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    yyval = g_parse->createBuiltin(Builtin::KindString);
}
#line 2551 "tars.tab.cpp"
    break;

  case 101:
#line 947 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
   yyval = GrammarBasePtr::dynamicCast(yyvsp[0]);
}
#line 2559 "tars.tab.cpp"
    break;

  case 102:
#line 951 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
   yyval = GrammarBasePtr::dynamicCast(yyvsp[0]);
}
#line 2567 "tars.tab.cpp"
    break;

  case 103:
#line 955 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    TypePtr sp = g_parse->findUserType(ident->v);
    if(sp)
    {
        yyval = GrammarBasePtr::dynamicCast(sp);
    }
    else
    {
        g_parse->error("'" + ident->v + "' undefined!");
    }
}
#line 2584 "tars.tab.cpp"
    break;

  case 104:
#line 973 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
   yyval = GrammarBasePtr::dynamicCast(g_parse->createVector(TypePtr::dynamicCast(yyvsp[-1])));
}
#line 2592 "tars.tab.cpp"
    break;

  case 105:
#line 977 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
   g_parse->error("vector error");
}
#line 2600 "tars.tab.cpp"
    break;

  case 106:
#line 981 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
   g_parse->error("vector missing '>'");
}
#line 2608 "tars.tab.cpp"
    break;

  case 107:
#line 985 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
   g_parse->error("vector missing type");
}
#line 2616 "tars.tab.cpp"
    break;

  case 108:
#line 994 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
   yyval = GrammarBasePtr::dynamicCast(g_parse->createMap(TypePtr::dynamicCast(yyvsp[-3]), TypePtr::dynamicCast(yyvsp[-1])));
}
#line 2624 "tars.tab.cpp"
    break;

  case 109:
#line 998 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
   g_parse->error("map error");
}
#line 2632 "tars.tab.cpp"
    break;

  case 110:
#line 1007 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2639 "tars.tab.cpp"
    break;

  case 111:
#line 1010 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr ident = StringGrammarPtr::dynamicCast(yyvsp[0]);
    ident->v = "::" + ident->v;
    yyval = GrammarBasePtr::dynamicCast(ident);
}
#line 2649 "tars.tab.cpp"
    break;

  case 112:
#line 1016 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
    StringGrammarPtr scoped = StringGrammarPtr::dynamicCast(yyvsp[-2]);
    StringGrammarPtr ident  = StringGrammarPtr::dynamicCast(yyvsp[0]);
    scoped->v += "::";
    scoped->v += ident->v;
    yyval = GrammarBasePtr::dynamicCast(scoped);
}
#line 2661 "tars.tab.cpp"
    break;

  case 113:
#line 1029 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2668 "tars.tab.cpp"
    break;

  case 114:
#line 1032 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2675 "tars.tab.cpp"
    break;

  case 115:
#line 1035 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2682 "tars.tab.cpp"
    break;

  case 116:
#line 1038 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2689 "tars.tab.cpp"
    break;

  case 117:
#line 1041 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2696 "tars.tab.cpp"
    break;

  case 118:
#line 1044 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2703 "tars.tab.cpp"
    break;

  case 119:
#line 1047 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2710 "tars.tab.cpp"
    break;

  case 120:
#line 1050 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2717 "tars.tab.cpp"
    break;

  case 121:
#line 1053 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2724 "tars.tab.cpp"
    break;

  case 122:
#line 1056 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2731 "tars.tab.cpp"
    break;

  case 123:
#line 1059 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2738 "tars.tab.cpp"
    break;

  case 124:
#line 1062 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2745 "tars.tab.cpp"
    break;

  case 125:
#line 1065 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2752 "tars.tab.cpp"
    break;

  case 126:
#line 1068 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2759 "tars.tab.cpp"
    break;

  case 127:
#line 1071 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2766 "tars.tab.cpp"
    break;

  case 128:
#line 1074 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2773 "tars.tab.cpp"
    break;

  case 129:
#line 1077 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2780 "tars.tab.cpp"
    break;

  case 130:
#line 1080 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2787 "tars.tab.cpp"
    break;

  case 131:
#line 1083 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2794 "tars.tab.cpp"
    break;

  case 132:
#line 1086 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2801 "tars.tab.cpp"
    break;

  case 133:
#line 1089 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2808 "tars.tab.cpp"
    break;

  case 134:
#line 1092 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2815 "tars.tab.cpp"
    break;

  case 135:
#line 1095 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2822 "tars.tab.cpp"
    break;

  case 136:
#line 1098 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2829 "tars.tab.cpp"
    break;

  case 137:
#line 1101 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"
{
}
#line 2836 "tars.tab.cpp"
    break;


#line 2840 "tars.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1105 "/develop/TarsFramework/tarscpp/tools/tarsgrammar/tars.y"



