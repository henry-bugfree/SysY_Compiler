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
#define YYLAST   336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  222

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
       0,    49,    49,    53,    54,    55,    56,    60,    61,    65,
      66,    71,    72,    76,    81,    82,    87,    88,    92,    93,
      98,    99,   100,   101,   106,   107,   112,   113,   118,   119,
     124,   125,   126,   127,   131,   132,   137,   138,   139,   140,
     145,   146,   147,   148,   152,   153,   158,   159,   163,   164,
     165,   166,   171,   172,   177,   178,   183,   184,   188,   189,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   209,   213,   217,   218,   222,   223,   227,   228,
     229,   234,   235,   236,   241,   242,   243,   244,   249,   250,
     251,   255,   256,   261,   262,   266,   267,   268,   269,   274,
     275,   276,   280,   281,   282,   283,   284,   288,   289,   290,
     294,   295,   299,   300,   304,   308,   309,   310,   314,   315,
     316,   317,   322,   323,   327,   328
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
  "'/'", "'%'", "'<'", "'>'", "$accept", "Start", "CompUnit", "Decl",
  "ConstDecl_A", "ConstDecl", "BType", "ConstDef_A", "ConstDef",
  "ConstInitVal_A", "ConstInitVal", "VarDecl_A", "VarDecl", "VarDef_A",
  "VarDef", "InitVal_A", "InitVal", "FuncDef", "FuncFParams_A",
  "FuncFParams", "FuncFParam_A", "FuncFParam", "Block_A", "Block",
  "BlockItem", "Stmt", "Exp", "Cond", "LVal_A", "LVal", "PrimaryExp",
  "Number", "UnaryExp", "UnaryOp", "FuncRParams_A", "FuncRParams",
  "MulExp", "AddExp", "RelExp", "EqExp", "LAndExp", "LOrExp", "ConstExp",
  "ConstAddExp", "ConstMulExp", "ConstUnaryExp", "ConstPrimaryExp", YY_NULLPTR
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

