/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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

#include <stdlib.h>
#include <stdio.h>
#include "ast.h"
int yylex(void);
void yyerror(char *);
extern ast* ast_root;


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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SYSY_TAB_H_INCLUDED
# define YY_YY_SYSY_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SIZEOF = 258,
    STRING_LITERAL = 259,
    PTR_OP = 260,
    INC_OP = 261,
    DEC_OP = 262,
    LEFT_OP = 263,
    RIGHT_OP = 264,
    LE_OP = 265,
    GE_OP = 266,
    EQ_OP = 267,
    NE_OP = 268,
    AND_OP = 269,
    OR_OP = 270,
    MUL_ASSIGN = 271,
    DIV_ASSIGN = 272,
    MOD_ASSIGN = 273,
    ADD_ASSIGN = 274,
    SUB_ASSIGN = 275,
    LEFT_ASSIGN = 276,
    RIGHT_ASSIGN = 277,
    AND_ASSIGN = 278,
    XOR_ASSIGN = 279,
    OR_ASSIGN = 280,
    TYPE_NAME = 281,
    TYPEDEF = 282,
    EXTERN = 283,
    STATIC = 284,
    AUTO = 285,
    REGISTER = 286,
    CHAR = 287,
    SHORT = 288,
    LONG = 289,
    SIGNED = 290,
    UNSIGNED = 291,
    FLOAT = 292,
    DOUBLE = 293,
    CONST = 294,
    VOLATILE = 295,
    STRUCT = 296,
    UNION = 297,
    ENUM = 298,
    ELLIPSIS = 299,
    CASE = 300,
    DEFAULT = 301,
    SWITCH = 302,
    DO = 303,
    FOR = 304,
    GOTO = 305,
    DECIMAL = 306,
    OCTAL = 307,
    HEXADECIMAL = 308,
    IDENTIFIER = 309,
    INT = 310,
    VOID = 311,
    IF = 312,
    ELSE = 313,
    WHILE = 314,
    CONTINUE = 315,
    BREAK = 316,
    RETURN = 317,
    PUTINT = 318
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "SysY.y"

	int	v_int;
	char*	v_string;
	ast*	p_ast;

#line 202 "SysY.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYSY_TAB_H_INCLUDED  */



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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   388

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  251

#define YYUNDEFTOK  2
#define YYMAXUTOK   318


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       0,    50,    50,    54,    55,    56,    57,    62,    63,    67,
      68,    72,    73,    77,    78,    82,    87,    88,    93,    94,
      98,    99,   104,   105,   106,   107,   112,   113,   117,   118,
     122,   123,   127,   128,   133,   134,   138,   139,   143,   144,
     145,   146,   150,   151,   152,   153,   157,   158,   162,   163,
     167,   168,   169,   170,   174,   175,   176,   177,   182,   183,
     184,   185,   189,   190,   194,   195,   199,   200,   201,   202,
     206,   207,   211,   212,   216,   217,   221,   222,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     241,   245,   249,   250,   254,   255,   259,   260,   261,   266,
     267,   268,   272,   273,   274,   275,   280,   281,   282,   286,
     287,   291,   292,   296,   297,   298,   299,   303,   304,   305,
     309,   310,   311,   312,   313,   317,   318,   319,   323,   324,
     328,   329,   333,   337,   338,   339,   343,   344,   345,   346,
     351,   352,   356,   357
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SIZEOF", "STRING_LITERAL", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "SWITCH", "DO", "FOR", "GOTO", "DECIMAL",
  "OCTAL", "HEXADECIMAL", "IDENTIFIER", "INT", "VOID", "IF", "ELSE",
  "WHILE", "CONTINUE", "BREAK", "RETURN", "PUTINT", "','", "';'", "'['",
  "']'", "'='", "'{'", "'}'", "'('", "')'", "'+'", "'-'", "'!'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "$accept", "Start", "CompUnit", "Decl_G",
  "Decl", "ConstDecl_A", "ConstDecl", "BType", "ConstDef_A", "ConstDef",
  "ConstInitVal_A", "ConstInitVal", "VarDecl_A_G", "VarDecl_A",
  "VarDecl_G", "VarDecl", "VarDef_A", "VarDef_A_G", "VarDef_G", "VarDef",
  "InitVal_A_G", "InitVal_A", "InitVal_G", "InitVal", "FuncDef",
  "FuncFParams_A", "FuncFParams", "FuncFParam_A", "FuncFParam", "Block_A",
  "Block", "BlockItem", "Stmt", "Exp", "Cond", "LVal_A", "LVal",
  "PrimaryExp", "Number", "UnaryExp", "UnaryOp", "FuncRParams_A",
  "FuncRParams", "MulExp", "AddExp", "RelExp", "EqExp", "LAndExp",
  "LOrExp", "ConstExp", "ConstAddExp", "ConstMulExp", "ConstUnaryExp",
  "ConstPrimaryExp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
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
# endif

