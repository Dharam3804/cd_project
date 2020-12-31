/* A Bison parser, made by GNU Bison 3.7.2.  */

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
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "calc.y"

#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <alloca.h>
#include <stddef.h>

void yyerror(char *s);
int yylex(void);
int sym[26]; 
double cel_fah(double cel){
	return cel*9/5+32;}

double fah_cel(double fah){ 
	return (fah-32)*5/9;}
float fact(float n){
  
    float k, res= 1;
    for (k=1; k<=n; k++)
       res = res * k;
 
    return res;
}


long int bi_dec(long int n)  {
  long int rem,sum=0,base=0;
     while(n>0){
     rem=n%10;
     n=n/10;
     sum=sum+rem*pow(2,base);
     base+=1;
  }

return sum;
}
long int dec_bi(long int n){
    long int bin=0;
    int rem,k=1;
    while(n>0){
       rem=n%2;
       n=n/2;
       bin=bin+rem*k;
       k=k*10;
       }
    return bin;
}
int dec_oct(int n){
    int oct=0,i=1;
    while(n>0){
       oct=oct+(n%8)*i;
        n=n/8;
        i=i*10;
    }
    return oct;
}
int oct_dec(int n){
    int dec=0,i=0;
    while(n>0){
        dec=dec+(n%10)*pow(8,i);
        i++;
        n=n/10;
    }
    i=1;
    return dec;
}
int hcf(int x,int y){
   int res=0;
   for(int i=1; i<=x||i<=y;i++){
      if(x%i==0 && y%i==0)
          res=i;
   }
   return res;
}
int lcm(int x,int y){
    int k;
    k=(x>y) ? x: y;
    while(1){
       if(k%x==0 && k%y==0){
          break;
       }
       k+=1;
    }
    return k;
}


int flag=0;
int m=0,count;

#line 162 "y.tab.c"

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

