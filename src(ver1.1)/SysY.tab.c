/* A Bison parser, made by GNU Bison 3.7.1.  */

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
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "SysY.y"


#include <stdio.h>
#include "ast.h"
int yylex(void);
void yyerror(char *);


#line 80 "SysY.tab.c"

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

#include "SysY.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SIZEOF = 3,                     /* SIZEOF  */
  YYSYMBOL_STRING_LITERAL = 4,             /* STRING_LITERAL  */
  YYSYMBOL_PTR_OP = 5,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 6,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 7,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 8,                    /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 9,                   /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 10,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 11,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 12,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 13,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 14,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 15,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 16,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 17,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 18,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 19,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 20,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 21,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 22,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 23,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 24,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 25,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 26,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 27,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 28,                    /* EXTERN  */
  YYSYMBOL_STATIC = 29,                    /* STATIC  */
  YYSYMBOL_AUTO = 30,                      /* AUTO  */
  YYSYMBOL_REGISTER = 31,                  /* REGISTER  */
  YYSYMBOL_CHAR = 32,                      /* CHAR  */
  YYSYMBOL_SHORT = 33,                     /* SHORT  */
  YYSYMBOL_LONG = 34,                      /* LONG  */
  YYSYMBOL_SIGNED = 35,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 36,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 37,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 38,                    /* DOUBLE  */
  YYSYMBOL_CONST = 39,                     /* CONST  */
  YYSYMBOL_VOLATILE = 40,                  /* VOLATILE  */
  YYSYMBOL_STRUCT = 41,                    /* STRUCT  */
  YYSYMBOL_UNION = 42,                     /* UNION  */
  YYSYMBOL_ENUM = 43,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 44,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 45,                      /* CASE  */
  YYSYMBOL_DEFAULT = 46,                   /* DEFAULT  */
  YYSYMBOL_SWITCH = 47,                    /* SWITCH  */
  YYSYMBOL_DO = 48,                        /* DO  */
  YYSYMBOL_FOR = 49,                       /* FOR  */
  YYSYMBOL_GOTO = 50,                      /* GOTO  */
  YYSYMBOL_DECIMAL = 51,                   /* DECIMAL  */
  YYSYMBOL_OCTAL = 52,                     /* OCTAL  */
  YYSYMBOL_HEXADECIMAL = 53,               /* HEXADECIMAL  */
  YYSYMBOL_IDENTIFIER = 54,                /* IDENTIFIER  */
  YYSYMBOL_INT = 55,                       /* INT  */
  YYSYMBOL_VOID = 56,                      /* VOID  */
  YYSYMBOL_IF = 57,                        /* IF  */
  YYSYMBOL_ELSE = 58,                      /* ELSE  */
  YYSYMBOL_WHILE = 59,                     /* WHILE  */
  YYSYMBOL_CONTINUE = 60,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 61,                     /* BREAK  */
  YYSYMBOL_RETURN = 62,                    /* RETURN  */
  YYSYMBOL_PUTINT = 63,                    /* PUTINT  */
  YYSYMBOL_64_ = 64,                       /* ','  */
  YYSYMBOL_65_ = 65,                       /* ';'  */
  YYSYMBOL_66_ = 66,                       /* '['  */
  YYSYMBOL_67_ = 67,                       /* ']'  */
  YYSYMBOL_68_ = 68,                       /* '='  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_71_ = 71,                       /* '('  */
  YYSYMBOL_72_ = 72,                       /* ')'  */
  YYSYMBOL_73_ = 73,                       /* '+'  */
  YYSYMBOL_74_ = 74,                       /* '-'  */
  YYSYMBOL_75_ = 75,                       /* '!'  */
  YYSYMBOL_76_ = 76,                       /* '*'  */
  YYSYMBOL_77_ = 77,                       /* '/'  */
  YYSYMBOL_78_ = 78,                       /* '%'  */
  YYSYMBOL_79_ = 79,                       /* '<'  */
  YYSYMBOL_80_ = 80,                       /* '>'  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_CompUnit = 82,                  /* CompUnit  */
  YYSYMBOL_Decl = 83,                      /* Decl  */
  YYSYMBOL_ConstDecl_A = 84,               /* ConstDecl_A  */
  YYSYMBOL_ConstDecl = 85,                 /* ConstDecl  */
  YYSYMBOL_BType = 86,                     /* BType  */
  YYSYMBOL_ConstDef_A = 87,                /* ConstDef_A  */
  YYSYMBOL_ConstDef = 88,                  /* ConstDef  */
  YYSYMBOL_ConstInitVal_A = 89,            /* ConstInitVal_A  */
  YYSYMBOL_ConstInitVal = 90,              /* ConstInitVal  */
  YYSYMBOL_VarDecl_A = 91,                 /* VarDecl_A  */
  YYSYMBOL_VarDecl = 92,                   /* VarDecl  */
  YYSYMBOL_VarDef_A = 93,                  /* VarDef_A  */
  YYSYMBOL_VarDef = 94,                    /* VarDef  */
  YYSYMBOL_InitVal_A = 95,                 /* InitVal_A  */
  YYSYMBOL_InitVal = 96,                   /* InitVal  */
  YYSYMBOL_FuncDef = 97,                   /* FuncDef  */
  YYSYMBOL_FuncFParams_A = 98,             /* FuncFParams_A  */
  YYSYMBOL_FuncFParams = 99,               /* FuncFParams  */
  YYSYMBOL_FuncFParam_A = 100,             /* FuncFParam_A  */
  YYSYMBOL_FuncFParam = 101,               /* FuncFParam  */
  YYSYMBOL_Block_A = 102,                  /* Block_A  */
  YYSYMBOL_Block = 103,                    /* Block  */
  YYSYMBOL_BlockItem = 104,                /* BlockItem  */
  YYSYMBOL_Stmt = 105,                     /* Stmt  */
  YYSYMBOL_Exp = 106,                      /* Exp  */
  YYSYMBOL_Cond = 107,                     /* Cond  */
  YYSYMBOL_LVal_A = 108,                   /* LVal_A  */
  YYSYMBOL_LVal = 109,                     /* LVal  */
  YYSYMBOL_PrimaryExp = 110,               /* PrimaryExp  */
  YYSYMBOL_Number = 111,                   /* Number  */
  YYSYMBOL_UnaryExp = 112,                 /* UnaryExp  */
  YYSYMBOL_UnaryOp = 113,                  /* UnaryOp  */
  YYSYMBOL_FuncRParams_A = 114,            /* FuncRParams_A  */
  YYSYMBOL_FuncRParams = 115,              /* FuncRParams  */
  YYSYMBOL_MulExp = 116,                   /* MulExp  */
  YYSYMBOL_AddExp = 117,                   /* AddExp  */
  YYSYMBOL_RelExp = 118,                   /* RelExp  */
  YYSYMBOL_EqExp = 119,                    /* EqExp  */
  YYSYMBOL_LAndExp = 120,                  /* LAndExp  */
  YYSYMBOL_LOrExp = 121,                   /* LOrExp  */
  YYSYMBOL_ConstExp = 122                  /* ConstExp  */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


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
       2,     2,     2,    75,     2,     2,     2,    78,     2,     2,
      71,    72,    76,    73,    64,    74,     2,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    65,
      79,    68,    80,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    46,    47,    48,    52,    53,    57,    58,
      62,    63,    67,    71,    72,    76,    77,    81,    82,    86,
      87,    88,    89,    93,    94,    98,    99,   103,   104,   108,
     109,   110,   111,   115,   116,   120,   121,   122,   123,   127,
     128,   129,   130,   134,   135,   139,   140,   144,   145,   146,
     147,   151,   152,   156,   157,   161,   162,   166,   167,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   186,   190,   194,   195,   199,   200,   204,   205,   206,
     210,   211,   212,   216,   217,   218,   219,   223,   224,   225,
     229,   230,   234,   235,   239,   240,   241,   242,   246,   247,
     248,   252,   253,   254,   255,   256,   260,   261,   262,   266,
     267,   271,   272,   276
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
  "\"end of file\"", "error", "\"invalid token\"", "SIZEOF",
  "STRING_LITERAL", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT",
  "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE",
  "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "SWITCH", "DO",
  "FOR", "GOTO", "DECIMAL", "OCTAL", "HEXADECIMAL", "IDENTIFIER", "INT",
  "VOID", "IF", "ELSE", "WHILE", "CONTINUE", "BREAK", "RETURN", "PUTINT",
  "','", "';'", "'['", "']'", "'='", "'{'", "'}'", "'('", "')'", "'+'",
  "'-'", "'!'", "'*'", "'/'", "'%'", "'<'", "'>'", "$accept", "CompUnit",
  "Decl", "ConstDecl_A", "ConstDecl", "BType", "ConstDef_A", "ConstDef",
  "ConstInitVal_A", "ConstInitVal", "VarDecl_A", "VarDecl", "VarDef_A",
  "VarDef", "InitVal_A", "InitVal", "FuncDef", "FuncFParams_A",
  "FuncFParams", "FuncFParam_A", "FuncFParam", "Block_A", "Block",
  "BlockItem", "Stmt", "Exp", "Cond", "LVal_A", "LVal", "PrimaryExp",
  "Number", "UnaryExp", "UnaryOp", "FuncRParams_A", "FuncRParams",
  "MulExp", "AddExp", "RelExp", "EqExp", "LAndExp", "LOrExp", "ConstExp", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    44,    59,    91,    93,    61,   123,
     125,    40,    41,    43,    45,    33,    42,    47,    37,    60,
      62
};
#endif

