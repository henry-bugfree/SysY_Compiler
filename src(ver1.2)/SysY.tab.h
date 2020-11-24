/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYSY_TAB_H_INCLUDED
# define YY_YY_SYSY_TAB_H_INCLUDED
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
    SIZEOF = 258,                  /* SIZEOF  */
    STRING_LITERAL = 259,          /* STRING_LITERAL  */
    PTR_OP = 260,                  /* PTR_OP  */
    INC_OP = 261,                  /* INC_OP  */
    DEC_OP = 262,                  /* DEC_OP  */
    LEFT_OP = 263,                 /* LEFT_OP  */
    RIGHT_OP = 264,                /* RIGHT_OP  */
    LE_OP = 265,                   /* LE_OP  */
    GE_OP = 266,                   /* GE_OP  */
    EQ_OP = 267,                   /* EQ_OP  */
    NE_OP = 268,                   /* NE_OP  */
    AND_OP = 269,                  /* AND_OP  */
    OR_OP = 270,                   /* OR_OP  */
    MUL_ASSIGN = 271,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 272,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 273,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 274,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 275,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 276,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 277,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 278,              /* AND_ASSIGN  */
    XOR_ASSIGN = 279,              /* XOR_ASSIGN  */
    OR_ASSIGN = 280,               /* OR_ASSIGN  */
    TYPE_NAME = 281,               /* TYPE_NAME  */
    TYPEDEF = 282,                 /* TYPEDEF  */
    EXTERN = 283,                  /* EXTERN  */
    STATIC = 284,                  /* STATIC  */
    AUTO = 285,                    /* AUTO  */
    REGISTER = 286,                /* REGISTER  */
    CHAR = 287,                    /* CHAR  */
    SHORT = 288,                   /* SHORT  */
    LONG = 289,                    /* LONG  */
    SIGNED = 290,                  /* SIGNED  */
    UNSIGNED = 291,                /* UNSIGNED  */
    FLOAT = 292,                   /* FLOAT  */
    DOUBLE = 293,                  /* DOUBLE  */
    CONST = 294,                   /* CONST  */
    VOLATILE = 295,                /* VOLATILE  */
    STRUCT = 296,                  /* STRUCT  */
    UNION = 297,                   /* UNION  */
    ENUM = 298,                    /* ENUM  */
    ELLIPSIS = 299,                /* ELLIPSIS  */
    CASE = 300,                    /* CASE  */
    DEFAULT = 301,                 /* DEFAULT  */
    SWITCH = 302,                  /* SWITCH  */
    DO = 303,                      /* DO  */
    FOR = 304,                     /* FOR  */
    GOTO = 305,                    /* GOTO  */
    DECIMAL = 306,                 /* DECIMAL  */
    OCTAL = 307,                   /* OCTAL  */
    HEXADECIMAL = 308,             /* HEXADECIMAL  */
    IDENTIFIER = 309,              /* IDENTIFIER  */
    INT = 310,                     /* INT  */
    VOID = 311,                    /* VOID  */
    IF = 312,                      /* IF  */
    ELSE = 313,                    /* ELSE  */
    WHILE = 314,                   /* WHILE  */
    CONTINUE = 315,                /* CONTINUE  */
    BREAK = 316,                   /* BREAK  */
    RETURN = 317,                  /* RETURN  */
    PUTINT = 318                   /* PUTINT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "SysY.y"

	int	v_int;
	char*	v_string;
	ast*	p_ast;

#line 133 "SysY.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYSY_TAB_H_INCLUDED  */