#line 372 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_L_BRACKET = 3,                  /* L_BRACKET  */
  YYSYMBOL_R_BRACKET = 4,                  /* R_BRACKET  */
  YYSYMBOL_num = 5,                        /* num  */
  YYSYMBOL_VARIABLE = 6,                   /* VARIABLE  */
  YYSYMBOL_ADD = 7,                        /* ADD  */
  YYSYMBOL_SUB = 8,                        /* SUB  */
  YYSYMBOL_MUL = 9,                        /* MUL  */
  YYSYMBOL_DIV = 10,                       /* DIV  */
  YYSYMBOL_FLOOR = 11,                     /* FLOOR  */
  YYSYMBOL_CEIL = 12,                      /* CEIL  */
  YYSYMBOL_ROUND = 13,                     /* ROUND  */
  YYSYMBOL_PI = 14,                        /* PI  */
  YYSYMBOL_LOG = 15,                       /* LOG  */
  YYSYMBOL_FACTORIAL = 16,                 /* FACTORIAL  */
  YYSYMBOL_LN = 17,                        /* LN  */
  YYSYMBOL_E = 18,                         /* E  */
  YYSYMBOL_BI_DEC = 19,                    /* BI_DEC  */
  YYSYMBOL_DEC_BI = 20,                    /* DEC_BI  */
  YYSYMBOL_DEC_OCT = 21,                   /* DEC_OCT  */
  YYSYMBOL_OCT_DEC = 22,                   /* OCT_DEC  */
  YYSYMBOL_SQRT = 23,                      /* SQRT  */
  YYSYMBOL_POW = 24,                       /* POW  */
  YYSYMBOL_COMMA = 25,                     /* COMMA  */
  YYSYMBOL_MOD = 26,                       /* MOD  */
  YYSYMBOL_ABS = 27,                       /* ABS  */
  YYSYMBOL_ASSIGN = 28,                    /* ASSIGN  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_SIN = 31,                       /* SIN  */
  YYSYMBOL_COS = 32,                       /* COS  */
  YYSYMBOL_TAN = 33,                       /* TAN  */
  YYSYMBOL_ASIN = 34,                      /* ASIN  */
  YYSYMBOL_ACOS = 35,                      /* ACOS  */
  YYSYMBOL_ATAN = 36,                      /* ATAN  */
  YYSYMBOL_SINH = 37,                      /* SINH  */
  YYSYMBOL_COSH = 38,                      /* COSH  */
  YYSYMBOL_TANH = 39,                      /* TANH  */
  YYSYMBOL_COSEC = 40,                     /* COSEC  */
  YYSYMBOL_SEC = 41,                       /* SEC  */
  YYSYMBOL_COT = 42,                       /* COT  */
  YYSYMBOL_COSECH = 43,                    /* COSECH  */
  YYSYMBOL_SECH = 44,                      /* SECH  */
  YYSYMBOL_COTH = 45,                      /* COTH  */
  YYSYMBOL_ACOSEC = 46,                    /* ACOSEC  */
  YYSYMBOL_ASEC = 47,                      /* ASEC  */
  YYSYMBOL_ACOT = 48,                      /* ACOT  */
  YYSYMBOL_INC = 49,                       /* INC  */
  YYSYMBOL_DEC = 50,                       /* DEC  */
  YYSYMBOL_AND = 51,                       /* AND  */
  YYSYMBOL_OR = 52,                        /* OR  */
  YYSYMBOL_XOR = 53,                       /* XOR  */
  YYSYMBOL_NOT = 54,                       /* NOT  */
  YYSYMBOL_B_OR = 55,                      /* B_OR  */
  YYSYMBOL_B_AND = 56,                     /* B_AND  */
  YYSYMBOL_LEFTSHIFT = 57,                 /* LEFTSHIFT  */
  YYSYMBOL_RIGHTSHIFT = 58,                /* RIGHTSHIFT  */
  YYSYMBOL_LESSER = 59,                    /* LESSER  */
  YYSYMBOL_GREATER = 60,                   /* GREATER  */
  YYSYMBOL_LESSERTHAN = 61,                /* LESSERTHAN  */
  YYSYMBOL_GREATERTHAN = 62,               /* GREATERTHAN  */
  YYSYMBOL_EQUAL = 63,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 64,                  /* NOTEQUAL  */
  YYSYMBOL_QUIT_CMD = 65,                  /* QUIT_CMD  */
  YYSYMBOL_PERMT = 66,                     /* PERMT  */
  YYSYMBOL_COMB = 67,                      /* COMB  */
  YYSYMBOL_MODE = 68,                      /* MODE  */
  YYSYMBOL_HCF = 69,                       /* HCF  */
  YYSYMBOL_LCM = 70,                       /* LCM  */
  YYSYMBOL_MAX = 71,                       /* MAX  */
  YYSYMBOL_MIN = 72,                       /* MIN  */
  YYSYMBOL_AVG = 73,                       /* AVG  */
  YYSYMBOL_PCT = 74,                       /* PCT  */
  YYSYMBOL_CEL_FAH = 75,                   /* CEL_FAH  */
  YYSYMBOL_FAH_CEL = 76,                   /* FAH_CEL  */
  YYSYMBOL_RCPL = 77,                      /* RCPL  */
  YYSYMBOL_YYACCEPT = 78,                  /* $accept  */
  YYSYMBOL_ss = 79,                        /* ss  */
  YYSYMBOL_exp = 80,                       /* exp  */
  YYSYMBOL_conversion = 81,                /* conversion  */
  YYSYMBOL_constant = 82,                  /* constant  */
  YYSYMBOL_max_list = 83,                  /* max_list  */
  YYSYMBOL_min_list = 84,                  /* min_list  */
  YYSYMBOL_avg_list = 85,                  /* avg_list  */
  YYSYMBOL_hcf_list = 86,                  /* hcf_list  */
  YYSYMBOL_lcm_list = 87                   /* lcm_list  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  101
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2766

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   332


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   128,   128,   130,   131,   132,   133,   135,   138,   139,
     140,   141,   142,   143,   144,   147,   148,   149,   150,   151,
     152,   154,   155,   156,   157,   160,   161,   162,   163,   164,
     165,   168,   169,   170,   171,   172,   174,   175,   176,   177,
     178,   179,   182,   184,   186,   187,   189,   191,   194,   195,
     196,   197,   199,   200,   203,   204,   206,   209,   210,   211,
     212,   213,   215,   216,   217,   219,   220,   221,   223,   224,
     227,   229,   231,   233,   235,   237,   239,   240,   242,   243,
     245,   246,   248,   249,   252,   253,   254,   255
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
  "\"end of file\"", "error", "\"invalid token\"", "L_BRACKET",
  "R_BRACKET", "num", "VARIABLE", "ADD", "SUB", "MUL", "DIV", "FLOOR",
  "CEIL", "ROUND", "PI", "LOG", "FACTORIAL", "LN", "E", "BI_DEC", "DEC_BI",
  "DEC_OCT", "OCT_DEC", "SQRT", "POW", "COMMA", "MOD", "ABS", "ASSIGN",
  "IF", "ELSE", "SIN", "COS", "TAN", "ASIN", "ACOS", "ATAN", "SINH",
  "COSH", "TANH", "COSEC", "SEC", "COT", "COSECH", "SECH", "COTH",
  "ACOSEC", "ASEC", "ACOT", "INC", "DEC", "AND", "OR", "XOR", "NOT",
  "B_OR", "B_AND", "LEFTSHIFT", "RIGHTSHIFT", "LESSER", "GREATER",
  "LESSERTHAN", "GREATERTHAN", "EQUAL", "NOTEQUAL", "QUIT_CMD", "PERMT",
  "COMB", "MODE", "HCF", "LCM", "MAX", "MIN", "AVG", "PCT", "CEL_FAH",
  "FAH_CEL", "RCPL", "$accept", "ss", "exp", "conversion", "constant",
  "max_list", "min_list", "avg_list", "hcf_list", "lcm_list", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332
};
#endif

#define YYPACT_NINF (-22)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     120,   120,   -22,   -21,   120,     5,     6,     7,   -22,     8,
       9,    10,   -22,    11,    12,    13,    14,    15,    16,    17,
      18,    21,    25,    26,    27,    28,    29,    30,    31,    32,
      34,    35,    36,    37,    38,    39,    40,   120,   -22,    41,
      42,    19,    43,    45,    46,    47,    48,    49,    50,    51,
      53,    87,  2640,   -22,   -22,   204,   120,  2702,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,    97,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   -22,    95,   120,   120,   120,   120,   120,   120,   -22,
     -22,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   -22,    97,   266,   328,   390,   452,
     514,   576,   638,   700,   762,   824,   886,   948,  1010,  1072,
    1134,  1196,  1258,  1320,  1382,  1444,  1506,  1568,  1630,  1692,
    1754,  1816,  1878,  1940,  2002,  2064,  2084,  2146,    97,  2166,
      -3,  2228,    -2,  2640,     0,  2640,     1,  2640,     2,  2248,
    2310,  2372,  2434,   104,  2702,  2702,   247,   247,   309,   247,
     141,   141,   141,   360,   360,   141,   141,    97,    97,    97,
      97,    97,    97,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   120,   120,   120,   -22,   120,   120,   -22,
     120,   -22,   120,   -22,   120,   -22,   120,   120,   -22,   -22,
     -22,   102,  2496,  2558,  2640,  2640,  2640,  2640,  2640,  2640,
    2640,  2620,   120,   -22,   -22,   -22,  2702
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    66,    62,     0,     0,     0,     0,    76,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    69,    68,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,    21,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,     0,
       0,     0,     0,    78,     0,    80,     0,    82,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     8,     9,
      16,    15,    17,    19,    20,    23,    24,    25,    26,    27,
      28,    29,    30,    33,    34,    35,    10,    31,    11,    70,
      71,    72,    73,    12,    13,    36,    37,    38,    42,    43,
      44,    48,    49,    50,    39,    40,    41,    51,    52,    53,
      45,    46,    47,     0,     0,     0,    57,     0,     0,    58,
       0,    59,     0,    60,     0,    61,     0,     0,    74,    75,
      14,     0,     0,     0,    84,    85,    86,    87,    79,    81,
      83,     0,     0,    54,    55,    32,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -22,   -22,    -1,   -22,   -22,   -22,   -22,   -22,   -22,   -22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    51,    52,    53,    54,   164,   166,   168,   160,   162
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   226,   229,    57,   231,   233,   235,    56,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,   227,   230,    72,   232,   234,   236,    73,    74,
      75,    76,    77,    78,    79,    80,    88,    81,    82,    83,
      84,    85,    86,    87,    89,    90,    92,    91,    93,    94,
      95,    96,    97,    98,    99,   125,   100,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   101,   156,   157,
     158,   159,   161,   163,   165,   167,   169,   170,   171,   172,
     102,   173,   174,   175,   176,   177,   178,   179,   241,   252,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     1,     0,     2,     3,     0,     4,     0,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   102,     0,     0,    18,     0,     0,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
     118,   119,   120,   121,   122,   123,     0,   102,   124,     0,
       0,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,   242,   243,   244,     0,   245,   246,   107,   247,
     108,   248,     0,   249,     0,   250,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,   256,     0,   109,   110,   111,   112,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   102,
     193,   107,     0,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,   108,     0,     0,     0,   109,   110,   111,   112,
     113,     0,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   102,     0,     0,   109,   110,   111,   112,   113,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   102,   194,     0,     0,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,   108,     0,     0,     0,   109,   110,
     111,   112,   113,   102,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,     0,     0,     0,   109,   110,   111,
     112,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   102,   195,     0,     0,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,   113,   107,     0,   108,   116,   117,   118,
     119,   120,   121,   122,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   102,   196,     0,     0,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   111,   112,   113,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   102,   197,     0,
       0,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   102,
     198,     0,     0,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   102,   199,     0,     0,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   102,   200,     0,     0,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   102,   201,     0,     0,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   111,   112,   113,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   102,   202,     0,
       0,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   102,
     203,     0,     0,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   102,   204,     0,     0,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   102,   205,     0,     0,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   102,   206,     0,     0,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   111,   112,   113,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   102,   207,     0,
       0,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   102,
     208,     0,     0,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   102,   209,     0,     0,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   102,   210,     0,     0,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   102,   211,     0,     0,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   111,   112,   113,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   102,   212,     0,
       0,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   102,
     213,     0,     0,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   102,   214,     0,     0,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   102,   215,     0,     0,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   102,   216,     0,     0,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   111,   112,   113,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   102,   217,     0,
       0,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   102,
     218,     0,     0,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   102,   219,     0,     0,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   102,   220,     0,     0,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   102,   221,     0,     0,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   111,   112,   113,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   102,   222,     0,
       0,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,   107,     0,
     108,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   223,
     108,     0,     0,   109,   110,   111,   112,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     0,
       0,     0,     0,   109,   110,   111,   112,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   102,
       0,     0,     0,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     107,   224,   108,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   225,   108,     0,     0,   109,   110,   111,   112,   113,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,     0,     0,     0,     0,   109,   110,   111,   112,   113,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   102,     0,     0,     0,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,   107,   228,   108,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,   237,   108,     0,     0,   109,   110,   111,
     112,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,     0,     0,     0,     0,   109,   110,   111,
     112,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   102,   238,     0,     0,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   102,   239,     0,     0,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   111,   112,   113,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   102,   240,     0,
       0,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   102,
     253,     0,     0,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   102,   254,     0,     0,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   102,   255,     0,     0,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,   107,     0,   108,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,   108,     0,     0,   109,
     110,   111,   112,   113,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,     0,     0,     0,     0,   109,
     110,   111,   112,   113,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   102,     0,     0,     0,     0,
       0,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   111,   112,   113,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123
};

static const yytype_int16 yycheck[] =
{
       1,     4,     4,     4,     4,     4,     4,    28,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,    25,    25,     3,    25,    25,    25,     3,     3,
       3,     3,     3,     3,     3,     3,    37,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,    28,     3,     3,
       3,     3,     3,     3,     3,    56,     3,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       3,     6,   103,   104,   105,   106,   107,   108,     4,     7,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,     3,    -1,     5,     6,    -1,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     3,    -1,    -1,    27,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      59,    60,    61,    62,    63,    64,    -1,     3,     4,    -1,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   223,   224,   225,    -1,   227,   228,    24,   230,
      26,   232,    -1,   234,    -1,   236,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,   252,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     3,
       4,    24,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     3,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     3,     4,    -1,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    49,    50,
      51,    52,    53,     3,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     3,     4,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    53,    24,    -1,    26,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     3,     4,    -1,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     3,     4,    -1,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     3,
       4,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     3,     4,    -1,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     3,     4,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     3,     4,    -1,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     3,     4,    -1,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     3,
       4,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     3,     4,    -1,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     3,     4,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     3,     4,    -1,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     3,     4,    -1,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     3,
       4,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     3,     4,    -1,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     3,     4,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     3,     4,    -1,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     3,     4,    -1,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     3,
       4,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     3,     4,    -1,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     3,     4,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     3,     4,    -1,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     3,     4,    -1,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     3,
       4,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     3,     4,    -1,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     3,     4,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     3,     4,    -1,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     3,     4,    -1,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    24,    -1,
      26,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     3,
      -1,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      24,    25,    26,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     3,    -1,    -1,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    24,    25,    26,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     3,     4,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     3,     4,    -1,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     3,     4,    -1,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     3,
       4,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     3,     4,    -1,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     3,     4,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    24,    -1,    26,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     3,    -1,    -1,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     6,     8,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    27,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    54,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    79,    80,    81,    82,    80,    28,    80,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,    80,     3,
       3,    28,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     3,     7,     8,     9,    10,    24,    26,    49,
      50,    51,    52,    53,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     4,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      86,    80,    87,    80,    83,    80,    84,    80,    85,    80,
      80,    80,    80,     6,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,    25,    25,    25,     4,    25,    25,     4,
      25,     4,    25,     4,    25,     4,    25,    25,     4,     4,
       4,     4,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,     7,     4,     4,     4,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    78,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    81,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     3,     3,     3,     2,     3,     3,
       4,     4,     4,     4,     4,     3,     3,     3,     2,     3,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     6,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     6,     3,     4,     4,     4,
       4,     4,     1,     3,     6,     3,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     1,     1,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     3
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
  case 2: /* ss: exp  */