#define YYPACT_NINF (-165)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -18,   -12,  -165,    16,     9,  -165,  -165,    19,  -165,  -165,
      28,   -11,  -165,  -165,  -165,     0,   -36,    -7,   -15,   -31,
     270,   198,   -30,   -33,    30,  -165,    -9,   270,   205,    21,
      28,  -165,    26,    36,    52,    35,    44,  -165,  -165,  -165,
     -35,   270,  -165,  -165,  -165,  -165,  -165,  -165,  -165,   270,
       2,    14,    42,    23,  -165,  -165,    14,    36,    38,   198,
       1,    48,  -165,    47,   191,  -165,  -165,   205,    53,  -165,
     116,  -165,    50,    36,   -12,    56,   270,   230,  -165,    54,
    -165,   270,   270,   270,   270,   270,    57,  -165,   -38,  -165,
      36,  -165,  -165,    59,  -165,   -37,  -165,  -165,    60,    62,
      63,    65,   235,    66,  -165,  -165,  -165,    30,    64,  -165,
     141,  -165,    71,    72,   240,    73,  -165,  -165,   -12,    74,
    -165,    78,    75,  -165,  -165,  -165,  -165,     2,     2,  -165,
     198,  -165,    76,  -165,  -165,   205,  -165,    79,   270,   270,
    -165,  -165,  -165,    80,   270,  -165,  -165,  -165,   270,  -165,
      77,   245,  -165,    82,   270,  -165,  -165,    86,  -165,    88,
    -165,    81,    14,     6,    87,   129,   136,    84,  -165,    85,
      89,  -165,  -165,    91,  -165,    78,  -165,  -165,   166,   270,
     270,   270,   270,   270,   270,   270,   270,   166,   107,  -165,
    -165,  -165,   124,    14,    14,    14,    14,     6,     6,    87,
     129,  -165,  -165,   166,  -165
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    12,     0,     0,     2,     6,     0,     7,     3,
       0,     0,     1,     4,     5,    29,     0,     0,     0,     0,
       0,     0,     0,    30,     0,    25,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,    45,    80,    81,    82,
      75,     0,    87,    88,    89,    78,    83,    79,    94,     0,
      98,   113,     0,     0,    31,    35,    71,     0,     0,     0,
      29,    23,    26,     0,     0,    15,    19,     0,     8,    11,
       0,    39,    51,     0,     0,    46,     0,     0,    76,     0,
      86,     0,     0,     0,     0,     0,    27,    37,     0,    41,
       0,    32,    24,    13,    21,     0,    16,     9,     0,     0,
       0,     0,     0,     0,    60,    55,    57,     0,     0,    62,
      53,    58,     0,    78,     0,    52,    40,    43,     0,     0,
      84,    92,     0,    77,    95,    96,    97,    99,   100,    28,
       0,    36,     0,    42,    14,     0,    20,     0,     0,     0,
      67,    66,    68,     0,     0,    56,    54,    61,     0,    47,
       0,     0,    44,    73,     0,    93,    85,    33,    38,    17,
      22,     0,   101,   106,   109,   111,    72,     0,    69,     0,
       0,    48,    49,     0,    74,    90,    34,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      50,    91,    63,   104,   105,   102,   103,   107,   108,   110,
     112,    65,    70,     0,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,    51,   106,  -165,    11,    90,   154,    29,   -63,
     138,  -165,   111,   181,    67,   -40,   203,  -165,   186,  -165,
     -56,    99,   -27,  -165,  -164,   -19,    83,    58,   -65,  -165,
    -165,   -29,  -165,    46,  -165,    17,   -20,   -80,    45,    27,
    -165,   -17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,   106,    32,     6,    34,    29,    18,   137,    65,
      26,     8,    23,    16,   132,    54,     9,    75,    35,   115,
      36,   108,   109,   110,   111,   112,   161,    78,    45,    46,
      47,    48,    49,   155,   122,    50,    56,   163,   164,   165,
     166,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    95,    55,    52,    96,   113,    71,    51,    51,    12,
      63,     7,    10,    88,   192,     7,   179,   180,   117,    91,
      80,     1,    79,   201,     2,     2,   130,   135,    24,    25,
      89,    76,   131,   136,    55,    59,    77,     2,     3,   204,
      55,    33,    57,     2,    51,   113,   116,    51,     1,    30,
      31,     5,   124,   125,   126,    13,    62,   119,   121,    27,
      19,    28,   152,   133,     2,     3,    20,    20,    21,    21,
      11,    22,   159,    15,    37,    38,    39,    40,    81,    82,
      83,   107,    17,   143,    60,   181,   182,    84,    85,    67,
     157,    69,    53,    87,    41,   150,    42,    43,    44,   183,
     184,   127,   128,   197,   198,    70,    72,    73,    74,    86,
      90,    55,    24,   113,    93,    51,   114,    30,   162,   162,
     118,   107,   113,    20,    51,    27,   123,   169,   140,   170,
     141,   138,   173,   139,   145,   175,   147,   144,   113,   151,
     148,   153,   154,   185,   171,   168,   158,   156,    76,   160,
     130,   186,   135,   178,   189,     1,   187,   188,   190,   193,
     194,   195,   196,   162,   162,   162,   162,    37,    38,    39,
      40,     2,   202,    98,    97,    99,   100,   101,   102,   103,
       1,   104,   203,   134,    68,    70,   105,    41,   177,    42,
      43,    44,    37,    38,    39,    40,     2,   129,    98,    92,
      99,   100,   101,   102,   103,    61,   104,    14,    58,   146,
      70,   174,    41,   200,    42,    43,    44,    37,    38,    39,
      40,   191,   167,    98,   176,    99,   100,   101,   102,   103,
     199,   104,     0,     0,     0,    70,     0,    41,     0,    42,
      43,    44,    37,    38,    39,    40,     0,     0,     0,    37,
      38,    39,    40,     0,     0,     0,    37,    38,    39,    40,
      64,    94,    41,     0,    42,    43,    44,    53,     0,    41,
       0,    42,    43,    44,    64,     0,    41,     0,    42,    43,
      44,    37,    38,    39,    40,     0,    37,    38,    39,    40,
       0,    37,    38,    39,    40,     0,    37,    38,    39,    40,
     142,    41,   120,    42,    43,    44,    41,   149,    42,    43,
      44,    41,   172,    42,    43,    44,    41,     0,    42,    43,
      44,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,    42,    43,    44
};