#define YYPACT_NINF (-159)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -21,    -3,  -159,   -25,    39,  -159,   -21,  -159,     8,  -159,
     -21,    32,     4,  -159,  -159,    63,   -48,  -159,    55,    97,
      17,   307,   275,    18,    75,    53,  -159,    68,   307,   282,
      98,    32,  -159,   106,   114,   119,   117,   127,  -159,  -159,
    -159,   307,  -159,  -159,  -159,  -159,   307,   134,     9,    64,
    -159,  -159,   198,  -159,  -159,   114,   142,   275,    82,   152,
    -159,   155,   208,  -159,  -159,   282,   160,  -159,   133,  -159,
     162,   114,    -3,  -159,   169,  -159,   164,   307,   307,   307,
     307,   307,  -159,    34,  -159,   114,  -159,  -159,   181,  -159,
      41,  -159,  -159,    59,   182,   184,   199,   200,   233,   195,
    -159,  -159,    43,  -159,  -159,   216,  -159,   204,  -159,   158,
    -159,   210,   212,  -159,  -159,  -159,    43,    69,    91,   238,
    -159,  -159,   127,  -159,  -159,    64,    64,  -159,  -159,  -159,
     275,  -159,   206,  -159,  -159,   282,  -159,   218,    43,   243,
    -159,    43,    43,  -159,  -159,  -159,   228,  -159,   307,   227,
      83,   104,  -159,  -159,  -159,    43,  -159,    43,    43,    43,
      43,    43,   162,   234,  -159,   236,  -159,   239,  -159,   235,
    -159,   246,   251,   252,    91,    12,   187,   311,   314,   258,
    -159,   259,  -159,   307,   268,   264,   216,  -159,   271,   273,
    -159,  -159,  -159,    69,    69,  -159,   162,  -159,  -159,   274,
      43,  -159,  -159,   183,    43,    43,    43,    43,    43,    43,
      43,    43,   183,   280,   285,    85,  -159,  -159,   268,   283,
    -159,  -159,  -159,  -159,   246,   296,    91,    91,    91,    91,
      12,    12,   187,   311,  -159,  -159,   295,  -159,    56,  -159,
    -159,  -159,   183,  -159,   268,  -159,   292,  -159,   299,  -159,
    -159
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    15,     0,     0,     2,     3,     7,     0,     8,
       4,     0,     0,     1,     5,    38,     0,     6,     0,     0,
       0,     0,     0,     0,    39,     0,    30,     0,     0,     0,
       0,     0,    13,     0,     0,     0,     0,    64,    99,   100,
     101,     0,   106,   107,   108,   143,     0,     0,   132,   133,
     136,   140,     0,    40,    50,     0,     0,     0,    38,    26,
      31,     0,     0,    18,    22,     0,    11,    14,     0,    58,
      70,     0,     0,    65,     0,   141,    36,     0,     0,     0,
       0,     0,    52,     0,    60,     0,    41,    27,    16,    24,
       0,    19,    12,    94,     0,     0,     0,     0,     0,     0,
      79,    74,     0,    76,     9,     0,    10,     0,    81,    72,
      77,     0,    97,   102,    98,   113,     0,   117,    90,     0,
      71,    59,    62,   142,    37,   134,   135,   137,   138,   139,
       0,    51,     0,    61,    17,     0,    23,     0,     0,     0,
      95,     0,     0,    86,    85,    87,     0,    97,     0,     0,
      42,     0,    75,    73,    80,     0,   105,     0,     0,     0,
       0,     0,    66,     0,    63,    46,    53,    20,    25,     0,
     103,   111,     0,     0,   120,   125,   128,   130,    91,     0,
      88,     0,    96,     0,     0,    43,     0,    32,     0,     0,
     114,   115,   116,   118,   119,    68,    67,    47,    21,    92,
       0,   112,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    54,     0,    28,
      33,    78,    69,    93,   109,    82,   123,   124,   121,   122,
     126,   127,   129,   131,    84,    89,    34,    56,     0,    45,
      29,   110,     0,    35,     0,    55,     0,    83,    48,    57,
      49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,    21,  -159,  -159,   298,   -38,    13,   277,   335,
     201,   -59,   308,   150,  -159,  -159,   135,   294,   347,   188,
     211,   125,   -42,  -138,  -159,   253,   354,  -158,   312,   270,
     -15,  -159,  -134,   -91,   241,   186,   -68,  -159,   -20,   -92,
      22,   163,  -159,    65,   -29,    30,   176,   177,  -159,   -16,
    -159,   185,   -26,  -159
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,   103,    33,     7,     8,    30,    19,
     137,    63,    27,   188,     9,   106,   185,    24,    16,   151,
     132,   246,    53,   216,    10,    73,    36,   120,    37,   107,
     108,   109,   110,   111,   173,   140,   147,   113,   114,   115,
     116,   201,   172,   117,   118,   175,   176,   177,   178,    54,
      48,    49,    50,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     112,    45,    45,    90,   195,    47,    91,   146,    45,    45,
      83,   149,    61,    64,    11,    86,    25,    26,     1,    69,
      75,    45,   204,   205,   156,    74,    45,    14,   163,    12,
     104,    17,    45,    35,     2,     3,    35,    45,   222,    13,
      84,   112,    45,    46,    46,    45,    64,   169,   171,    64,
      46,    46,     2,   127,   128,   129,   121,    45,    45,    45,
      45,    45,    15,    46,   189,   190,   191,   192,    46,   225,
     133,   104,     2,     2,    46,    20,   167,   238,   234,    46,
     239,   105,    77,    78,    46,    35,    18,    46,   165,    34,
      55,   206,   207,   217,    38,    39,    40,    93,   130,    46,
      46,    46,    46,    46,   131,   135,   248,    58,   247,   224,
      45,   136,   174,   174,   102,    45,    42,    43,    44,    64,
     244,    28,   105,    29,   217,   138,   245,   217,    45,    21,
     139,    22,   181,    60,    23,   112,    38,    39,    40,    93,
      79,    80,    81,    57,   112,   157,   158,   159,    21,   183,
      22,   184,    46,   217,   215,   237,   102,    46,    42,    43,
      44,    31,    32,    45,   160,   161,    65,   214,   186,   187,
      46,    67,     1,    70,   112,   226,   227,   228,   229,   174,
     174,   174,   174,    68,    38,    39,    40,    93,     2,    71,
      94,    72,    95,    96,    97,    98,    99,     1,   100,   208,
     209,    76,    68,   101,   102,    46,    42,    43,    44,    38,
      39,    40,    93,     2,    85,    94,    25,    95,    96,    97,
      98,    99,    88,   100,    31,   193,   194,    68,   119,   102,
      21,    42,    43,    44,    38,    39,    40,    93,   230,   231,
      94,   123,    95,    96,    97,    98,    99,    28,   100,    38,
      39,    40,    68,   141,   102,   142,    42,    43,    44,    38,
      39,    40,   125,   126,   143,   144,   148,    52,    82,    41,
     150,    42,    43,    44,   152,   154,   166,    62,    89,    41,
     155,    42,    43,    44,    38,    39,    40,    93,   168,    38,
      39,    40,    93,   180,    38,    39,    40,    93,   145,   182,
     130,   196,   199,   135,   102,   162,    42,    43,    44,   102,
     200,    42,    43,    44,   102,   170,    42,    43,    44,    38,
      39,    40,    93,   202,   203,   210,    38,    39,    40,   211,
     212,   213,   218,    38,    39,    40,   220,   215,   221,   102,
     138,    42,    43,    44,    52,   235,    41,   186,    42,    43,
      44,    62,   236,    41,   242,    42,    43,    44,    38,    39,
      40,   183,   249,   244,    92,   134,    66,    87,   198,   240,
     124,   243,    59,   250,   219,   164,   197,    56,    41,   153,
      42,    43,    44,   179,   122,   223,   232,   241,   233
};