#line 128 "calc.y"
        {if(flag==0) 
           printf("Result = %g\n",(yyvsp[0].p));}
#line 2094 "y.tab.c"
    break;

  case 3: /* exp: exp ADD exp  */
#line 130 "calc.y"
                        { (yyval.p)=(yyvsp[-2].p)+(yyvsp[0].p); }
#line 2100 "y.tab.c"
    break;

  case 4: /* exp: exp SUB exp  */
#line 131 "calc.y"
                         { (yyval.p)=(yyvsp[-2].p)-(yyvsp[0].p); }
#line 2106 "y.tab.c"
    break;

  case 5: /* exp: exp MUL exp  */
#line 132 "calc.y"
                         { (yyval.p)=(yyvsp[-2].p)*(yyvsp[0].p); }
#line 2112 "y.tab.c"
    break;

  case 6: /* exp: exp DIV exp  */
#line 133 "calc.y"
                         {if((yyvsp[0].p)!=0){(yyval.p)=(yyvsp[-2].p)/(yyvsp[0].p);} 
				else yyerror("Cannot divide by zero\n");}
#line 2119 "y.tab.c"
    break;

  case 7: /* exp: SUB exp  */
#line 135 "calc.y"
                        {(yyval.p)=-(yyvsp[0].p);}