static const yytype_int16 yycheck[] =
{
      20,    64,    21,    20,    67,    70,    33,    27,    28,     0,
      27,     0,     1,    53,   178,     4,    10,    11,    74,    59,
      49,    39,    41,   187,    55,    55,    64,    64,    64,    65,
      57,    66,    70,    70,    53,    68,    71,    55,    56,   203,
      59,    72,    72,    55,    64,   110,    73,    67,    39,    64,
      65,     0,    81,    82,    83,     4,    65,    76,    77,    66,
      71,    68,   118,    90,    55,    56,    66,    66,    68,    68,
      54,    71,   135,    54,    51,    52,    53,    54,    76,    77,
      78,    70,    54,   102,    54,    79,    80,    73,    74,    68,
     130,    65,    69,    70,    71,   114,    73,    74,    75,    12,
      13,    84,    85,   183,   184,    69,    54,    72,    64,    67,
      72,   130,    64,   178,    67,   135,    66,    64,   138,   139,
      64,   110,   187,    66,   144,    66,    72,   144,    65,   148,
      65,    71,   151,    71,    70,   154,    65,    71,   203,    66,
      68,    67,    64,    14,    67,    65,    70,    72,    66,    70,
      64,    15,    64,    72,    65,    39,    72,    72,    67,   179,
     180,   181,   182,   183,   184,   185,   186,    51,    52,    53,
      54,    55,    65,    57,    68,    59,    60,    61,    62,    63,
      39,    65,    58,    93,    30,    69,    70,    71,   159,    73,
      74,    75,    51,    52,    53,    54,    55,    86,    57,    61,
      59,    60,    61,    62,    63,    24,    65,     4,    22,   110,
      69,   153,    71,   186,    73,    74,    75,    51,    52,    53,
      54,   175,   139,    57,   157,    59,    60,    61,    62,    63,
     185,    65,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    51,    52,    53,    54,    -1,    -1,    -1,    51,
      52,    53,    54,    -1,    -1,    -1,    51,    52,    53,    54,
      69,    70,    71,    -1,    73,    74,    75,    69,    -1,    71,
      -1,    73,    74,    75,    69,    -1,    71,    -1,    73,    74,
      75,    51,    52,    53,    54,    -1,    51,    52,    53,    54,
      -1,    51,    52,    53,    54,    -1,    51,    52,    53,    54,
      65,    71,    72,    73,    74,    75,    71,    67,    73,    74,
      75,    71,    67,    73,    74,    75,    71,    -1,    73,    74,
      75,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    74,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    39,    55,    56,    82,    83,    85,    86,    92,    97,
      86,    54,     0,    83,    97,    54,    94,    54,    88,    71,
      66,    68,    71,    93,    64,    65,    91,    66,    68,    87,
      64,    65,    84,    72,    86,    99,   101,    51,    52,    53,
      54,    71,    73,    74,    75,   109,   110,   111,   112,   113,
     116,   117,   122,    69,    96,   106,   117,    72,    99,    68,
      54,    94,    65,   122,    69,    90,   122,    68,    88,    65,
      69,   103,    54,    72,    64,    98,    66,    71,   108,   106,
     112,    76,    77,    78,    73,    74,    67,    70,    96,   103,
      72,    96,    91,    67,    70,    90,    90,    84,    57,    59,
      60,    61,    62,    63,    65,    70,    83,    86,   102,   103,
     104,   105,   106,   109,    66,   100,   103,   101,    64,   106,
      72,   106,   115,    72,   112,   112,   112,   116,   116,    93,
      64,    70,    95,   103,    87,    64,    70,    89,    71,    71,
      65,    65,    65,   106,    71,    70,   102,    65,    68,    67,
     106,    66,   101,    67,    64,   114,    72,    96,    70,    90,
      70,   107,   117,   118,   119,   120,   121,   107,    65,   122,
     106,    67,    67,   106,   108,   106,    95,    89,    72,    10,
      11,    79,    80,    12,    13,    14,    15,    72,    72,    65,
      67,   114,   105,   117,   117,   117,   117,   118,   118,   119,
     120,   105,    65,    58,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    81,    82,    82,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    90,    90,    91,    91,    92,    92,    93,    93,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    96,    97,
      97,    97,    97,    98,    98,    99,    99,   100,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   107,   108,   108,   109,   109,   110,   110,   110,
     111,   111,   111,   112,   112,   112,   112,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   116,   117,   117,
     117,   118,   118,   118,   118,   118,   119,   119,   119,   120,
     120,   121,   121,   122
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     2,     3,
       4,     5,     1,     3,     4,     3,     4,     2,     3,     1,
       3,     2,     4,     2,     3,     3,     4,     3,     4,     1,
       2,     3,     4,     2,     3,     1,     3,     2,     4,     5,
       6,     5,     6,     2,     3,     1,     2,     2,     3,     3,
       4,     2,     3,     1,     2,     2,     3,     1,     1,     4,
       1,     2,     1,     5,     7,     5,     2,     2,     2,     3,
       5,     1,     1,     3,     4,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     3,     4,     2,     1,     1,     1,
       2,     3,     1,     2,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1
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


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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
  case 2: /* CompUnit: Decl  */
#line 45 "SysY.y"
                        {show_ast((yyvsp[0].p_ast), 0);}
#line 1370 "SysY.tab.c"
    break;

  case 3: /* CompUnit: FuncDef  */
#line 46 "SysY.y"
                        {show_ast((yyvsp[0].p_ast), 0);}
#line 1376 "SysY.tab.c"
    break;

  case 4: /* CompUnit: CompUnit Decl  */
#line 47 "SysY.y"
                        {show_ast((yyvsp[0].p_ast), 0);}
#line 1382 "SysY.tab.c"
    break;

  case 5: /* CompUnit: CompUnit FuncDef  */
#line 48 "SysY.y"
                        {show_ast((yyvsp[0].p_ast), 0);}
#line 1388 "SysY.tab.c"
    break;

  case 6: /* Decl: ConstDecl  */
#line 52 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1394 "SysY.tab.c"
    break;

  case 7: /* Decl: VarDecl  */
#line 53 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1400 "SysY.tab.c"
    break;

  case 8: /* ConstDecl_A: ',' ConstDef  */
#line 57 "SysY.y"
                                {(yyval.p_ast) = new_const_decl_a((yyvsp[0].p_ast),NULL);}
#line 1406 "SysY.tab.c"
    break;

  case 9: /* ConstDecl_A: ',' ConstDef ConstDecl_A  */
#line 58 "SysY.y"
                                {(yyval.p_ast) = new_const_decl_a((yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 1412 "SysY.tab.c"
    break;

  case 10: /* ConstDecl: CONST BType ConstDef ';'  */
#line 62 "SysY.y"
                                        {(yyval.p_ast) = new_const_decl((yyvsp[-2].v_string),(yyvsp[-1].p_ast),NULL);}
#line 1418 "SysY.tab.c"
    break;

  case 11: /* ConstDecl: CONST BType ConstDef ConstDecl_A ';'  */
#line 63 "SysY.y"
                                          {(yyval.p_ast) = new_const_decl((yyvsp[-3].v_string),(yyvsp[-2].p_ast),(yyvsp[-1].p_ast));}
#line 1424 "SysY.tab.c"
    break;

  case 12: /* BType: INT  */
#line 67 "SysY.y"
                                {(yyval.v_string) = (yyvsp[0].v_string);}
#line 1430 "SysY.tab.c"
    break;

  case 13: /* ConstDef_A: '[' ConstExp ']'  */
#line 71 "SysY.y"
                                        {(yyval.p_ast) = new_const_def_a(NULL,(yyvsp[-1].p_ast));}
#line 1436 "SysY.tab.c"
    break;

  case 14: /* ConstDef_A: '[' ConstExp ']' ConstDef_A  */
#line 72 "SysY.y"
                                        {(yyval.p_ast) = new_const_def_a((yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1442 "SysY.tab.c"
    break;

  case 15: /* ConstDef: IDENTIFIER '=' ConstInitVal  */
#line 76 "SysY.y"
                                                {(yyval.p_ast) = new_const_def((yyvsp[-2].v_string),(yyvsp[0].p_ast),NULL);}
#line 1448 "SysY.tab.c"
    break;

  case 16: /* ConstDef: IDENTIFIER ConstDef_A '=' ConstInitVal  */
#line 77 "SysY.y"
                                                {(yyval.p_ast) = new_const_def((yyvsp[-3].v_string),(yyvsp[0].p_ast),(yyvsp[-2].p_ast));}
#line 1454 "SysY.tab.c"
    break;

  case 17: /* ConstInitVal_A: ',' ConstInitVal  */
#line 81 "SysY.y"
                                        {(yyval.p_ast) = new_const_init_a(NULL,(yyvsp[0].p_ast));}
#line 1460 "SysY.tab.c"
    break;

  case 18: /* ConstInitVal_A: ',' ConstInitVal ConstInitVal_A  */
#line 82 "SysY.y"
                                        {(yyval.p_ast) = new_const_init_a((yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 1466 "SysY.tab.c"
    break;

  case 19: /* ConstInitVal: ConstExp  */
#line 86 "SysY.y"
                                {(yyval.p_ast) = new_const_init((yyvsp[0].p_ast),NULL,"");}
#line 1472 "SysY.tab.c"
    break;

  case 20: /* ConstInitVal: '{' ConstInitVal '}'  */
#line 87 "SysY.y"
                                {(yyval.p_ast) = new_const_init((yyvsp[-1].p_ast),NULL,"{}");}
#line 1478 "SysY.tab.c"
    break;

  case 21: /* ConstInitVal: '{' '}'  */
#line 88 "SysY.y"
                                {(yyval.p_ast) = new_const_init(NULL,NULL,"{}");}
#line 1484 "SysY.tab.c"
    break;

  case 22: /* ConstInitVal: '{' ConstInitVal ConstInitVal_A '}'  */
#line 89 "SysY.y"
                                                {(yyval.p_ast) = new_const_init((yyvsp[-2].p_ast),(yyvsp[-1].p_ast),"{}");}
#line 1490 "SysY.tab.c"
    break;

  case 23: /* VarDecl_A: ',' VarDef  */
#line 93 "SysY.y"
                                {(yyval.p_ast) = new_var_decl_a(NULL,(yyvsp[0].p_ast));}
#line 1496 "SysY.tab.c"
    break;

  case 24: /* VarDecl_A: ',' VarDef VarDecl_A  */
#line 94 "SysY.y"
                                {(yyval.p_ast) = new_var_decl_a((yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 1502 "SysY.tab.c"
    break;

  case 25: /* VarDecl: BType VarDef ';'  */
#line 98 "SysY.y"
                                {(yyval.p_ast) = new_var_decl((yyvsp[-2].v_string),(yyvsp[-1].p_ast),NULL);}
#line 1508 "SysY.tab.c"
    break;

  case 26: /* VarDecl: BType VarDef VarDecl_A ';'  */
#line 99 "SysY.y"
                                {(yyval.p_ast) = new_var_decl((yyvsp[-3].v_string),(yyvsp[-2].p_ast),(yyvsp[-1].p_ast));}
#line 1514 "SysY.tab.c"
    break;

  case 27: /* VarDef_A: '[' ConstExp ']'  */
#line 103 "SysY.y"
                                {(yyval.p_ast) = new_var_def_a((yyvsp[-1].p_ast),NULL);}
#line 1520 "SysY.tab.c"
    break;

  case 28: /* VarDef_A: '[' ConstExp ']' VarDef_A  */
#line 104 "SysY.y"
                                {(yyval.p_ast) = new_var_def_a((yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1526 "SysY.tab.c"
    break;

  case 29: /* VarDef: IDENTIFIER  */
#line 108 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[0].v_string),NULL,NULL);}
#line 1532 "SysY.tab.c"
    break;

  case 30: /* VarDef: IDENTIFIER VarDef_A  */
#line 109 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-1].v_string),(yyvsp[0].p_ast),NULL);}
#line 1538 "SysY.tab.c"
    break;

  case 31: /* VarDef: IDENTIFIER '=' InitVal  */
#line 110 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-2].v_string),NULL,(yyvsp[0].p_ast));}
#line 1544 "SysY.tab.c"
    break;

  case 32: /* VarDef: IDENTIFIER VarDef_A '=' InitVal  */
#line 111 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-3].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1550 "SysY.tab.c"
    break;

  case 33: /* InitVal_A: ',' InitVal  */
#line 115 "SysY.y"
                                        {(yyval.p_ast) = new_init_var_a((yyvsp[0].p_ast),NULL);}
#line 1556 "SysY.tab.c"
    break;

  case 34: /* InitVal_A: ',' InitVal InitVal_A  */
#line 116 "SysY.y"
                                        {(yyval.p_ast) = new_init_var_a((yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 1562 "SysY.tab.c"
    break;

  case 35: /* InitVal: Exp  */
#line 120 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[0].p_ast),NULL,"");}
#line 1568 "SysY.tab.c"
    break;

  case 36: /* InitVal: '{' InitVal '}'  */
#line 121 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[-1].p_ast),NULL,"{}");}
#line 1574 "SysY.tab.c"
    break;

  case 37: /* InitVal: '{' '}'  */
#line 122 "SysY.y"
                                        {(yyval.p_ast) = new_init_var(NULL,NULL,"{}");}
#line 1580 "SysY.tab.c"
    break;

  case 38: /* InitVal: '{' InitVal InitVal_A '}'  */
#line 123 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[-2].p_ast),(yyvsp[-1].p_ast),"{}");}
#line 1586 "SysY.tab.c"
    break;

  case 39: /* FuncDef: VOID IDENTIFIER '(' ')' Block  */
#line 127 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-4].v_string),(yyvsp[-3].v_string),NULL,(yyvsp[0].p_ast));}
#line 1592 "SysY.tab.c"
    break;

  case 40: /* FuncDef: VOID IDENTIFIER '(' FuncFParams ')' Block  */
#line 128 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-5].v_string),(yyvsp[-4].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1598 "SysY.tab.c"
    break;

  case 41: /* FuncDef: BType IDENTIFIER '(' ')' Block  */
#line 129 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-4].v_string),(yyvsp[-3].v_string),NULL,(yyvsp[0].p_ast));}
#line 1604 "SysY.tab.c"
    break;

  case 42: /* FuncDef: BType IDENTIFIER '(' FuncFParams ')' Block  */
#line 130 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-5].v_string),(yyvsp[-4].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1610 "SysY.tab.c"
    break;

  case 43: /* FuncFParams_A: ',' FuncFParam  */
#line 134 "SysY.y"
                                {(yyval.p_ast) = new_func_params(NULL, (yyvsp[0].p_ast));}
#line 1616 "SysY.tab.c"
    break;

  case 44: /* FuncFParams_A: FuncFParams_A ',' FuncFParam  */
#line 135 "SysY.y"
                                  {(yyval.p_ast) = new_func_params((yyvsp[0].p_ast), (yyvsp[-2].p_ast));}
#line 1622 "SysY.tab.c"
    break;

  case 45: /* FuncFParams: FuncFParam  */
#line 139 "SysY.y"
                                {(yyval.p_ast) = new_func_params(NULL, (yyvsp[0].p_ast));}
#line 1628 "SysY.tab.c"
    break;

  case 46: /* FuncFParams: FuncFParam FuncFParams_A  */
#line 140 "SysY.y"
                                {(yyval.p_ast) = new_func_params((yyvsp[-1].p_ast), (yyvsp[0].p_ast));}
#line 1634 "SysY.tab.c"
    break;

  case 47: /* FuncFParam_A: '[' ']'  */
#line 144 "SysY.y"
                                        {(yyval.p_ast) = new_square_brackets(NULL);}
#line 1640 "SysY.tab.c"
    break;

  case 48: /* FuncFParam_A: '[' Exp ']'  */
#line 145 "SysY.y"
                                        {(yyval.p_ast) = new_square_brackets((yyvsp[-1].p_ast));}
#line 1646 "SysY.tab.c"
    break;

  case 49: /* FuncFParam_A: FuncFParam_A '[' ']'  */
#line 146 "SysY.y"
                                        {(yyval.p_ast) = new_func_param_a((yyvsp[-2].p_ast),NULL);}
#line 1652 "SysY.tab.c"
    break;

  case 50: /* FuncFParam_A: FuncFParam_A '[' Exp ']'  */
#line 147 "SysY.y"
                                        {(yyval.p_ast) = new_func_param_a((yyvsp[-3].p_ast),(yyvsp[-1].p_ast));}
#line 1658 "SysY.tab.c"
    break;

  case 51: /* FuncFParam: BType IDENTIFIER  */
#line 151 "SysY.y"
                                        {(yyval.p_ast) = new_func_param((yyvsp[-1].v_string), (yyvsp[0].v_string), NULL);}
#line 1664 "SysY.tab.c"
    break;

  case 52: /* FuncFParam: BType IDENTIFIER FuncFParam_A  */
#line 152 "SysY.y"
                                        {(yyval.p_ast) = new_func_param((yyvsp[-2].v_string), (yyvsp[-1].v_string), (yyvsp[0].p_ast));}
#line 1670 "SysY.tab.c"
    break;

  case 53: /* Block_A: BlockItem  */
#line 156 "SysY.y"
                                        {(yyval.p_ast) = new_block_a((yyvsp[0].p_ast),NULL);}
#line 1676 "SysY.tab.c"
    break;

  case 54: /* Block_A: BlockItem Block_A  */
#line 157 "SysY.y"
                                        {(yyval.p_ast) = new_block_a((yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 1682 "SysY.tab.c"
    break;

  case 55: /* Block: '{' '}'  */
#line 161 "SysY.y"
                                        {(yyval.p_ast) = new_block(NULL);}
#line 1688 "SysY.tab.c"
    break;

  case 56: /* Block: '{' Block_A '}'  */
#line 162 "SysY.y"
                                        {(yyval.p_ast) = new_block((yyvsp[-1].p_ast));}
#line 1694 "SysY.tab.c"
    break;

  case 57: /* BlockItem: Decl  */
#line 166 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 1700 "SysY.tab.c"
    break;

  case 58: /* BlockItem: Stmt  */
#line 167 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 1706 "SysY.tab.c"
    break;

  case 59: /* Stmt: LVal '=' Exp ';'  */
#line 171 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("=","",(yyvsp[-3].p_ast),(yyvsp[-1].p_ast),NULL);}
#line 1712 "SysY.tab.c"
    break;

  case 60: /* Stmt: ';'  */
#line 172 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("","",NULL,NULL,NULL);}
#line 1718 "SysY.tab.c"
    break;

  case 61: /* Stmt: Exp ';'  */
#line 173 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("","",(yyvsp[-1].p_ast),NULL,NULL);}
#line 1724 "SysY.tab.c"
    break;

  case 62: /* Stmt: Block  */
#line 174 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("","",(yyvsp[0].p_ast),NULL,NULL);}
#line 1730 "SysY.tab.c"
    break;

  case 63: /* Stmt: IF '(' Cond ')' Stmt  */
#line 175 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-4].v_string),"",(yyvsp[-2].p_ast),(yyvsp[0].p_ast),NULL);}
#line 1736 "SysY.tab.c"
    break;

  case 64: /* Stmt: IF '(' Cond ')' Stmt ELSE Stmt  */
#line 176 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-6].v_string),(yyvsp[-1].v_string),(yyvsp[-4].p_ast),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1742 "SysY.tab.c"
    break;

  case 65: /* Stmt: WHILE '(' Cond ')' Stmt  */
#line 177 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-4].v_string),"",(yyvsp[-2].p_ast),(yyvsp[0].p_ast),NULL);}
#line 1748 "SysY.tab.c"
    break;

  case 66: /* Stmt: BREAK ';'  */
#line 178 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-1].v_string),"",NULL,NULL,NULL);}
#line 1754 "SysY.tab.c"
    break;

  case 67: /* Stmt: CONTINUE ';'  */
#line 179 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-1].v_string),"",NULL,NULL,NULL);}
#line 1760 "SysY.tab.c"
    break;

  case 68: /* Stmt: RETURN ';'  */
#line 180 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-1].v_string),"",NULL,NULL,NULL);}
#line 1766 "SysY.tab.c"
    break;

  case 69: /* Stmt: RETURN Exp ';'  */
#line 181 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-2].v_string),"",(yyvsp[-1].p_ast),NULL,NULL);}
#line 1772 "SysY.tab.c"
    break;

  case 70: /* Stmt: PUTINT '(' ConstExp ')' ';'  */
#line 182 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-4].v_string),"",(yyvsp[-2].p_ast),NULL,NULL);}
#line 1778 "SysY.tab.c"
    break;

  case 71: /* Exp: AddExp  */
#line 186 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 1784 "SysY.tab.c"
    break;

  case 72: /* Cond: LOrExp  */
#line 190 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 1790 "SysY.tab.c"
    break;

  case 73: /* LVal_A: '[' Exp ']'  */
#line 194 "SysY.y"
                        {(yyval.p_ast) = new_subscript(NULL, (yyvsp[-1].p_ast));}
#line 1796 "SysY.tab.c"
    break;

  case 74: /* LVal_A: '[' Exp ']' LVal_A  */
#line 195 "SysY.y"
                        {(yyval.p_ast) = new_subscript((yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 1802 "SysY.tab.c"
    break;

  case 75: /* LVal: IDENTIFIER  */
#line 199 "SysY.y"
                        {(yyval.p_ast) = new_id((yyvsp[0].v_string));}
#line 1808 "SysY.tab.c"
    break;

  case 76: /* LVal: IDENTIFIER LVal_A  */
#line 200 "SysY.y"
                        {(yyval.p_ast) = new_id_with_subscript((yyvsp[-1].v_string),(yyvsp[0].p_ast));}
#line 1814 "SysY.tab.c"
    break;

  case 77: /* PrimaryExp: '(' Exp ')'  */
#line 204 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[-1].p_ast);}
#line 1820 "SysY.tab.c"
    break;

  case 78: /* PrimaryExp: LVal  */
#line 205 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1826 "SysY.tab.c"
    break;

  case 79: /* PrimaryExp: Number  */
#line 206 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1832 "SysY.tab.c"
    break;

  case 80: /* Number: DECIMAL  */
#line 210 "SysY.y"
                        {(yyval.p_ast) = new_dec((yyvsp[0].v_int));}
#line 1838 "SysY.tab.c"
    break;

  case 81: /* Number: OCTAL  */
#line 211 "SysY.y"
                        {(yyval.p_ast) = new_oct((yyvsp[0].v_int));}
#line 1844 "SysY.tab.c"
    break;

  case 82: /* Number: HEXADECIMAL  */
#line 212 "SysY.y"
                        {(yyval.p_ast) = new_hex((yyvsp[0].v_int));}
#line 1850 "SysY.tab.c"
    break;

  case 83: /* UnaryExp: PrimaryExp  */
#line 216 "SysY.y"
                                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1856 "SysY.tab.c"
    break;

  case 84: /* UnaryExp: IDENTIFIER '(' ')'  */
#line 217 "SysY.y"
                                        {(yyval.p_ast) = new_func_call_id((yyvsp[-2].v_string),NULL);}
#line 1862 "SysY.tab.c"
    break;

  case 85: /* UnaryExp: IDENTIFIER '(' FuncRParams ')'  */
#line 218 "SysY.y"
                                        {(yyval.p_ast) = new_func_call_id((yyvsp[-3].v_string),(yyvsp[-1].p_ast));}
#line 1868 "SysY.tab.c"
    break;

  case 86: /* UnaryExp: UnaryOp UnaryExp  */
#line 219 "SysY.y"
                                        {(yyval.p_ast) = new_exp_with_unary_op((yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 1874 "SysY.tab.c"
    break;

  case 87: /* UnaryOp: '+'  */
#line 223 "SysY.y"
                                        {(yyval.p_ast) = new_unary_op("+");}
#line 1880 "SysY.tab.c"
    break;

  case 88: /* UnaryOp: '-'  */
#line 224 "SysY.y"
                                        {(yyval.p_ast) = new_unary_op("-");}
#line 1886 "SysY.tab.c"
    break;

  case 89: /* UnaryOp: '!'  */
#line 225 "SysY.y"
                                        {(yyval.p_ast) = new_unary_op("!");}
#line 1892 "SysY.tab.c"
    break;

  case 90: /* FuncRParams_A: ',' Exp  */
#line 229 "SysY.y"
                                {(yyval.p_ast) = new_func_call_params_a(NULL, (yyvsp[0].p_ast));}
#line 1898 "SysY.tab.c"
    break;

  case 91: /* FuncRParams_A: ',' Exp FuncRParams_A  */
#line 230 "SysY.y"
                                {(yyval.p_ast) = new_func_call_params_a((yyvsp[-1].p_ast), (yyvsp[0].p_ast));}
#line 1904 "SysY.tab.c"
    break;

  case 92: /* FuncRParams: Exp  */
#line 234 "SysY.y"
                                {(yyval.p_ast) = new_func_call_params(NULL,(yyvsp[0].p_ast));}
#line 1910 "SysY.tab.c"
    break;

  case 93: /* FuncRParams: Exp FuncRParams_A  */
#line 235 "SysY.y"
                                {(yyval.p_ast) = new_func_call_params((yyvsp[-1].p_ast), (yyvsp[0].p_ast));}
#line 1916 "SysY.tab.c"
    break;

  case 94: /* MulExp: UnaryExp  */
#line 239 "SysY.y"
                                {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1922 "SysY.tab.c"
    break;

  case 95: /* MulExp: MulExp '*' UnaryExp  */
#line 240 "SysY.y"
                                {(yyval.p_ast) = new_expr('*', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 1928 "SysY.tab.c"
    break;

  case 96: /* MulExp: MulExp '/' UnaryExp  */
#line 241 "SysY.y"
                                {(yyval.p_ast) = new_expr('/', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 1934 "SysY.tab.c"
    break;

  case 97: /* MulExp: MulExp '%' UnaryExp  */
#line 242 "SysY.y"
                                {(yyval.p_ast) = new_expr('%', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 1940 "SysY.tab.c"
    break;

  case 98: /* AddExp: MulExp  */
#line 246 "SysY.y"
                                {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1946 "SysY.tab.c"
    break;

  case 99: /* AddExp: AddExp '+' MulExp  */
#line 247 "SysY.y"
                                {(yyval.p_ast) = new_expr('+', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 1952 "SysY.tab.c"
    break;

  case 100: /* AddExp: AddExp '-' MulExp  */
#line 248 "SysY.y"
                                {(yyval.p_ast) = new_expr('-', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 1958 "SysY.tab.c"
    break;

  case 101: /* RelExp: AddExp  */
#line 252 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp("",(yyvsp[0].p_ast),NULL);}
#line 1964 "SysY.tab.c"
    break;

  case 102: /* RelExp: RelExp '<' AddExp  */
#line 253 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp("<",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1970 "SysY.tab.c"
    break;

  case 103: /* RelExp: RelExp '>' AddExp  */
#line 254 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp(">",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1976 "SysY.tab.c"
    break;

  case 104: /* RelExp: RelExp LE_OP AddExp  */
#line 255 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp("<=",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1982 "SysY.tab.c"
    break;

  case 105: /* RelExp: RelExp GE_OP AddExp  */
#line 256 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp(">=",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1988 "SysY.tab.c"
    break;

  case 106: /* EqExp: RelExp  */
#line 260 "SysY.y"
                                {(yyval.p_ast) = new_eq_exp("",(yyvsp[0].p_ast),NULL);}
#line 1994 "SysY.tab.c"
    break;

  case 107: /* EqExp: EqExp EQ_OP RelExp  */
#line 261 "SysY.y"
                                {(yyval.p_ast) = new_eq_exp("==",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2000 "SysY.tab.c"
    break;

  case 108: /* EqExp: EqExp NE_OP RelExp  */
#line 262 "SysY.y"
                                {(yyval.p_ast) = new_eq_exp("!=",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2006 "SysY.tab.c"
    break;

  case 109: /* LAndExp: EqExp  */
#line 266 "SysY.y"
                                {(yyval.p_ast) = new_l_and_exp("",(yyvsp[0].p_ast),NULL);}
#line 2012 "SysY.tab.c"
    break;

  case 110: /* LAndExp: LAndExp AND_OP EqExp  */
#line 267 "SysY.y"
                                {(yyval.p_ast) = new_l_and_exp("&&",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2018 "SysY.tab.c"
    break;

  case 111: /* LOrExp: LAndExp  */
#line 271 "SysY.y"
                                {(yyval.p_ast) = new_l_or_exp("",(yyvsp[0].p_ast),NULL);}
#line 2024 "SysY.tab.c"
    break;

  case 112: /* LOrExp: LOrExp OR_OP LAndExp  */
#line 272 "SysY.y"
                                {(yyval.p_ast) = new_l_or_exp("||",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2030 "SysY.tab.c"
    break;

  case 113: /* ConstExp: AddExp  */
#line 276 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2036 "SysY.tab.c"
    break;


#line 2040 "SysY.tab.c"

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
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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

#line 279 "SysY.y"

extern char yytext[];
extern int column;

void yyerror(char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}

int main(void)
{
    yyparse();
    return 0;
}