static const yytype_uint8 yycheck[] =
{
      68,    21,    22,    62,   162,    21,    65,    98,    28,    29,
      52,   102,    28,    29,     1,    57,    64,    65,    39,    34,
      46,    41,    10,    11,   116,    41,    46,     6,   119,    54,
      68,    10,    52,    20,    55,    56,    23,    57,   196,     0,
      55,   109,    62,    21,    22,    65,    62,   138,   139,    65,
      28,    29,    55,    79,    80,    81,    71,    77,    78,    79,
      80,    81,    54,    41,   155,   157,   158,   159,    46,   203,
      85,   109,    55,    55,    52,    71,   135,   215,   212,    57,
     218,    68,    73,    74,    62,    72,    54,    65,   130,    72,
      72,    79,    80,   184,    51,    52,    53,    54,    64,    77,
      78,    79,    80,    81,    70,    64,   244,    54,   242,   200,
     130,    70,   141,   142,    71,   135,    73,    74,    75,   135,
      64,    66,   109,    68,   215,    66,    70,   218,   148,    66,
      71,    68,   148,    65,    71,   203,    51,    52,    53,    54,
      76,    77,    78,    68,   212,    76,    77,    78,    66,    66,
      68,    68,   130,   244,    69,    70,    71,   135,    73,    74,
      75,    64,    65,   183,    73,    74,    68,   183,    64,    65,
     148,    65,    39,    54,   242,   204,   205,   206,   207,   208,
     209,   210,   211,    69,    51,    52,    53,    54,    55,    72,
      57,    64,    59,    60,    61,    62,    63,    39,    65,    12,
      13,    67,    69,    70,    71,   183,    73,    74,    75,    51,
      52,    53,    54,    55,    72,    57,    64,    59,    60,    61,
      62,    63,    67,    65,    64,   160,   161,    69,    66,    71,
      66,    73,    74,    75,    51,    52,    53,    54,   208,   209,
      57,    72,    59,    60,    61,    62,    63,    66,    65,    51,
      52,    53,    69,    71,    71,    71,    73,    74,    75,    51,
      52,    53,    77,    78,    65,    65,    71,    69,    70,    71,
      54,    73,    74,    75,    70,    65,    70,    69,    70,    71,
      68,    73,    74,    75,    51,    52,    53,    54,    70,    51,
      52,    53,    54,    65,    51,    52,    53,    54,    65,    72,
      64,    67,    67,    64,    71,    67,    73,    74,    75,    71,
      64,    73,    74,    75,    71,    72,    73,    74,    75,    51,
      52,    53,    54,    72,    72,    14,    51,    52,    53,    15,
      72,    72,    68,    51,    52,    53,    65,    69,    65,    71,
      66,    73,    74,    75,    69,    65,    71,    64,    73,    74,
      75,    69,    67,    71,    58,    73,    74,    75,    51,    52,
      53,    66,    70,    64,    66,    88,    31,    59,   167,   219,
      76,   236,    25,   248,   186,   122,   165,    23,    71,   109,
      73,    74,    75,   142,    72,   199,   210,   224,   211
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    55,    56,    82,    83,    84,    87,    88,    95,
     105,    88,    54,     0,    83,    54,    99,    83,    54,    90,
      71,    66,    68,    71,    98,    64,    65,    93,    66,    68,
      89,    64,    65,    86,    72,    88,   107,   109,    51,    52,
      53,    71,    73,    74,    75,   119,   121,   130,   131,   132,
     133,   134,    69,   103,   130,    72,   107,    68,    54,    99,
      65,   130,    69,    92,   130,    68,    90,    65,    69,   111,
      54,    72,    64,   106,   130,   133,    67,    73,    74,    76,
      77,    78,    70,   103,   111,    72,   103,    93,    67,    70,
      92,    92,    86,    54,    57,    59,    60,    61,    62,    63,
      65,    70,    71,    85,    87,    88,    96,   110,   111,   112,
     113,   114,   117,   118,   119,   120,   121,   124,   125,    66,
     108,   111,   109,    72,    98,   132,   132,   133,   133,   133,
      64,    70,   101,   111,    89,    64,    70,    91,    66,    71,
     116,    71,    71,    65,    65,    65,   114,   117,    71,   114,
      54,   100,    70,   110,    65,    68,   120,    76,    77,    78,
      73,    74,    67,   114,   106,   103,    70,    92,    70,   114,
      72,   114,   123,   115,   125,   126,   127,   128,   129,   115,
      65,   130,    72,    66,    68,    97,    64,    65,    94,   114,
     120,   120,   120,   124,   124,   108,    67,   101,    91,    67,
      64,   122,    72,    72,    10,    11,    79,    80,    12,    13,
      14,    15,    72,    72,   130,    69,   104,   114,    68,   100,
      65,    65,   108,   116,   114,   113,   125,   125,   125,   125,
     126,   126,   127,   128,   113,    65,    67,    70,   104,   104,
      94,   122,    58,    97,    64,    70,   102,   113,   104,    70,
     102
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    83,    83,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
      99,    99,   100,   100,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   103,   104,   104,   104,   104,   105,   105,
     105,   105,   106,   106,   107,   107,   108,   108,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   115,   116,   116,   117,   117,   118,   118,   118,   119,
     119,   119,   120,   120,   120,   120,   121,   121,   121,   122,
     122,   123,   123,   124,   124,   124,   124,   125,   125,   125,
     126,   126,   126,   126,   126,   127,   127,   127,   128,   128,
     129,   129,   130,   131,   131,   131,   132,   132,   132,   132,
     133,   133,   134,   134
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     2,     3,     4,     5,     1,     3,     4,     3,     4,
       2,     3,     1,     3,     2,     4,     2,     3,     2,     3,
       3,     4,     3,     4,     3,     4,     3,     4,     1,     2,
       3,     4,     1,     2,     3,     4,     2,     3,     2,     3,
       1,     3,     2,     4,     1,     3,     2,     4,     5,     6,
       5,     6,     2,     3,     1,     2,     2,     3,     3,     4,
       2,     3,     1,     2,     2,     3,     1,     1,     4,     1,
       2,     1,     5,     7,     5,     2,     2,     2,     3,     5,
       1,     1,     3,     4,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     3,     4,     2,     1,     1,     1,     2,
       3,     1,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
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

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 50 "SysY.y"
                        {(yyval.p_ast)=(yyvsp[0].p_ast);ast_root=(yyvsp[0].p_ast);}
#line 1601 "SysY.tab.c"
    break;

  case 3:
#line 54 "SysY.y"
                        {(yyval.p_ast) = new_comp_unit(NULL,(yyvsp[0].p_ast));}
#line 1607 "SysY.tab.c"
    break;

  case 4:
#line 55 "SysY.y"
                        {(yyval.p_ast) = new_comp_unit(NULL,(yyvsp[0].p_ast));}
#line 1613 "SysY.tab.c"
    break;

  case 5:
#line 56 "SysY.y"
                        {(yyval.p_ast) = new_comp_unit((yyvsp[0].p_ast),(yyvsp[-1].p_ast));}
#line 1619 "SysY.tab.c"
    break;

  case 6:
#line 57 "SysY.y"
                        {(yyval.p_ast) = new_comp_unit((yyvsp[0].p_ast),(yyvsp[-1].p_ast));}
#line 1625 "SysY.tab.c"
    break;

  case 7:
#line 62 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1631 "SysY.tab.c"
    break;

  case 8:
#line 63 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1637 "SysY.tab.c"
    break;

  case 9:
#line 67 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1643 "SysY.tab.c"
    break;

  case 10:
#line 68 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1649 "SysY.tab.c"
    break;

  case 11:
#line 72 "SysY.y"
                                {(yyval.p_ast) = new_const_decl("",(yyvsp[0].p_ast),NULL);}
#line 1655 "SysY.tab.c"
    break;

  case 12:
#line 73 "SysY.y"
                                {(yyval.p_ast) = new_const_decl("",(yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 1661 "SysY.tab.c"
    break;

  case 13:
#line 77 "SysY.y"
                                        {(yyval.p_ast) = new_const_decl((yyvsp[-2].v_string),(yyvsp[-1].p_ast),NULL);}
#line 1667 "SysY.tab.c"
    break;

  case 14:
#line 78 "SysY.y"
                                          {(yyval.p_ast) = new_const_decl((yyvsp[-3].v_string),(yyvsp[-2].p_ast),(yyvsp[-1].p_ast));}
#line 1673 "SysY.tab.c"
    break;

  case 15:
#line 82 "SysY.y"
                                {(yyval.v_string) = (yyvsp[0].v_string);}
#line 1679 "SysY.tab.c"
    break;

  case 16:
#line 87 "SysY.y"
                                        {(yyval.p_ast) = new_const_def_a(NULL,(yyvsp[-1].p_ast));}
#line 1685 "SysY.tab.c"
    break;

  case 17:
#line 88 "SysY.y"
                                        {(yyval.p_ast) = new_const_def_a((yyvsp[0].p_ast),(yyvsp[-2].p_ast));}
#line 1691 "SysY.tab.c"
    break;

  case 18:
#line 93 "SysY.y"
                                                {(yyval.p_ast) = new_const_def((yyvsp[-2].v_string),NULL,(yyvsp[0].p_ast));}
#line 1697 "SysY.tab.c"
    break;

  case 19:
#line 94 "SysY.y"
                                                {(yyval.p_ast) = new_const_def((yyvsp[-3].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1703 "SysY.tab.c"
    break;

  case 20:
#line 98 "SysY.y"
                                        {(yyval.p_ast) = new_const_init(NULL,(yyvsp[0].p_ast),"");}
#line 1709 "SysY.tab.c"
    break;

  case 21:
#line 99 "SysY.y"
                                        {(yyval.p_ast) = new_const_init((yyvsp[0].p_ast),(yyvsp[-1].p_ast),"");}
#line 1715 "SysY.tab.c"
    break;

  case 22:
#line 104 "SysY.y"
                                {(yyval.p_ast) = new_const_init((yyvsp[0].p_ast),NULL,"");}
#line 1721 "SysY.tab.c"
    break;

  case 23:
#line 105 "SysY.y"
                                {(yyval.p_ast) = new_const_init(NULL,(yyvsp[-1].p_ast),"{}");}
#line 1727 "SysY.tab.c"
    break;

  case 24:
#line 106 "SysY.y"
                                {(yyval.p_ast) = new_const_init(NULL,NULL,"{}");}
#line 1733 "SysY.tab.c"
    break;

  case 25:
#line 107 "SysY.y"
                                                {(yyval.p_ast) = new_const_init((yyvsp[-1].p_ast),(yyvsp[-2].p_ast),"{}");}
#line 1739 "SysY.tab.c"
    break;

  case 26:
#line 112 "SysY.y"
                                {(yyval.p_ast) = new_var_decl("",NULL,(yyvsp[0].p_ast));}
#line 1745 "SysY.tab.c"
    break;

  case 27:
#line 113 "SysY.y"
                                {(yyval.p_ast) = new_var_decl("",(yyvsp[0].p_ast),(yyvsp[-1].p_ast));}
#line 1751 "SysY.tab.c"
    break;

  case 28:
#line 117 "SysY.y"
                                {(yyval.p_ast) = new_var_decl("",NULL,(yyvsp[0].p_ast));}
#line 1757 "SysY.tab.c"
    break;

  case 29:
#line 118 "SysY.y"
                                {(yyval.p_ast) = new_var_decl("",(yyvsp[0].p_ast),(yyvsp[-1].p_ast));}
#line 1763 "SysY.tab.c"
    break;

  case 30:
#line 122 "SysY.y"
                                        {(yyval.p_ast) = new_var_decl((yyvsp[-2].v_string),NULL,(yyvsp[-1].p_ast));}
#line 1769 "SysY.tab.c"
    break;

  case 31:
#line 123 "SysY.y"
                                    {(yyval.p_ast) = new_var_decl((yyvsp[-3].v_string),(yyvsp[-1].p_ast),(yyvsp[-2].p_ast));}
#line 1775 "SysY.tab.c"
    break;

  case 32:
#line 127 "SysY.y"
                                {(yyval.p_ast) = new_var_decl((yyvsp[-2].v_string),NULL,(yyvsp[-1].p_ast));}
#line 1781 "SysY.tab.c"
    break;

  case 33:
#line 128 "SysY.y"
                                {(yyval.p_ast) = new_var_decl((yyvsp[-3].v_string),(yyvsp[-1].p_ast),(yyvsp[-2].p_ast));}
#line 1787 "SysY.tab.c"
    break;

  case 34:
#line 133 "SysY.y"
                                {(yyval.p_ast) = new_var_def_a(NULL,(yyvsp[-1].p_ast));}
#line 1793 "SysY.tab.c"
    break;

  case 35:
#line 134 "SysY.y"
                                {(yyval.p_ast) = new_var_def_a((yyvsp[0].p_ast),(yyvsp[-2].p_ast));}
#line 1799 "SysY.tab.c"
    break;

  case 36:
#line 138 "SysY.y"
                                {(yyval.p_ast) = new_var_def_a(NULL,(yyvsp[-1].p_ast));}
#line 1805 "SysY.tab.c"
    break;

  case 37:
#line 139 "SysY.y"
                                  {(yyval.p_ast) = new_var_def_a((yyvsp[0].p_ast),(yyvsp[-2].p_ast));}
#line 1811 "SysY.tab.c"
    break;

  case 38:
#line 143 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[0].v_string),NULL,NULL);}
#line 1817 "SysY.tab.c"
    break;

  case 39:
#line 144 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-1].v_string),(yyvsp[0].p_ast),NULL);}
#line 1823 "SysY.tab.c"
    break;

  case 40:
#line 145 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-2].v_string),NULL,(yyvsp[0].p_ast));}
#line 1829 "SysY.tab.c"
    break;

  case 41:
#line 146 "SysY.y"
                                                {(yyval.p_ast) = new_var_def((yyvsp[-3].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1835 "SysY.tab.c"
    break;

  case 42:
#line 150 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[0].v_string),NULL,NULL);}
#line 1841 "SysY.tab.c"
    break;

  case 43:
#line 151 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-1].v_string),(yyvsp[0].p_ast),NULL);}
#line 1847 "SysY.tab.c"
    break;

  case 44:
#line 152 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-2].v_string),NULL,(yyvsp[0].p_ast));}
#line 1853 "SysY.tab.c"
    break;

  case 45:
#line 153 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-3].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1859 "SysY.tab.c"
    break;

  case 46:
#line 157 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[0].p_ast),"",NULL);}
#line 1865 "SysY.tab.c"
    break;

  case 47:
#line 158 "SysY.y"
                                                {(yyval.p_ast) = new_init_var((yyvsp[-1].p_ast),"",(yyvsp[0].p_ast));}
#line 1871 "SysY.tab.c"
    break;

  case 48:
#line 162 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[0].p_ast),"",NULL);}
#line 1877 "SysY.tab.c"
    break;

  case 49:
#line 163 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[-1].p_ast),"",(yyvsp[0].p_ast));}
#line 1883 "SysY.tab.c"
    break;

  case 50:
#line 167 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[0].p_ast),"",NULL);}
#line 1889 "SysY.tab.c"
    break;

  case 51:
#line 168 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[-1].p_ast),"{}",NULL);}
#line 1895 "SysY.tab.c"
    break;

  case 52:
#line 169 "SysY.y"
                                        {(yyval.p_ast) = new_init_var(NULL,"{}",NULL);}
#line 1901 "SysY.tab.c"
    break;

  case 53:
#line 170 "SysY.y"
                                                {(yyval.p_ast) = new_init_var((yyvsp[-2].p_ast),"{}",(yyvsp[-1].p_ast));}
#line 1907 "SysY.tab.c"
    break;

  case 54:
#line 174 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[0].p_ast),"",NULL);}
#line 1913 "SysY.tab.c"
    break;

  case 55:
#line 175 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[-1].p_ast),"{}",NULL);}
#line 1919 "SysY.tab.c"
    break;

  case 56:
#line 176 "SysY.y"
                                        {(yyval.p_ast) = new_init_var(NULL,"{}",NULL);}
#line 1925 "SysY.tab.c"
    break;

  case 57:
#line 177 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[-2].p_ast),"{}",(yyvsp[-1].p_ast));}
#line 1931 "SysY.tab.c"
    break;

  case 58:
#line 182 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-4].v_string),(yyvsp[-3].v_string),NULL,(yyvsp[0].p_ast));}
#line 1937 "SysY.tab.c"
    break;

  case 59:
#line 183 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-5].v_string),(yyvsp[-4].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1943 "SysY.tab.c"
    break;

  case 60:
#line 184 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-4].v_string),(yyvsp[-3].v_string),NULL,(yyvsp[0].p_ast));}
#line 1949 "SysY.tab.c"
    break;

  case 61:
#line 185 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-5].v_string),(yyvsp[-4].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1955 "SysY.tab.c"
    break;

  case 62:
#line 189 "SysY.y"
                                {(yyval.p_ast) = new_func_params(NULL, (yyvsp[0].p_ast));}
#line 1961 "SysY.tab.c"
    break;

  case 63:
#line 190 "SysY.y"
                                   {(yyval.p_ast) = new_func_params((yyvsp[0].p_ast), (yyvsp[-1].p_ast));}
#line 1967 "SysY.tab.c"
    break;

  case 64:
#line 194 "SysY.y"
                                {(yyval.p_ast) = new_func_params(NULL, (yyvsp[0].p_ast));}
#line 1973 "SysY.tab.c"
    break;

  case 65:
#line 195 "SysY.y"
                                {(yyval.p_ast) = new_func_params((yyvsp[0].p_ast), (yyvsp[-1].p_ast));}
#line 1979 "SysY.tab.c"
    break;

  case 66:
#line 199 "SysY.y"
                                        {(yyval.p_ast) = new_square_brackets(NULL,NULL);}
#line 1985 "SysY.tab.c"
    break;

  case 67:
#line 200 "SysY.y"
                                        {(yyval.p_ast) = new_square_brackets(NULL,(yyvsp[-1].p_ast));}
#line 1991 "SysY.tab.c"
    break;

  case 68:
#line 201 "SysY.y"
                                        {(yyval.p_ast) = new_square_brackets((yyvsp[0].p_ast),NULL);}
#line 1997 "SysY.tab.c"
    break;

  case 69:
#line 202 "SysY.y"
                                        {(yyval.p_ast) = new_square_brackets((yyvsp[0].p_ast),(yyvsp[-2].p_ast));}
#line 2003 "SysY.tab.c"
    break;

  case 70:
#line 206 "SysY.y"
                                        {(yyval.p_ast) = new_func_param((yyvsp[-1].v_string), (yyvsp[0].v_string), NULL);}
#line 2009 "SysY.tab.c"
    break;

  case 71:
#line 207 "SysY.y"
                                        {(yyval.p_ast) = new_func_param((yyvsp[-2].v_string), (yyvsp[-1].v_string), (yyvsp[0].p_ast));}
#line 2015 "SysY.tab.c"
    break;

  case 72:
#line 211 "SysY.y"
                                        {(yyval.p_ast) = new_block_item(NULL,(yyvsp[0].p_ast));}
#line 2021 "SysY.tab.c"
    break;

  case 73:
#line 212 "SysY.y"
                                        {(yyval.p_ast) = new_block_item((yyvsp[0].p_ast),(yyvsp[-1].p_ast));}
#line 2027 "SysY.tab.c"
    break;

  case 74:
#line 216 "SysY.y"
                                        {(yyval.p_ast) = new_block(NULL,NULL);}
#line 2033 "SysY.tab.c"
    break;

  case 75:
#line 217 "SysY.y"
                                        {(yyval.p_ast) = new_block(NULL,(yyvsp[-1].p_ast));}
#line 2039 "SysY.tab.c"
    break;

  case 76:
#line 221 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 2045 "SysY.tab.c"
    break;

  case 77:
#line 222 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 2051 "SysY.tab.c"
    break;

  case 78:
#line 226 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("=","",(yyvsp[-3].p_ast),(yyvsp[-1].p_ast),NULL);}
#line 2057 "SysY.tab.c"
    break;

  case 79:
#line 227 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("","",NULL,NULL,NULL);}
#line 2063 "SysY.tab.c"
    break;

  case 80:
#line 228 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("","",(yyvsp[-1].p_ast),NULL,NULL);}
#line 2069 "SysY.tab.c"
    break;

  case 81:
#line 229 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("","",(yyvsp[0].p_ast),NULL,NULL);}
#line 2075 "SysY.tab.c"
    break;

  case 82:
#line 230 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-4].v_string),"",(yyvsp[-2].p_ast),(yyvsp[0].p_ast),NULL);}
#line 2081 "SysY.tab.c"
    break;

  case 83:
#line 231 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-6].v_string),(yyvsp[-1].v_string),(yyvsp[-4].p_ast),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2087 "SysY.tab.c"
    break;

  case 84:
#line 232 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-4].v_string),"",(yyvsp[-2].p_ast),(yyvsp[0].p_ast),NULL);}
#line 2093 "SysY.tab.c"
    break;

  case 85:
#line 233 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-1].v_string),"",NULL,NULL,NULL);}
#line 2099 "SysY.tab.c"
    break;

  case 86:
#line 234 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-1].v_string),"",NULL,NULL,NULL);}
#line 2105 "SysY.tab.c"
    break;

  case 87:
#line 235 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-1].v_string),"",NULL,NULL,NULL);}
#line 2111 "SysY.tab.c"
    break;

  case 88:
#line 236 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-2].v_string),"",(yyvsp[-1].p_ast),NULL,NULL);}
#line 2117 "SysY.tab.c"
    break;

  case 89:
#line 237 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-4].v_string),"",(yyvsp[-2].p_ast),NULL,NULL);}
#line 2123 "SysY.tab.c"
    break;

  case 90:
#line 241 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 2129 "SysY.tab.c"
    break;

  case 91:
#line 245 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 2135 "SysY.tab.c"
    break;

  case 92:
#line 249 "SysY.y"
                        {(yyval.p_ast) = new_subscript(NULL, (yyvsp[-1].p_ast));}
#line 2141 "SysY.tab.c"
    break;

  case 93:
#line 250 "SysY.y"
                        {(yyval.p_ast) = new_subscript((yyvsp[0].p_ast), (yyvsp[-2].p_ast));}
#line 2147 "SysY.tab.c"
    break;

  case 94:
#line 254 "SysY.y"
                        {(yyval.p_ast) = new_id((yyvsp[0].v_string));}
#line 2153 "SysY.tab.c"
    break;

  case 95:
#line 255 "SysY.y"
                        {(yyval.p_ast) = new_id_with_subscript((yyvsp[-1].v_string),(yyvsp[0].p_ast));}
#line 2159 "SysY.tab.c"
    break;

  case 96:
#line 259 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[-1].p_ast);}
#line 2165 "SysY.tab.c"
    break;

  case 97:
#line 260 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2171 "SysY.tab.c"
    break;

  case 98:
#line 261 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2177 "SysY.tab.c"
    break;

  case 99:
#line 266 "SysY.y"
                        {(yyval.p_ast) = new_dec((yyvsp[0].v_int));}
#line 2183 "SysY.tab.c"
    break;

  case 100:
#line 267 "SysY.y"
                        {(yyval.p_ast) = new_oct((yyvsp[0].v_int));}
#line 2189 "SysY.tab.c"
    break;

  case 101:
#line 268 "SysY.y"
                        {(yyval.p_ast) = new_hex((yyvsp[0].v_int));}
#line 2195 "SysY.tab.c"
    break;

  case 102:
#line 272 "SysY.y"
                                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2201 "SysY.tab.c"
    break;

  case 103:
#line 273 "SysY.y"
                                        {(yyval.p_ast) = new_func_call_id((yyvsp[-2].v_string),NULL);}
#line 2207 "SysY.tab.c"
    break;

  case 104:
#line 274 "SysY.y"
                                        {(yyval.p_ast) = new_func_call_id((yyvsp[-3].v_string),(yyvsp[-1].p_ast));}
#line 2213 "SysY.tab.c"
    break;

  case 105:
#line 275 "SysY.y"
                                        {(yyval.p_ast) = new_exp_with_unary_op((yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 2219 "SysY.tab.c"
    break;

  case 106:
#line 280 "SysY.y"
                                        {(yyval.p_ast) = new_unary_op('+');}
#line 2225 "SysY.tab.c"
    break;

  case 107:
#line 281 "SysY.y"
                                        {(yyval.p_ast) = new_unary_op('-');}
#line 2231 "SysY.tab.c"
    break;

  case 108:
#line 282 "SysY.y"
                                        {(yyval.p_ast) = new_unary_op('!');}
#line 2237 "SysY.tab.c"
    break;

  case 109:
#line 286 "SysY.y"
                                {(yyval.p_ast) = new_func_call_param(NULL, (yyvsp[0].p_ast));}
#line 2243 "SysY.tab.c"
    break;

  case 110:
#line 287 "SysY.y"
                                {(yyval.p_ast) = new_func_call_param((yyvsp[0].p_ast), (yyvsp[-1].p_ast));}
#line 2249 "SysY.tab.c"
    break;

  case 111:
#line 291 "SysY.y"
                                {(yyval.p_ast) = new_func_call_param(NULL,(yyvsp[0].p_ast));}
#line 2255 "SysY.tab.c"
    break;

  case 112:
#line 292 "SysY.y"
                                {(yyval.p_ast) = new_func_call_param((yyvsp[0].p_ast), (yyvsp[-1].p_ast));}
#line 2261 "SysY.tab.c"
    break;

  case 113:
#line 296 "SysY.y"
                                {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2267 "SysY.tab.c"
    break;

  case 114:
#line 297 "SysY.y"
                                {(yyval.p_ast) = new_expr('*', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2273 "SysY.tab.c"
    break;

  case 115:
#line 298 "SysY.y"
                                {(yyval.p_ast) = new_expr('/', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2279 "SysY.tab.c"
    break;

  case 116:
#line 299 "SysY.y"
                                {(yyval.p_ast) = new_expr('%', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2285 "SysY.tab.c"
    break;

  case 117:
#line 303 "SysY.y"
                                {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2291 "SysY.tab.c"
    break;

  case 118:
#line 304 "SysY.y"
                                {(yyval.p_ast) = new_expr('+', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2297 "SysY.tab.c"
    break;

  case 119:
#line 305 "SysY.y"
                                {(yyval.p_ast) = new_expr('-', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2303 "SysY.tab.c"
    break;

  case 120:
#line 309 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp("",(yyvsp[0].p_ast),NULL);}
#line 2309 "SysY.tab.c"
    break;

  case 121:
#line 310 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp("<",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2315 "SysY.tab.c"
    break;

  case 122:
#line 311 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp(">",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2321 "SysY.tab.c"
    break;

  case 123:
#line 312 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp("<=",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2327 "SysY.tab.c"
    break;

  case 124:
#line 313 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp(">=",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2333 "SysY.tab.c"
    break;

  case 125:
#line 317 "SysY.y"
                                {(yyval.p_ast) = new_eq_exp("",(yyvsp[0].p_ast),NULL);}
#line 2339 "SysY.tab.c"
    break;

  case 126:
#line 318 "SysY.y"
                                {(yyval.p_ast) = new_eq_exp("==",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2345 "SysY.tab.c"
    break;

  case 127:
#line 319 "SysY.y"
                                {(yyval.p_ast) = new_eq_exp("!=",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2351 "SysY.tab.c"
    break;

  case 128:
#line 323 "SysY.y"
                                {(yyval.p_ast) = new_l_and_exp("",(yyvsp[0].p_ast),NULL);}
#line 2357 "SysY.tab.c"
    break;

  case 129:
#line 324 "SysY.y"
                                {(yyval.p_ast) = new_l_and_exp("&&",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2363 "SysY.tab.c"
    break;

  case 130:
#line 328 "SysY.y"
                                {(yyval.p_ast) = new_l_or_exp("",(yyvsp[0].p_ast),NULL);}
#line 2369 "SysY.tab.c"
    break;

  case 131:
#line 329 "SysY.y"
                                {(yyval.p_ast) = new_l_or_exp("||",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2375 "SysY.tab.c"
    break;

  case 132:
#line 333 "SysY.y"
                                {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2381 "SysY.tab.c"
    break;

  case 133:
#line 337 "SysY.y"
                                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2387 "SysY.tab.c"
    break;

  case 134:
#line 338 "SysY.y"
                                                {(yyval.p_ast) = new_expr('+', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2393 "SysY.tab.c"
    break;

  case 135:
#line 339 "SysY.y"
                                                {(yyval.p_ast) = new_expr('-', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2399 "SysY.tab.c"
    break;

  case 136:
#line 343 "SysY.y"
                                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2405 "SysY.tab.c"
    break;

  case 137:
#line 344 "SysY.y"
                                        {(yyval.p_ast) = new_expr('*', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2411 "SysY.tab.c"
    break;

  case 138:
#line 345 "SysY.y"
                                        {(yyval.p_ast) = new_expr('/', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2417 "SysY.tab.c"
    break;

  case 139:
#line 346 "SysY.y"
                                        {(yyval.p_ast) = new_expr('%', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2423 "SysY.tab.c"
    break;

  case 140:
#line 351 "SysY.y"
                                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2429 "SysY.tab.c"
    break;

  case 141:
#line 352 "SysY.y"
                                                {(yyval.p_ast) = new_exp_with_unary_op((yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 2435 "SysY.tab.c"
    break;

  case 142:
#line 356 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[-1].p_ast);}
#line 2441 "SysY.tab.c"
    break;

  case 143:
#line 357 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2447 "SysY.tab.c"
    break;


#line 2451 "SysY.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 359 "SysY.y"

extern char yytext[];
extern int column;

void yyerror(char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
	printf("\nCompilation terminated.\n");
	exit(0);
}