#line 2125 "y.tab.c"
    break;

  case 8: /* exp: exp POW exp  */
#line 138 "calc.y"
                         {(yyval.p)=pow((yyvsp[-2].p),(yyvsp[0].p));}
#line 2131 "y.tab.c"
    break;

  case 9: /* exp: exp MOD exp  */
#line 139 "calc.y"
                         {if((yyvsp[0].p)!=0){(yyval.p)=fmod((yyvsp[-2].p),(yyvsp[0].p));}else yyerror("Cannot divide by zero\n");}
#line 2137 "y.tab.c"
    break;

  case 10: /* exp: LOG L_BRACKET exp R_BRACKET  */
#line 140 "calc.y"
                                      {(yyval.p)=log10((yyvsp[-1].p));}
#line 2143 "y.tab.c"
    break;

  case 11: /* exp: LN L_BRACKET exp R_BRACKET  */
#line 141 "calc.y"
                                     {(yyval.p)=log((yyvsp[-1].p));}
#line 2149 "y.tab.c"
    break;

  case 12: /* exp: SQRT L_BRACKET exp R_BRACKET  */
#line 142 "calc.y"
                                     {(yyval.p)=sqrt((yyvsp[-1].p));}
#line 2155 "y.tab.c"
    break;

  case 13: /* exp: ABS L_BRACKET exp R_BRACKET  */