#define YYPACT_NINF (-161)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,   -27,  -161,    -4,    25,  -161,    16,  -161,     7,  -161,
      16,    12,   -34,  -161,  -161,   229,    33,  -161,   -54,    48,
     -29,   241,    36,    44,     5,    31,  -161,    14,   241,    51,
      40,    12,  -161,    58,    32,    76,    67,    77,  -161,  -161,
    -161,   241,  -161,  -161,  -161,  -161,   241,    80,   133,    91,
    -161,  -161,   -30,   176,   216,  -161,  -161,  -161,  -161,  -161,
    -161,   216,   116,   158,    32,    87,    36,    61,    85,  -161,
     106,   166,  -161,  -161,    51,   118,  -161,   101,  -161,   124,
      32,   -27,  -161,   112,  -161,   130,   241,   241,   241,   241,
     241,   216,   201,  -161,  -161,   -57,   137,  -161,   216,   216,
     216,   216,   216,  -161,    32,  -161,  -161,   149,  -161,   -37,
    -161,  -161,   127,   150,   173,   179,   206,   152,  -161,  -161,
    -161,    31,   178,  -161,   126,  -161,   191,   193,   211,  -161,
    -161,    77,  -161,  -161,    91,    91,  -161,  -161,  -161,   199,
    -161,   219,   224,    36,  -161,   218,  -161,  -161,  -161,  -161,
     116,   116,  -161,  -161,    51,  -161,   231,   216,   216,  -161,
    -161,  -161,   237,   241,  -161,  -161,  -161,   216,   124,   236,
    -161,   238,   216,  -161,  -161,   242,  -161,   243,  -161,   233,
     158,    35,   105,   294,   295,   239,  -161,   245,   244,  -161,
     124,  -161,   219,  -161,  -161,   151,   216,   216,   216,   216,
     216,   216,   216,   216,   151,   248,  -161,  -161,  -161,   260,
     158,   158,   158,   158,    35,    35,   105,   294,  -161,  -161,
     151,  -161
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    13,     0,     0,     2,     3,     7,     0,     8,
       4,     0,     0,     1,     5,    30,     0,     6,     0,     0,
       0,     0,     0,     0,    31,     0,    26,     0,     0,     0,
       0,     0,    11,     0,     0,     0,     0,    46,    81,    82,
      83,     0,    88,    89,    90,   125,     0,     0,   114,   115,
     118,   122,    76,     0,     0,    32,    36,    79,    84,    80,
      95,     0,    99,    72,     0,     0,     0,    30,    24,    27,
       0,     0,    16,    20,     0,     9,    12,     0,    40,    52,
       0,     0,    47,     0,   123,    28,     0,     0,     0,     0,
       0,     0,     0,    77,    38,     0,     0,    87,     0,     0,
       0,     0,     0,    42,     0,    33,    25,    14,    22,     0,
      17,    10,     0,     0,     0,     0,     0,     0,    61,    56,
      58,     0,     0,    63,    54,    59,     0,    79,     0,    53,
      41,    44,   124,    29,   116,   117,   119,   120,   121,     0,
      85,    93,     0,     0,    37,     0,    78,    96,    97,    98,
     100,   101,    43,    15,     0,    21,     0,     0,     0,    68,
      67,    69,     0,     0,    57,    55,    62,     0,    48,     0,
      45,    74,     0,    94,    86,    34,    39,    18,    23,     0,
     102,   107,   110,   112,    73,     0,    70,     0,     0,    50,
      49,    75,    91,    35,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    51,    92,    64,
     105,   106,   103,   104,   108,   109,   111,   113,    66,    71,
       0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,    54,   -75,   246,  -161,    19,   213,   288,   145,
     -68,   255,  -161,   240,   299,   153,   -48,  -161,   195,   304,
    -160,   249,   205,   -13,  -161,  -157,   -22,   174,   160,   -76,
    -161,   -12,   -42,    -6,   141,  -161,   132,   -65,    42,   134,
     131,  -161,   -17,  -161,   212,   -36,  -161
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    33,     7,     8,    30,    19,   156,
      72,    27,     9,    24,    16,   145,    55,    10,    82,    36,
     129,    37,   122,   123,   124,   125,   126,   179,    93,    57,
      58,    59,    60,    61,   173,   142,    62,    63,   181,   182,
     183,   184,    73,    48,    49,    50,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      56,   127,   120,   109,    47,    95,   110,   143,   189,    45,
      84,    70,    28,   144,    29,    46,    45,    45,   105,    97,
      11,    78,    46,    46,    83,    13,     2,   154,     2,    45,
     207,    56,    96,   155,    45,    46,    91,    20,   209,    35,
      46,    92,    35,    34,    56,   196,   197,   218,   127,   120,
      12,   103,   136,   137,   138,     1,   147,   148,   149,    45,
      14,    15,    45,   221,    17,    46,    18,   130,    46,   139,
     141,     2,     3,    66,    45,    45,    45,    45,    45,    69,
      46,    46,    46,    46,    46,    67,   177,    38,    39,    40,
      52,   152,   180,   180,   162,   175,   121,    25,    26,     2,
      35,    77,    38,    39,    40,    53,   169,    54,    74,    42,
      43,    44,    31,    32,   198,   199,    64,   200,   201,   127,
      71,    56,    41,    76,    42,    43,    44,    21,   127,    22,
      79,   210,   211,   212,   213,   180,   180,   180,   180,    80,
       1,    81,    45,   121,   127,   188,   187,    85,    46,    25,
     192,    45,    38,    39,    40,    52,     2,    46,   112,   104,
     113,   114,   115,   116,   117,     1,   118,    88,    89,    90,
      77,   119,    54,   107,    42,    43,    44,    38,    39,    40,
      52,     2,    31,   112,   132,   113,   114,   115,   116,   117,
     128,   118,    98,    99,   100,    77,    21,    54,   157,    42,
      43,    44,    38,    39,    40,    52,    86,    87,   112,   146,
     113,   114,   115,   116,   117,    28,   118,    38,    39,    40,
      77,   158,    54,   163,    42,    43,    44,    38,    39,    40,
      52,   101,   102,   150,   151,    71,   108,    41,   159,    42,
      43,    44,   214,   215,   160,    53,    94,    54,   164,    42,
      43,    44,    38,    39,    40,    52,   166,    38,    39,    40,
      52,   167,    38,    39,    40,    52,   171,    38,    39,    40,
      52,   161,    54,   140,    42,    43,    44,    54,   168,    42,
      43,    44,    54,   172,    42,    43,    44,    54,   176,    42,
      43,    44,    38,    39,    40,    21,   174,    22,   134,   135,
      23,   178,   186,   190,    91,   195,   143,   154,   202,   206,
     203,   204,    41,   219,    42,    43,    44,   205,   220,    75,
     153,   111,   194,   106,    68,   133,   170,    65,   193,   165,
     131,   191,   185,   208,   217,     0,   216
};

