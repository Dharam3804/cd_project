/* A Bison parser, made by GNU Bison 3.7.2.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    L_BRACKET = 258,               /* L_BRACKET  */
    R_BRACKET = 259,               /* R_BRACKET  */
    num = 260,                     /* num  */
    VARIABLE = 261,                /* VARIABLE  */
    ADD = 262,                     /* ADD  */
    SUB = 263,                     /* SUB  */
    MUL = 264,                     /* MUL  */
    DIV = 265,                     /* DIV  */
    FLOOR = 266,                   /* FLOOR  */
    CEIL = 267,                    /* CEIL  */
    ROUND = 268,                   /* ROUND  */
    PI = 269,                      /* PI  */
    LOG = 270,                     /* LOG  */
    FACTORIAL = 271,               /* FACTORIAL  */
    LN = 272,                      /* LN  */
    E = 273,                       /* E  */
    BI_DEC = 274,                  /* BI_DEC  */
    DEC_BI = 275,                  /* DEC_BI  */
    DEC_OCT = 276,                 /* DEC_OCT  */
    OCT_DEC = 277,                 /* OCT_DEC  */
    SQRT = 278,                    /* SQRT  */
    POW = 279,                     /* POW  */
    COMMA = 280,                   /* COMMA  */
    MOD = 281,                     /* MOD  */
    ABS = 282,                     /* ABS  */
    ASSIGN = 283,                  /* ASSIGN  */
    IF = 284,                      /* IF  */
    ELSE = 285,                    /* ELSE  */
    SIN = 286,                     /* SIN  */
    COS = 287,                     /* COS  */
    TAN = 288,                     /* TAN  */
    ASIN = 289,                    /* ASIN  */
    ACOS = 290,                    /* ACOS  */
    ATAN = 291,                    /* ATAN  */
    SINH = 292,                    /* SINH  */
    COSH = 293,                    /* COSH  */
    TANH = 294,                    /* TANH  */
    COSEC = 295,                   /* COSEC  */
    SEC = 296,                     /* SEC  */
    COT = 297,                     /* COT  */
    COSECH = 298,                  /* COSECH  */
    SECH = 299,                    /* SECH  */
    COTH = 300,                    /* COTH  */
    ACOSEC = 301,                  /* ACOSEC  */
    ASEC = 302,                    /* ASEC  */
    ACOT = 303,                    /* ACOT  */
    INC = 304,                     /* INC  */
    DEC = 305,                     /* DEC  */
    AND = 306,                     /* AND  */
    OR = 307,                      /* OR  */
    XOR = 308,                     /* XOR  */
    NOT = 309,                     /* NOT  */
    B_OR = 310,                    /* B_OR  */
    B_AND = 311,                   /* B_AND  */
    LEFTSHIFT = 312,               /* LEFTSHIFT  */
    RIGHTSHIFT = 313,              /* RIGHTSHIFT  */
    LESSER = 314,                  /* LESSER  */
    GREATER = 315,                 /* GREATER  */
    LESSERTHAN = 316,              /* LESSERTHAN  */
    GREATERTHAN = 317,             /* GREATERTHAN  */
    EQUAL = 318,                   /* EQUAL  */
    NOTEQUAL = 319,                /* NOTEQUAL  */
    QUIT_CMD = 320,                /* QUIT_CMD  */
    PERMT = 321,                   /* PERMT  */
    COMB = 322,                    /* COMB  */
    MODE = 323,                    /* MODE  */
    HCF = 324,                     /* HCF  */
    LCM = 325,                     /* LCM  */
    MAX = 326,                     /* MAX  */
    MIN = 327,                     /* MIN  */
    AVG = 328,                     /* AVG  */
    PCT = 329,                     /* PCT  */
    CEL_FAH = 330,                 /* CEL_FAH  */
    FAH_CEL = 331,                 /* FAH_CEL  */
    RCPL = 332                     /* RCPL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define L_BRACKET 258
#define R_BRACKET 259
#define num 260
#define VARIABLE 261
#define ADD 262
#define SUB 263
#define MUL 264
#define DIV 265
#define FLOOR 266
#define CEIL 267
#define ROUND 268
#define PI 269
#define LOG 270
#define FACTORIAL 271
#define LN 272
#define E 273
#define BI_DEC 274
#define DEC_BI 275
#define DEC_OCT 276
#define OCT_DEC 277
#define SQRT 278
#define POW 279
#define COMMA 280
#define MOD 281
#define ABS 282
#define ASSIGN 283
#define IF 284
#define ELSE 285
#define SIN 286
#define COS 287
#define TAN 288
#define ASIN 289
#define ACOS 290
#define ATAN 291
#define SINH 292
#define COSH 293
#define TANH 294
#define COSEC 295
#define SEC 296
#define COT 297
#define COSECH 298
#define SECH 299
#define COTH 300
#define ACOSEC 301
#define ASEC 302
#define ACOT 303
#define INC 304
#define DEC 305
#define AND 306
#define OR 307
#define XOR 308
#define NOT 309
#define B_OR 310
#define B_AND 311
#define LEFTSHIFT 312
#define RIGHTSHIFT 313
#define LESSER 314
#define GREATER 315
#define LESSERTHAN 316
#define GREATERTHAN 317
#define EQUAL 318
#define NOTEQUAL 319
#define QUIT_CMD 320
#define PERMT 321
#define COMB 322
#define MODE 323
#define HCF 324
#define LCM 325
#define MAX 326
#define MIN 327
#define AVG 328
#define PCT 329
#define CEL_FAH 330
#define FAH_CEL 331
#define RCPL 332

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 94 "calc.y"
 double p;
  char id;

#line 224 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