#line 143 "calc.y"
                                     { (yyval.p) = abs((yyvsp[-1].p));}
#line 2161 "y.tab.c"
    break;

  case 14: /* exp: RCPL L_BRACKET exp R_BRACKET  */
#line 144 "calc.y"
                                     {(yyval.p)=1/(yyvsp[-1].p);}
#line 2167 "y.tab.c"
    break;

  case 15: /* exp: exp OR exp  */
#line 147 "calc.y"
                                {(yyval.p)=(int)(yyvsp[-2].p)||(int)(yyvsp[0].p);}
#line 2173 "y.tab.c"
    break;

  case 16: /* exp: exp AND exp  */
#line 148 "calc.y"
                                {(yyval.p)=(int)(yyvsp[-2].p)&&(int)(yyvsp[0].p);}
#line 2179 "y.tab.c"
    break;

  case 17: /* exp: exp XOR exp  */
#line 149 "calc.y"
                                {(yyval.p)=(int)(yyvsp[-2].p)^(int)(yyvsp[0].p);}
#line 2185 "y.tab.c"
    break;

  case 18: /* exp: NOT exp  */
#line 150 "calc.y"
                                {(yyval.p)=!(yyvsp[0].p);}
#line 2191 "y.tab.c"
    break;

  case 19: /* exp: exp B_OR exp  */
#line 151 "calc.y"
                                {(yyval.p)=(int)(yyvsp[-2].p)|(int)(yyvsp[0].p);}
#line 2197 "y.tab.c"
    break;

  case 20: /* exp: exp B_AND exp  */
#line 152 "calc.y"
                                {(yyval.p)=(int)(yyvsp[-2].p)&(int)(yyvsp[0].p);}
#line 2203 "y.tab.c"
    break;

  case 21: /* exp: exp INC  */
#line 154 "calc.y"
                                 {(yyval.p)=(yyvsp[-1].p)+1;}
#line 2209 "y.tab.c"
    break;

  case 22: /* exp: exp DEC  */
#line 155 "calc.y"
                                 {(yyval.p)=(yyvsp[-1].p)-1;}
#line 2215 "y.tab.c"
    break;

  case 23: /* exp: exp LEFTSHIFT exp  */
#line 156 "calc.y"
                                 {(yyval.p) = (int)(yyvsp[-2].p)<<(int) (yyvsp[0].p);}
#line 2221 "y.tab.c"
    break;

  case 24: /* exp: exp RIGHTSHIFT exp  */
#line 157 "calc.y"
                                 {(yyval.p) = (int)(yyvsp[-2].p)>>(int) (yyvsp[0].p);}
#line 2227 "y.tab.c"
    break;

  case 25: /* exp: exp LESSER exp  */
#line 160 "calc.y"
                                {(yyval.p) = (yyvsp[-2].p)<(yyvsp[0].p);}
#line 2233 "y.tab.c"
    break;

  case 26: /* exp: exp GREATER exp  */
#line 161 "calc.y"
                                {(yyval.p) = (yyvsp[-2].p)>(yyvsp[0].p);}
#line 2239 "y.tab.c"
    break;

  case 27: /* exp: exp LESSERTHAN exp  */
#line 162 "calc.y"
                                {(yyval.p) = (yyvsp[-2].p)<=(yyvsp[0].p);}
#line 2245 "y.tab.c"
    break;

  case 28: /* exp: exp GREATERTHAN exp  */
#line 163 "calc.y"
                                 {(yyval.p) = (yyvsp[-2].p)>=(yyvsp[0].p);}
#line 2251 "y.tab.c"
    break;

  case 29: /* exp: exp EQUAL exp  */
#line 164 "calc.y"
                                 {(yyval.p) = (yyvsp[-2].p)==(yyvsp[0].p);}
#line 2257 "y.tab.c"
    break;

  case 30: /* exp: exp NOTEQUAL exp  */
#line 165 "calc.y"
                                 {(yyval.p) = (yyvsp[-2].p)!=(yyvsp[0].p);}
#line 2263 "y.tab.c"
    break;

  case 31: /* exp: FACTORIAL L_BRACKET exp R_BRACKET  */
#line 168 "calc.y"
                                           { (yyval.p) = fact((int)(yyvsp[-1].p));}
#line 2269 "y.tab.c"
    break;

  case 32: /* exp: PCT L_BRACKET exp COMMA exp R_BRACKET  */
#line 169 "calc.y"
                                               {(yyval.p)=(float)((yyvsp[-3].p)/(yyvsp[-1].p))*100; }
#line 2275 "y.tab.c"
    break;

  case 33: /* exp: FLOOR L_BRACKET exp R_BRACKET  */
#line 170 "calc.y"
                                           { (yyval.p) = floor((yyvsp[-1].p));}
#line 2281 "y.tab.c"
    break;

  case 34: /* exp: CEIL L_BRACKET exp R_BRACKET  */