static const yytype_int16 yycheck[] =
{
      22,    77,    77,    71,    21,    53,    74,    64,   168,    21,
      46,    28,    66,    70,    68,    21,    28,    29,    66,    61,
       1,    34,    28,    29,    41,     0,    55,    64,    55,    41,
     190,    53,    54,    70,    46,    41,    66,    71,   195,    20,
      46,    71,    23,    72,    66,    10,    11,   204,   124,   124,
      54,    64,    88,    89,    90,    39,    98,    99,   100,    71,
       6,    54,    74,   220,    10,    71,    54,    80,    74,    91,
      92,    55,    56,    68,    86,    87,    88,    89,    90,    65,
      86,    87,    88,    89,    90,    54,   154,    51,    52,    53,
      54,   104,   157,   158,   116,   143,    77,    64,    65,    55,
      81,    69,    51,    52,    53,    69,   128,    71,    68,    73,
      74,    75,    64,    65,    79,    80,    72,    12,    13,   195,
      69,   143,    71,    65,    73,    74,    75,    66,   204,    68,
      54,   196,   197,   198,   199,   200,   201,   202,   203,    72,
      39,    64,   154,   124,   220,   167,   163,    67,   154,    64,
     172,   163,    51,    52,    53,    54,    55,   163,    57,    72,
      59,    60,    61,    62,    63,    39,    65,    76,    77,    78,
      69,    70,    71,    67,    73,    74,    75,    51,    52,    53,
      54,    55,    64,    57,    72,    59,    60,    61,    62,    63,
      66,    65,    76,    77,    78,    69,    66,    71,    71,    73,
      74,    75,    51,    52,    53,    54,    73,    74,    57,    72,
      59,    60,    61,    62,    63,    66,    65,    51,    52,    53,
      69,    71,    71,    71,    73,    74,    75,    51,    52,    53,
      54,    73,    74,   101,   102,    69,    70,    71,    65,    73,
      74,    75,   200,   201,    65,    69,    70,    71,    70,    73,
      74,    75,    51,    52,    53,    54,    65,    51,    52,    53,
      54,    68,    51,    52,    53,    54,    67,    51,    52,    53,
      54,    65,    71,    72,    73,    74,    75,    71,    67,    73,
      74,    75,    71,    64,    73,    74,    75,    71,    70,    73,
      74,    75,    51,    52,    53,    66,    72,    68,    86,    87,
      71,    70,    65,    67,    66,    72,    64,    64,    14,    65,
      15,    72,    71,    65,    73,    74,    75,    72,    58,    31,
     107,    75,   177,    68,    25,    85,   131,    23,   175,   124,
      81,   171,   158,   192,   203,    -1,   202
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    39,    55,    56,    82,    83,    84,    86,    87,    93,
      98,    87,    54,     0,    83,    54,    95,    83,    54,    89,
      71,    66,    68,    71,    94,    64,    65,    92,    66,    68,
      88,    64,    65,    85,    72,    87,   100,   102,    51,    52,
      53,    71,    73,    74,    75,   112,   114,   123,   124,   125,
     126,   127,    54,    69,    71,    97,   107,   110,   111,   112,
     113,   114,   117,   118,    72,   100,    68,    54,    95,    65,
     123,    69,    91,   123,    68,    89,    65,    69,   104,    54,
      72,    64,    99,   123,   126,    67,    73,    74,    76,    77,
      78,    66,    71,   109,    70,    97,   107,   113,    76,    77,
      78,    73,    74,   104,    72,    97,    92,    67,    70,    91,
      91,    85,    57,    59,    60,    61,    62,    63,    65,    70,
      84,    87,   103,   104,   105,   106,   107,   110,    66,   101,
     104,   102,    72,    94,   125,   125,   126,   126,   126,   107,
      72,   107,   116,    64,    70,    96,    72,   113,   113,   113,
     117,   117,   104,    88,    64,    70,    90,    71,    71,    65,
      65,    65,   107,    71,    70,   103,    65,    68,    67,   107,
      99,    67,    64,   115,    72,    97,    70,    91,    70,   108,
     118,   119,   120,   121,   122,   108,    65,   123,   107,   101,
      67,   109,   107,    96,    90,    72,    10,    11,    79,    80,
      12,    13,    14,    15,    72,    72,    65,   101,   115,   106,
     118,   118,   118,   118,   119,   119,   120,   121,   106,    65,
      58,   106
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    81,    82,    83,    83,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    95,    95,    96,    96,    97,    97,    97,    97,
      98,    98,    98,    98,    99,    99,   100,   100,   101,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   108,   109,   109,   110,   110,   111,   111,
     111,   112,   112,   112,   113,   113,   113,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   118,
     118,   118,   119,   119,   119,   119,   119,   120,   120,   120,
     121,   121,   122,   122,   123,   124,   124,   124,   125,   125,
     125,   125,   126,   126,   127,   127
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     1,     1,     2,
       3,     4,     5,     1,     3,     4,     3,     4,     2,     3,
       1,     3,     2,     4,     2,     3,     3,     4,     3,     4,
       1,     2,     3,     4,     2,     3,     1,     3,     2,     4,
       5,     6,     5,     6,     2,     3,     1,     2,     2,     3,
       3,     4,     2,     3,     1,     2,     2,     3,     1,     1,
       4,     1,     2,     1,     5,     7,     5,     2,     2,     2,
       3,     5,     1,     1,     3,     4,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     3,     4,     2,     1,     1,
       1,     2,     3,     1,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     3,     1
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
#line 49 "SysY.y"
                        {(yyval.p_ast)=(yyvsp[0].p_ast);ast_root=(yyvsp[0].p_ast);}
#line 1572 "SysY.tab.c"
    break;

  case 3:
#line 53 "SysY.y"
                        {(yyval.p_ast) = new_comp_unit(NULL,(yyvsp[0].p_ast));}
#line 1578 "SysY.tab.c"
    break;

  case 4:
#line 54 "SysY.y"
                        {(yyval.p_ast) = new_comp_unit(NULL,(yyvsp[0].p_ast));}
#line 1584 "SysY.tab.c"
    break;

  case 5:
#line 55 "SysY.y"
                        {(yyval.p_ast) = new_comp_unit((yyvsp[0].p_ast),(yyvsp[-1].p_ast));}
#line 1590 "SysY.tab.c"
    break;

  case 6:
#line 56 "SysY.y"
                        {(yyval.p_ast) = new_comp_unit((yyvsp[0].p_ast),(yyvsp[-1].p_ast));}
#line 1596 "SysY.tab.c"
    break;

  case 7:
#line 60 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1602 "SysY.tab.c"
    break;

  case 8:
#line 61 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 1608 "SysY.tab.c"
    break;

  case 9:
#line 65 "SysY.y"
                                {(yyval.p_ast) = new_const_decl("",(yyvsp[0].p_ast),NULL);}
#line 1614 "SysY.tab.c"
    break;

  case 10:
#line 66 "SysY.y"
                                {(yyval.p_ast) = new_const_decl("",(yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 1620 "SysY.tab.c"
    break;

  case 11:
#line 71 "SysY.y"
                                        {(yyval.p_ast) = new_const_decl((yyvsp[-2].v_string),(yyvsp[-1].p_ast),NULL);}
#line 1626 "SysY.tab.c"
    break;

  case 12:
#line 72 "SysY.y"
                                          {(yyval.p_ast) = new_const_decl((yyvsp[-3].v_string),(yyvsp[-2].p_ast),(yyvsp[-1].p_ast));}
#line 1632 "SysY.tab.c"
    break;

  case 13:
#line 76 "SysY.y"
                                {(yyval.v_string) = (yyvsp[0].v_string);}
#line 1638 "SysY.tab.c"
    break;

  case 14:
#line 81 "SysY.y"
                                        {(yyval.p_ast) = new_const_def_a(NULL,(yyvsp[-1].p_ast));}
#line 1644 "SysY.tab.c"
    break;

  case 15:
#line 82 "SysY.y"
                                        {(yyval.p_ast) = new_const_def_a((yyvsp[0].p_ast),(yyvsp[-2].p_ast));}
#line 1650 "SysY.tab.c"
    break;

  case 16:
#line 87 "SysY.y"
                                                {(yyval.p_ast) = new_const_def((yyvsp[-2].v_string),NULL,(yyvsp[0].p_ast));}
#line 1656 "SysY.tab.c"
    break;

  case 17:
#line 88 "SysY.y"
                                                {(yyval.p_ast) = new_const_def((yyvsp[-3].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1662 "SysY.tab.c"
    break;

  case 18:
#line 92 "SysY.y"
                                        {(yyval.p_ast) = new_const_init(NULL,(yyvsp[0].p_ast),"");}
#line 1668 "SysY.tab.c"
    break;

  case 19:
#line 93 "SysY.y"
                                        {(yyval.p_ast) = new_const_init((yyvsp[0].p_ast),(yyvsp[-1].p_ast),"");}
#line 1674 "SysY.tab.c"
    break;

  case 20:
#line 98 "SysY.y"
                                {(yyval.p_ast) = new_const_init(NULL,(yyvsp[0].p_ast),"");}
#line 1680 "SysY.tab.c"
    break;

  case 21:
#line 99 "SysY.y"
                                {(yyval.p_ast) = new_const_init(NULL,(yyvsp[-1].p_ast),"{}");}
#line 1686 "SysY.tab.c"
    break;

  case 22:
#line 100 "SysY.y"
                                {(yyval.p_ast) = new_const_init(NULL,NULL,"{}");}
#line 1692 "SysY.tab.c"
    break;

  case 23:
#line 101 "SysY.y"
                                                {(yyval.p_ast) = new_const_init((yyvsp[-1].p_ast),(yyvsp[-2].p_ast),"{}");}
#line 1698 "SysY.tab.c"
    break;

  case 24:
#line 106 "SysY.y"
                                {(yyval.p_ast) = new_var_decl("",NULL,(yyvsp[0].p_ast));}
#line 1704 "SysY.tab.c"
    break;

  case 25:
#line 107 "SysY.y"
                                {(yyval.p_ast) = new_var_decl("",(yyvsp[0].p_ast),(yyvsp[-1].p_ast));}
#line 1710 "SysY.tab.c"
    break;

  case 26:
#line 112 "SysY.y"
                                {(yyval.p_ast) = new_var_decl((yyvsp[-2].v_string),NULL,(yyvsp[-1].p_ast));}
#line 1716 "SysY.tab.c"
    break;

  case 27:
#line 113 "SysY.y"
                                {(yyval.p_ast) = new_var_decl((yyvsp[-3].v_string),(yyvsp[-1].p_ast),(yyvsp[-2].p_ast));}
#line 1722 "SysY.tab.c"
    break;

  case 28:
#line 118 "SysY.y"
                                {(yyval.p_ast) = new_var_def_a(NULL,(yyvsp[-1].p_ast));}
#line 1728 "SysY.tab.c"
    break;

  case 29:
#line 119 "SysY.y"
                                {(yyval.p_ast) = new_var_def_a((yyvsp[0].p_ast),(yyvsp[-2].p_ast));}
#line 1734 "SysY.tab.c"
    break;

  case 30:
#line 124 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[0].v_string),NULL,NULL);}
#line 1740 "SysY.tab.c"
    break;

  case 31:
#line 125 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-1].v_string),(yyvsp[0].p_ast),NULL);}
#line 1746 "SysY.tab.c"
    break;

  case 32:
#line 126 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-2].v_string),NULL,(yyvsp[0].p_ast));}
#line 1752 "SysY.tab.c"
    break;

  case 33:
#line 127 "SysY.y"
                                        {(yyval.p_ast) = new_var_def((yyvsp[-3].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1758 "SysY.tab.c"
    break;

  case 34:
#line 131 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[0].p_ast),"",NULL);}
#line 1764 "SysY.tab.c"
    break;

  case 35:
#line 132 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[-1].p_ast),"",(yyvsp[0].p_ast));}
#line 1770 "SysY.tab.c"
    break;

  case 36:
#line 137 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[0].p_ast),"",NULL);}
#line 1776 "SysY.tab.c"
    break;

  case 37:
#line 138 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[-1].p_ast),"{}",NULL);}
#line 1782 "SysY.tab.c"
    break;

  case 38:
#line 139 "SysY.y"
                                        {(yyval.p_ast) = new_init_var(NULL,"{}",NULL);}
#line 1788 "SysY.tab.c"
    break;

  case 39:
#line 140 "SysY.y"
                                        {(yyval.p_ast) = new_init_var((yyvsp[-2].p_ast),"{}",(yyvsp[-1].p_ast));}
#line 1794 "SysY.tab.c"
    break;

  case 40:
#line 145 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-4].v_string),(yyvsp[-3].v_string),NULL,(yyvsp[0].p_ast));}
#line 1800 "SysY.tab.c"
    break;

  case 41:
#line 146 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-5].v_string),(yyvsp[-4].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1806 "SysY.tab.c"
    break;

  case 42:
#line 147 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-4].v_string),(yyvsp[-3].v_string),NULL,(yyvsp[0].p_ast));}
#line 1812 "SysY.tab.c"
    break;

  case 43:
#line 148 "SysY.y"
                                                {(yyval.p_ast) = new_func_def((yyvsp[-5].v_string),(yyvsp[-4].v_string),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1818 "SysY.tab.c"
    break;

  case 44:
#line 152 "SysY.y"
                                {(yyval.p_ast) = new_func_params(NULL, (yyvsp[0].p_ast));}
#line 1824 "SysY.tab.c"
    break;

  case 45:
#line 153 "SysY.y"
                                   {(yyval.p_ast) = new_func_params((yyvsp[0].p_ast), (yyvsp[-1].p_ast));}
#line 1830 "SysY.tab.c"
    break;

  case 46:
#line 158 "SysY.y"
                                {(yyval.p_ast) = new_func_params(NULL, (yyvsp[0].p_ast));}
#line 1836 "SysY.tab.c"
    break;

  case 47:
#line 159 "SysY.y"
                                {(yyval.p_ast) = new_func_params((yyvsp[0].p_ast), (yyvsp[-1].p_ast));}
#line 1842 "SysY.tab.c"
    break;

  case 48:
#line 163 "SysY.y"
                                        {(yyval.p_ast) = new_square_brackets(NULL,NULL);}
#line 1848 "SysY.tab.c"
    break;

  case 49:
#line 164 "SysY.y"
                                        {(yyval.p_ast) = new_square_brackets(NULL,(yyvsp[-1].p_ast));}
#line 1854 "SysY.tab.c"
    break;

  case 50:
#line 165 "SysY.y"
                                        {(yyval.p_ast) = new_square_brackets((yyvsp[0].p_ast),NULL);}
#line 1860 "SysY.tab.c"
    break;

  case 51:
#line 166 "SysY.y"
                                        {(yyval.p_ast) = new_square_brackets((yyvsp[0].p_ast),(yyvsp[-2].p_ast));}
#line 1866 "SysY.tab.c"
    break;

  case 52:
#line 171 "SysY.y"
                                        {(yyval.p_ast) = new_func_param((yyvsp[-1].v_string), (yyvsp[0].v_string), NULL);}
#line 1872 "SysY.tab.c"
    break;

  case 53:
#line 172 "SysY.y"
                                        {(yyval.p_ast) = new_func_param((yyvsp[-2].v_string), (yyvsp[-1].v_string), (yyvsp[0].p_ast));}
#line 1878 "SysY.tab.c"
    break;

  case 54:
#line 177 "SysY.y"
                                        {(yyval.p_ast) = new_block_item(NULL,(yyvsp[0].p_ast));}
#line 1884 "SysY.tab.c"
    break;

  case 55:
#line 178 "SysY.y"
                                        {(yyval.p_ast) = new_block_item((yyvsp[0].p_ast),(yyvsp[-1].p_ast));}
#line 1890 "SysY.tab.c"
    break;

  case 56:
#line 183 "SysY.y"
                                        {(yyval.p_ast) = new_block(NULL,NULL);}
#line 1896 "SysY.tab.c"
    break;

  case 57:
#line 184 "SysY.y"
                                        {(yyval.p_ast) = new_block(NULL,(yyvsp[-1].p_ast));}
#line 1902 "SysY.tab.c"
    break;

  case 58:
#line 188 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 1908 "SysY.tab.c"
    break;

  case 59:
#line 189 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 1914 "SysY.tab.c"
    break;

  case 60:
#line 194 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("=","",(yyvsp[-3].p_ast),(yyvsp[-1].p_ast),NULL);}
#line 1920 "SysY.tab.c"
    break;

  case 61:
#line 195 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("","",NULL,NULL,NULL);}
#line 1926 "SysY.tab.c"
    break;

  case 62:
#line 196 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("","",(yyvsp[-1].p_ast),NULL,NULL);}
#line 1932 "SysY.tab.c"
    break;

  case 63:
#line 197 "SysY.y"
                                        {(yyval.p_ast)=new_stmt("","",(yyvsp[0].p_ast),NULL,NULL);}
#line 1938 "SysY.tab.c"
    break;

  case 64:
#line 198 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-4].v_string),"",(yyvsp[-2].p_ast),(yyvsp[0].p_ast),NULL);}
#line 1944 "SysY.tab.c"
    break;

  case 65:
#line 199 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-6].v_string),(yyvsp[-1].v_string),(yyvsp[-4].p_ast),(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 1950 "SysY.tab.c"
    break;

  case 66:
#line 200 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-4].v_string),"",(yyvsp[-2].p_ast),(yyvsp[0].p_ast),NULL);}
#line 1956 "SysY.tab.c"
    break;

  case 67:
#line 201 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-1].v_string),"",NULL,NULL,NULL);}
#line 1962 "SysY.tab.c"
    break;

  case 68:
#line 202 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-1].v_string),"",NULL,NULL,NULL);}
#line 1968 "SysY.tab.c"
    break;

  case 69:
#line 203 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-1].v_string),"",NULL,NULL,NULL);}
#line 1974 "SysY.tab.c"
    break;

  case 70:
#line 204 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-2].v_string),"",(yyvsp[-1].p_ast),NULL,NULL);}
#line 1980 "SysY.tab.c"
    break;

  case 71:
#line 205 "SysY.y"
                                        {(yyval.p_ast)=new_stmt((yyvsp[-4].v_string),"",(yyvsp[-2].p_ast),NULL,NULL);}
#line 1986 "SysY.tab.c"
    break;

  case 72:
#line 209 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 1992 "SysY.tab.c"
    break;

  case 73:
#line 213 "SysY.y"
                {(yyval.p_ast)=(yyvsp[0].p_ast);}
#line 1998 "SysY.tab.c"
    break;

  case 74:
#line 217 "SysY.y"
                        {(yyval.p_ast) = new_subscript(NULL, (yyvsp[-1].p_ast));}
#line 2004 "SysY.tab.c"
    break;

  case 75:
#line 218 "SysY.y"
                        {(yyval.p_ast) = new_subscript((yyvsp[0].p_ast), (yyvsp[-2].p_ast));}
#line 2010 "SysY.tab.c"
    break;

  case 76:
#line 222 "SysY.y"
                        {(yyval.p_ast) = new_id((yyvsp[0].v_string));}
#line 2016 "SysY.tab.c"
    break;

  case 77:
#line 223 "SysY.y"
                        {(yyval.p_ast) = new_id_with_subscript((yyvsp[-1].v_string),(yyvsp[0].p_ast));}
#line 2022 "SysY.tab.c"
    break;

  case 78:
#line 227 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[-1].p_ast);}
#line 2028 "SysY.tab.c"
    break;

  case 79:
#line 228 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2034 "SysY.tab.c"
    break;

  case 80:
#line 229 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2040 "SysY.tab.c"
    break;

  case 81:
#line 234 "SysY.y"
                        {(yyval.p_ast) = new_dec((yyvsp[0].v_int));}
#line 2046 "SysY.tab.c"
    break;

  case 82:
#line 235 "SysY.y"
                        {(yyval.p_ast) = new_oct((yyvsp[0].v_int));}
#line 2052 "SysY.tab.c"
    break;

  case 83:
#line 236 "SysY.y"
                        {(yyval.p_ast) = new_hex((yyvsp[0].v_int));}
#line 2058 "SysY.tab.c"
    break;

  case 84:
#line 241 "SysY.y"
                                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2064 "SysY.tab.c"
    break;

  case 85:
#line 242 "SysY.y"
                                        {(yyval.p_ast) = new_func_call_id((yyvsp[-2].v_string),NULL);}
#line 2070 "SysY.tab.c"
    break;

  case 86:
#line 243 "SysY.y"
                                        {(yyval.p_ast) = new_func_call_id((yyvsp[-3].v_string),(yyvsp[-1].p_ast));}
#line 2076 "SysY.tab.c"
    break;

  case 87:
#line 244 "SysY.y"
                                        {(yyval.p_ast) = new_exp_with_unary_op((yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 2082 "SysY.tab.c"
    break;

  case 88:
#line 249 "SysY.y"
                                        {(yyval.p_ast) = new_unary_op('+');}
#line 2088 "SysY.tab.c"
    break;

  case 89:
#line 250 "SysY.y"
                                        {(yyval.p_ast) = new_unary_op('-');}
#line 2094 "SysY.tab.c"
    break;

  case 90:
#line 251 "SysY.y"
                                        {(yyval.p_ast) = new_unary_op('!');}
#line 2100 "SysY.tab.c"
    break;

  case 91:
#line 255 "SysY.y"
                                {(yyval.p_ast) = new_func_call_param(NULL, (yyvsp[0].p_ast));}
#line 2106 "SysY.tab.c"
    break;

  case 92:
#line 256 "SysY.y"
                                {(yyval.p_ast) = new_func_call_param((yyvsp[0].p_ast), (yyvsp[-1].p_ast));}
#line 2112 "SysY.tab.c"
    break;

  case 93:
#line 261 "SysY.y"
                                {(yyval.p_ast) = new_func_call_param(NULL,(yyvsp[0].p_ast));}
#line 2118 "SysY.tab.c"
    break;

  case 94:
#line 262 "SysY.y"
                                {(yyval.p_ast) = new_func_call_param((yyvsp[0].p_ast), (yyvsp[-1].p_ast));}
#line 2124 "SysY.tab.c"
    break;

  case 95:
#line 266 "SysY.y"
                                {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2130 "SysY.tab.c"
    break;

  case 96:
#line 267 "SysY.y"
                                {(yyval.p_ast) = new_expr_mul('*', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2136 "SysY.tab.c"
    break;

  case 97:
#line 268 "SysY.y"
                                {(yyval.p_ast) = new_expr_mul('/', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2142 "SysY.tab.c"
    break;

  case 98:
#line 269 "SysY.y"
                                {(yyval.p_ast) = new_expr_mul('%', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2148 "SysY.tab.c"
    break;

  case 99:
#line 274 "SysY.y"
                                {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2154 "SysY.tab.c"
    break;

  case 100:
#line 275 "SysY.y"
                                {(yyval.p_ast) = new_expr('+', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2160 "SysY.tab.c"
    break;

  case 101:
#line 276 "SysY.y"
                                {(yyval.p_ast) = new_expr('-', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2166 "SysY.tab.c"
    break;

  case 102:
#line 280 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp("",(yyvsp[0].p_ast),NULL);}
#line 2172 "SysY.tab.c"
    break;

  case 103:
#line 281 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp("<",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2178 "SysY.tab.c"
    break;

  case 104:
#line 282 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp(">",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2184 "SysY.tab.c"
    break;

  case 105:
#line 283 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp("<=",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2190 "SysY.tab.c"
    break;

  case 106:
#line 284 "SysY.y"
                                {(yyval.p_ast) = new_rel_exp(">=",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2196 "SysY.tab.c"
    break;

  case 107:
#line 288 "SysY.y"
                                {(yyval.p_ast) = new_eq_exp("",(yyvsp[0].p_ast),NULL);}
#line 2202 "SysY.tab.c"
    break;

  case 108:
#line 289 "SysY.y"
                                {(yyval.p_ast) = new_eq_exp("==",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2208 "SysY.tab.c"
    break;

  case 109:
#line 290 "SysY.y"
                                {(yyval.p_ast) = new_eq_exp("!=",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2214 "SysY.tab.c"
    break;

  case 110:
#line 294 "SysY.y"
                                {(yyval.p_ast) = new_l_and_exp("",(yyvsp[0].p_ast),NULL);}
#line 2220 "SysY.tab.c"
    break;

  case 111:
#line 295 "SysY.y"
                                {(yyval.p_ast) = new_l_and_exp("&&",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2226 "SysY.tab.c"
    break;

  case 112:
#line 299 "SysY.y"
                                {(yyval.p_ast) = new_l_or_exp("",(yyvsp[0].p_ast),NULL);}
#line 2232 "SysY.tab.c"
    break;

  case 113:
#line 300 "SysY.y"
                                {(yyval.p_ast) = new_l_or_exp("||",(yyvsp[-2].p_ast),(yyvsp[0].p_ast));}
#line 2238 "SysY.tab.c"
    break;

  case 114:
#line 304 "SysY.y"
                                {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2244 "SysY.tab.c"
    break;

  case 115:
#line 308 "SysY.y"
                                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2250 "SysY.tab.c"
    break;

  case 116:
#line 309 "SysY.y"
                                                {(yyval.p_ast) = new_expr('+', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2256 "SysY.tab.c"
    break;

  case 117:
#line 310 "SysY.y"
                                                {(yyval.p_ast) = new_expr('-', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2262 "SysY.tab.c"
    break;

  case 118:
#line 314 "SysY.y"
                                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2268 "SysY.tab.c"
    break;

  case 119:
#line 315 "SysY.y"
                                        {(yyval.p_ast) = new_expr_mul('*', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2274 "SysY.tab.c"
    break;

  case 120:
#line 316 "SysY.y"
                                        {(yyval.p_ast) = new_expr_mul('/', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2280 "SysY.tab.c"
    break;

  case 121:
#line 317 "SysY.y"
                                        {(yyval.p_ast) = new_expr_mul('%', (yyvsp[-2].p_ast), (yyvsp[0].p_ast));}
#line 2286 "SysY.tab.c"
    break;

  case 122:
#line 322 "SysY.y"
                                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2292 "SysY.tab.c"
    break;

  case 123:
#line 323 "SysY.y"
                                                {(yyval.p_ast) = new_exp_with_unary_op((yyvsp[-1].p_ast),(yyvsp[0].p_ast));}
#line 2298 "SysY.tab.c"
    break;

  case 124:
#line 327 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[-1].p_ast);}
#line 2304 "SysY.tab.c"
    break;

  case 125:
#line 328 "SysY.y"
                        {(yyval.p_ast) = (yyvsp[0].p_ast);}
#line 2310 "SysY.tab.c"
    break;


#line 2314 "SysY.tab.c"

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
#line 330 "SysY.y"

extern char yytext[];
extern int column;

void yyerror(char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
	exit(0);
}