#line 171 "calc.y"
                                           { (yyval.p) = ceil((yyvsp[-1].p));}
#line 2287 "y.tab.c"
    break;

  case 35: /* exp: ROUND L_BRACKET exp R_BRACKET  */
#line 172 "calc.y"
                                           { (yyval.p) = round((yyvsp[-1].p));}
#line 2293 "y.tab.c"
    break;

  case 36: /* exp: SIN L_BRACKET exp R_BRACKET  */
#line 174 "calc.y"
                                         {(yyval.p)= m==1 ? sin((yyvsp[-1].p)*3.14159/180): sin((yyvsp[-1].p));}
#line 2299 "y.tab.c"
    break;

  case 37: /* exp: COS L_BRACKET exp R_BRACKET  */
#line 175 "calc.y"
                                           {(yyval.p)= m==1 ? cos((yyvsp[-1].p)*3.14159/180): cos((yyvsp[-1].p));}
#line 2305 "y.tab.c"
    break;

  case 38: /* exp: TAN L_BRACKET exp R_BRACKET  */
#line 176 "calc.y"
                                           {(yyval.p)= m==1 ? tan((yyvsp[-1].p)*3.14159/180): tan((yyvsp[-1].p));}
#line 2311 "y.tab.c"
    break;

  case 39: /* exp: COSEC L_BRACKET exp R_BRACKET  */
#line 177 "calc.y"
                                          {(yyval.p)= m==1 ? 1/sin((yyvsp[-1].p)*3.14159/180): 1/sin((yyvsp[-1].p));}
#line 2317 "y.tab.c"
    break;

  case 40: /* exp: SEC L_BRACKET exp R_BRACKET  */
#line 178 "calc.y"
                                          {(yyval.p)= m==1 ? 1/cos((yyvsp[-1].p)*3.14159/180): 1/cos((yyvsp[-1].p));}
#line 2323 "y.tab.c"
    break;

  case 41: /* exp: COT L_BRACKET exp R_BRACKET  */
#line 179 "calc.y"
                                          {(yyval.p)= m==1 ? 1/tan((yyvsp[-1].p)*3.14159/180): 1/tan((yyvsp[-1].p));}
#line 2329 "y.tab.c"
    break;

  case 42: /* exp: ASIN L_BRACKET exp R_BRACKET  */
#line 182 "calc.y"
                                          {if((yyvsp[-1].p)<=1&&(yyvsp[-1].p)>=-1){(yyval.p)= m==1 ? asin((yyvsp[-1].p))*180/3.14159 : asin((yyvsp[-1].p));} 
				else(yyerror("Out of range\n"));}
#line 2336 "y.tab.c"
    break;

  case 43: /* exp: ACOS L_BRACKET exp R_BRACKET  */
#line 184 "calc.y"
                                          {if((yyvsp[-1].p)<=1&&(yyvsp[-1].p)>=-1){(yyval.p)= m==1 ? asin((yyvsp[-1].p))*180/3.14159 : asin((yyvsp[-1].p));} 
				else(yyerror("Out of range\n"));}
#line 2343 "y.tab.c"
    break;

  case 44: /* exp: ATAN L_BRACKET exp R_BRACKET  */
#line 186 "calc.y"
                                          {(yyval.p)= m==1 ? atan((yyvsp[-1].p))*180/3.14159 : atan((yyvsp[-1].p));}
#line 2349 "y.tab.c"
    break;

  case 45: /* exp: ACOSEC L_BRACKET exp R_BRACKET  */
#line 187 "calc.y"
                                          {if((yyvsp[-1].p)>=1&&(yyvsp[-1].p)<=-1){(yyval.p)= m==1 ? asin(1/(yyvsp[-1].p))*180/3.14159:  asin(1/(yyvsp[-1].p));}
				else(yyerror("Out of range\n"));}
#line 2356 "y.tab.c"
    break;

  case 46: /* exp: ASEC L_BRACKET exp R_BRACKET  */
#line 189 "calc.y"
                                          {if((yyvsp[-1].p)>=1&&(yyvsp[-1].p)<=-1){(yyval.p)= m==1 ? acos(1/(yyvsp[-1].p))*180/3.14159 : acos(1/(yyvsp[-1].p));} 
				else(yyerror("Out of range\n"));}
#line 2363 "y.tab.c"
    break;

  case 47: /* exp: ACOT L_BRACKET exp R_BRACKET  */
#line 191 "calc.y"
                                          {(yyval.p)= m==1 ? atan(1/(yyvsp[-1].p))*180/3.14159: atan(1/(yyvsp[-1].p));}
#line 2369 "y.tab.c"
    break;

  case 48: /* exp: SINH L_BRACKET exp R_BRACKET  */
#line 194 "calc.y"
                                        {(yyval.p)= m==1 ? sinh((yyvsp[-1].p)*3.14159/180): sinh((yyvsp[-1].p));}
#line 2375 "y.tab.c"
    break;

  case 49: /* exp: COSH L_BRACKET exp R_BRACKET  */
#line 195 "calc.y"
                                        {(yyval.p)= m==1 ? cosh((yyvsp[-1].p)*3.14159/180): cosh((yyvsp[-1].p));}
#line 2381 "y.tab.c"
    break;

  case 50: /* exp: TANH L_BRACKET exp R_BRACKET  */
#line 196 "calc.y"
                                        {(yyval.p)= m==1 ? tanh((yyvsp[-1].p)*3.14159/180): tanh((yyvsp[-1].p));}
#line 2387 "y.tab.c"
    break;

  case 51: /* exp: COSECH L_BRACKET exp R_BRACKET  */
#line 197 "calc.y"
                                         {if((yyvsp[-1].p)!=0) {(yyval.p)= m==1 ? 1/sinh((yyvsp[-1].p)*3.14159/180): 1/sinh((yyvsp[-1].p));}
                                else(yyerror("Out of range\n"));}
#line 2394 "y.tab.c"
    break;

  case 52: /* exp: SECH L_BRACKET exp R_BRACKET  */
#line 199 "calc.y"
                                       {(yyval.p)= m==1 ? 1/cosh((yyvsp[-1].p)*3.14159/180): 1/cosh((yyvsp[-1].p));}
#line 2400 "y.tab.c"
    break;

  case 53: /* exp: COTH L_BRACKET exp R_BRACKET  */
#line 200 "calc.y"
                                       {if((yyvsp[-1].p)!=0) {(yyval.p)= m==1 ? 1/tanh((yyvsp[-1].p)*3.14159/180): 1/tanh((yyvsp[-1].p));}
                                else(yyerror("Out of range\n"));}
#line 2407 "y.tab.c"
    break;

  case 54: /* exp: PERMT L_BRACKET exp COMMA exp R_BRACKET  */
#line 203 "calc.y"
                                                 {(yyval.p)=fact((yyvsp[-3].p))/fact((yyvsp[-3].p)-(yyvsp[-1].p));}
#line 2413 "y.tab.c"
    break;

  case 55: /* exp: COMB L_BRACKET exp COMMA exp R_BRACKET  */
#line 204 "calc.y"
                                                 {(yyval.p)=fact((yyvsp[-3].p))/(fact((yyvsp[-1].p))*fact((yyvsp[-3].p)-(yyvsp[-1].p)));}
#line 2419 "y.tab.c"
    break;

  case 56: /* exp: MODE ASSIGN exp  */
#line 206 "calc.y"
                          {m=(yyvsp[0].p); flag=-1; if((yyvsp[0].p)==1){
		printf("\nmode switched to degrees\n");} else printf("\nmode switched to radians\n");}
#line 2426 "y.tab.c"
    break;

  case 57: /* exp: HCF L_BRACKET hcf_list R_BRACKET  */
#line 209 "calc.y"
                                            {(yyval.p)=(yyvsp[-1].p);}
#line 2432 "y.tab.c"
    break;

  case 58: /* exp: LCM L_BRACKET lcm_list R_BRACKET  */
#line 210 "calc.y"
                                            {(yyval.p)=(yyvsp[-1].p);}
#line 2438 "y.tab.c"
    break;

  case 59: /* exp: MAX L_BRACKET max_list R_BRACKET  */
#line 211 "calc.y"
                                          {(yyval.p)=(yyvsp[-1].p);}
#line 2444 "y.tab.c"
    break;

  case 60: /* exp: MIN L_BRACKET min_list R_BRACKET  */
#line 212 "calc.y"
                                          {(yyval.p)=(yyvsp[-1].p);}
#line 2450 "y.tab.c"
    break;

  case 61: /* exp: AVG L_BRACKET avg_list R_BRACKET  */
#line 213 "calc.y"
                                          {count+=1; (yyval.p)=(float)(yyvsp[-1].p)/count;}
#line 2456 "y.tab.c"
    break;

  case 62: /* exp: VARIABLE  */
#line 215 "calc.y"
                 { (yyval.p) = sym[(yyvsp[0].id)]; }
#line 2462 "y.tab.c"
    break;

  case 63: /* exp: VARIABLE ASSIGN exp  */
#line 216 "calc.y"
                            {flag=-1; sym[(yyvsp[-2].id)] = (yyvsp[0].p);}
#line 2468 "y.tab.c"
    break;

  case 64: /* exp: exp L_BRACKET VARIABLE R_BRACKET ADD exp  */
#line 217 "calc.y"
                                                  {(yyval.p)=-(float)(yyvsp[0].p)/(yyvsp[-5].p);}
#line 2474 "y.tab.c"
    break;

  case 65: /* exp: L_BRACKET exp R_BRACKET  */
#line 219 "calc.y"
                                     {(yyval.p)=(yyvsp[-1].p);}
#line 2480 "y.tab.c"
    break;

  case 66: /* exp: num  */
#line 220 "calc.y"
                                     {(yyval.p)=(yyvsp[0].p);}
#line 2486 "y.tab.c"
    break;

  case 67: /* exp: QUIT_CMD  */
#line 221 "calc.y"
                                     {exit(EXIT_SUCCESS);}
#line 2492 "y.tab.c"
    break;

  case 70: /* conversion: BI_DEC L_BRACKET exp R_BRACKET  */
#line 228 "calc.y"
                {(yyval.p)=bi_dec((float)(yyvsp[-1].p));}
#line 2498 "y.tab.c"
    break;

  case 71: /* conversion: DEC_BI L_BRACKET exp R_BRACKET  */
#line 230 "calc.y"
                {(yyval.p)=dec_bi((int)(yyvsp[-1].p));}
#line 2504 "y.tab.c"
    break;

  case 72: /* conversion: DEC_OCT L_BRACKET exp R_BRACKET  */
#line 232 "calc.y"
                {(yyval.p)=dec_oct((int)(yyvsp[-1].p));}
#line 2510 "y.tab.c"
    break;

  case 73: /* conversion: OCT_DEC L_BRACKET exp R_BRACKET  */
#line 234 "calc.y"
                {(yyval.p)=oct_dec((int)(yyvsp[-1].p));}
#line 2516 "y.tab.c"
    break;

  case 74: /* conversion: CEL_FAH L_BRACKET exp R_BRACKET  */
#line 235 "calc.y"
                                           {
                 (yyval.p)=cel_fah((yyvsp[-1].p));}
#line 2523 "y.tab.c"
    break;

  case 75: /* conversion: FAH_CEL L_BRACKET exp R_BRACKET  */
#line 237 "calc.y"
                                           {
                 (yyval.p)=fah_cel((yyvsp[-1].p));}
#line 2530 "y.tab.c"
    break;

  case 76: /* constant: PI  */
#line 239 "calc.y"
            {(yyval.p)=3.14159;}
#line 2536 "y.tab.c"
    break;

  case 77: /* constant: E  */
#line 240 "calc.y"
            {(yyval.p)=2.71828;}
#line 2542 "y.tab.c"
    break;

  case 78: /* max_list: exp  */
#line 242 "calc.y"
                                  {(yyval.p)=(yyvsp[0].p);}
#line 2548 "y.tab.c"
    break;

  case 79: /* max_list: max_list COMMA exp  */
#line 243 "calc.y"
                              {(yyval.p)= (yyvsp[-2].p)>(yyvsp[0].p)?(yyvsp[-2].p):(yyvsp[0].p);}
#line 2554 "y.tab.c"
    break;

  case 80: /* min_list: exp  */
#line 245 "calc.y"
                                   {(yyval.p)=(yyvsp[0].p);}
#line 2560 "y.tab.c"
    break;

  case 81: /* min_list: min_list COMMA exp  */
#line 246 "calc.y"
                              {(yyval.p)=(yyvsp[-2].p)<(yyvsp[0].p)?(yyvsp[-2].p):(yyvsp[0].p);}
#line 2566 "y.tab.c"
    break;

  case 82: /* avg_list: exp  */
#line 248 "calc.y"
                                  { (yyval.p)=(yyvsp[0].p); }
#line 2572 "y.tab.c"
    break;

  case 83: /* avg_list: avg_list COMMA exp  */
#line 249 "calc.y"
                              {
		count+=1; (yyval.p)=((yyvsp[-2].p)+(yyvsp[0].p));}
#line 2579 "y.tab.c"
    break;

  case 84: /* hcf_list: exp COMMA exp  */
#line 252 "calc.y"
                               {(yyval.p)=hcf((yyvsp[-2].p),(yyvsp[0].p));}
#line 2585 "y.tab.c"
    break;

  case 85: /* hcf_list: hcf_list COMMA exp  */
#line 253 "calc.y"
                               {(yyval.p)= hcf((yyvsp[-2].p),(yyvsp[0].p));}
#line 2591 "y.tab.c"
    break;

  case 86: /* lcm_list: exp COMMA exp  */
#line 254 "calc.y"
                               {(yyval.p)=lcm((yyvsp[-2].p),(yyvsp[0].p));}
#line 2597 "y.tab.c"
    break;

  case 87: /* lcm_list: lcm_list COMMA exp  */
#line 255 "calc.y"
                               {(yyval.p)= lcm((yyvsp[-2].p),(yyvsp[0].p));}
#line 2603 "y.tab.c"
    break;


#line 2607 "y.tab.c"

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

#line 256 "calc.y"



/* extern FILE *yyin; */
void main()
{
       printf("\n\033[1;37m                 WELCOME TO YOUR SCIENFIFIC CALCULATOR         \033[0m\n");
       printf("\n");
       printf("\nAccessible Operators:\n + - * / \n < > <= >= == =! \n | && ^^ ! | & ++ -- << >>\n sqrt() abs() log() ln() ^ %\n floor() ceil() round() rcpl()\n fact() pct() pert() comb()\n hcf() lcm() max() min() avg()\n sin() cos() tan() cosec() sec() cot()\n asin() acos() atan() acosec() asec() acot()\n sinh() cosh() tanh() cosechh() sech() coth()\n bi_dec() dec_bi() dec_oct() oct_dec() cel_fah() fah_cel()\n mode quit\n");
       printf("\n");                     
       do
       {   
		char ch;
                flag=0,count=0;
	        printf("\nEnter a valid erpression:");
                printf("                                             mode = %d\n",m);  
                yyparse();

                if(flag==-1){
                   flag=0;
                   yyparse();
                }
                 	
       }while(1);

}

void yyerror(char *s)			
{      
       	   printf("\033[0;31m");
           printf("%s\n\033[0m",s);
           flag=1;
       
}



