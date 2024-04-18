/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintatico.y"

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <regex>
using namespace std;


int yylex(void);
int yyparse(void);
void yyerror(const char *);
extern int yylineno;  

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_BLUE    "\x1b[34m" 

/* cada letra do alfabeto é uma variável */


double variables[26];
extern char * yytext;   
extern string classeAtual;
extern string propriedadeAtual;
extern string tipoDadoAtual;
extern string intervaloAtual;
extern string numAtual;
extern string quantificadorAtual;
extern string nomeClasseAtual;
char isPropriedade[10];
int precedencia = 0;
bool PrecedenciaFechamento = false;
int qntClasses = 0;
int qntDefinida = 0;
int qntPrimitiva = 0;
int qntEnumerada = 0;
int qntCoberta = 0;
int qntAxiomaDeFechamento = 0;
int qntAninhada = 0;
int qntEspecial = 0;
char sobrecarregamento[50];
bool semanticError = false;
bool aninhada = false;
bool fechamento =false;
int linhaAtual = 0;
int erros = 0;


void saida(string saida){
	
	linhaAtual = yylineno;
	cout << saida;
 	if(aninhada == true){
		cout << "com aninhamento "; 
		aninhada =false;
	}

	if(fechamento == true){
		cout << "com axioma de fechamento ";
		fechamento = false;
	}
	cout << "\n|-----------------------------------------------------------------|";
	cout << endl;
}

string intervalo(string intervalo){
	
	const char * op = intervalo.c_str();
	
	if(strcmp(op, "<") == 0){
		return "menor que ";
	}
	else if(strcmp(op, ">") == 0 ){
		return "maior que ";
	}
	else if(strcmp(op, "<=") == 0){
		return "menor ou igual que ";
	}
	else if(strcmp(op,">=") == 0){
		return "maior ou igual que ";
	}
	else if(strcmp(op, "=") == 0){
		return "igual que ";
	}
	else{
		return "diferente que ";
	}
	return " ";
}

string operador(string operador){
	const char * op = operador.c_str();
	if(strcmp(op, "min") == 0){
		return "no minimo ";
	}
	else if(strcmp(op, "max") == 0){
		return "no maximo";
	}
	else if(strcmp(op,"exactly") == 0){
		return  "exatamente";
	}
	return " ";
}

#line 179 "sintatico.tab.c"

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

#include "sintatico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLASSE = 3,                     /* CLASSE  */
  YYSYMBOL_CLASSE_RESERVADA = 4,           /* CLASSE_RESERVADA  */
  YYSYMBOL_PROPRIEDADE = 5,                /* PROPRIEDADE  */
  YYSYMBOL_PROPRIEDADE_HAS = 6,            /* PROPRIEDADE_HAS  */
  YYSYMBOL_PROPRIEDADE_ISOF = 7,           /* PROPRIEDADE_ISOF  */
  YYSYMBOL_TIPODADO = 8,                   /* TIPODADO  */
  YYSYMBOL_NUM = 9,                        /* NUM  */
  YYSYMBOL_INDIVIDUO = 10,                 /* INDIVIDUO  */
  YYSYMBOL_ONLY_RESERVADA = 11,            /* ONLY_RESERVADA  */
  YYSYMBOL_OR_RESERVADA = 12,              /* OR_RESERVADA  */
  YYSYMBOL_SOME_RESERVADA = 13,            /* SOME_RESERVADA  */
  YYSYMBOL_ALL_RESERVADA = 14,             /* ALL_RESERVADA  */
  YYSYMBOL_VALUE_RESERVADA = 15,           /* VALUE_RESERVADA  */
  YYSYMBOL_MIN_RESERVADA = 16,             /* MIN_RESERVADA  */
  YYSYMBOL_MAX_RESERVADA = 17,             /* MAX_RESERVADA  */
  YYSYMBOL_EXACTLY_RESERVADA = 18,         /* EXACTLY_RESERVADA  */
  YYSYMBOL_THAT_RESERVADA = 19,            /* THAT_RESERVADA  */
  YYSYMBOL_NOT_RESERVADA = 20,             /* NOT_RESERVADA  */
  YYSYMBOL_AND_RESERVADA = 21,             /* AND_RESERVADA  */
  YYSYMBOL_INDIVIDUALS_RESERVADA = 22,     /* INDIVIDUALS_RESERVADA  */
  YYSYMBOL_EQUIVALENT_RESERVADA = 23,      /* EQUIVALENT_RESERVADA  */
  YYSYMBOL_SUBCLASSOF_RESERVADA = 24,      /* SUBCLASSOF_RESERVADA  */
  YYSYMBOL_DISJOINTCLASSES_RESERVADA = 25, /* DISJOINTCLASSES_RESERVADA  */
  YYSYMBOL_ABREPAR = 26,                   /* ABREPAR  */
  YYSYMBOL_FECHAPAR = 27,                  /* FECHAPAR  */
  YYSYMBOL_ABRECHAVE = 28,                 /* ABRECHAVE  */
  YYSYMBOL_FECHACHAVE = 29,                /* FECHACHAVE  */
  YYSYMBOL_ABRECOLCHETE = 30,              /* ABRECOLCHETE  */
  YYSYMBOL_FECHACOLCHETE = 31,             /* FECHACOLCHETE  */
  YYSYMBOL_VIRGULA = 32,                   /* VIRGULA  */
  YYSYMBOL_op = 33,                        /* op  */
  YYSYMBOL_VAR = 34,                       /* VAR  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_classe = 36,                    /* classe  */
  YYSYMBOL_classe_primitiva = 37,          /* classe_primitiva  */
  YYSYMBOL_classe_coberta = 38,            /* classe_coberta  */
  YYSYMBOL_coberta = 39,                   /* coberta  */
  YYSYMBOL_coberta_lista = 40,             /* coberta_lista  */
  YYSYMBOL_classe_enumerada = 41,          /* classe_enumerada  */
  YYSYMBOL_enumerada = 42,                 /* enumerada  */
  YYSYMBOL_enumerada_lista = 43,           /* enumerada_lista  */
  YYSYMBOL_classe_definida = 44,           /* classe_definida  */
  YYSYMBOL_classe_especial = 45,           /* classe_especial  */
  YYSYMBOL_classe_id = 46,                 /* classe_id  */
  YYSYMBOL_47_1 = 47,                      /* $@1  */
  YYSYMBOL_subclassof = 48,                /* subclassof  */
  YYSYMBOL_49_2 = 49,                      /* $@2  */
  YYSYMBOL_equivalentto = 50,              /* equivalentto  */
  YYSYMBOL_definicao = 51,                 /* definicao  */
  YYSYMBOL_52_3 = 52,                      /* $@3  */
  YYSYMBOL_53_4 = 53,                      /* $@4  */
  YYSYMBOL_54_5 = 54,                      /* $@5  */
  YYSYMBOL_55_6 = 55,                      /* $@6  */
  YYSYMBOL_56_7 = 56,                      /* $@7  */
  YYSYMBOL_and = 57,                       /* and  */
  YYSYMBOL_parenteses = 58,                /* parenteses  */
  YYSYMBOL_conteudo = 59,                  /* conteudo  */
  YYSYMBOL_fechamento = 60,                /* fechamento  */
  YYSYMBOL_reservada = 61,                 /* reservada  */
  YYSYMBOL_disjointclasses = 62,           /* disjointclasses  */
  YYSYMBOL_disjointclasses_lista = 63,     /* disjointclasses_lista  */
  YYSYMBOL_individuos = 64,                /* individuos  */
  YYSYMBOL_individuos_lista = 65,          /* individuos_lista  */
  YYSYMBOL_propriedade = 66,               /* propriedade  */
  YYSYMBOL_quantificador = 67,             /* quantificador  */
  YYSYMBOL_virgula = 68                    /* virgula  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   132

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  117

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   124,   124,   125,   126,   127,   128,   129,   130,   134,
     136,   137,   139,   141,   142,   144,   146,   148,   149,   151,
     153,   154,   156,   156,   158,   158,   160,   162,   163,   163,
     163,   164,   164,   164,   165,   166,   167,   168,   169,   170,
     171,   171,   172,   173,   175,   176,   176,   178,   180,   181,
     185,   186,   189,   190,   191,   193,   194,   196,   197,   199,
     200,   202,   203,   205,   206,   207,   208,   210,   211,   212,
     214,   215
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
  "\"end of file\"", "error", "\"invalid token\"", "CLASSE",
  "CLASSE_RESERVADA", "PROPRIEDADE", "PROPRIEDADE_HAS", "PROPRIEDADE_ISOF",
  "TIPODADO", "NUM", "INDIVIDUO", "ONLY_RESERVADA", "OR_RESERVADA",
  "SOME_RESERVADA", "ALL_RESERVADA", "VALUE_RESERVADA", "MIN_RESERVADA",
  "MAX_RESERVADA", "EXACTLY_RESERVADA", "THAT_RESERVADA", "NOT_RESERVADA",
  "AND_RESERVADA", "INDIVIDUALS_RESERVADA", "EQUIVALENT_RESERVADA",
  "SUBCLASSOF_RESERVADA", "DISJOINTCLASSES_RESERVADA", "ABREPAR",
  "FECHAPAR", "ABRECHAVE", "FECHACHAVE", "ABRECOLCHETE", "FECHACOLCHETE",
  "VIRGULA", "op", "VAR", "$accept", "classe", "classe_primitiva",
  "classe_coberta", "coberta", "coberta_lista", "classe_enumerada",
  "enumerada", "enumerada_lista", "classe_definida", "classe_especial",
  "classe_id", "$@1", "subclassof", "$@2", "equivalentto", "definicao",
  "$@3", "$@4", "$@5", "$@6", "$@7", "and", "parenteses", "conteudo",
  "fechamento", "reservada", "disjointclasses", "disjointclasses_lista",
  "individuos", "individuos_lista", "propriedade", "quantificador",
  "virgula", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-72)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      14,    14,     5,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
      29,    13,    44,   -72,     8,   -14,   -72,    -1,    51,   -72,
     -72,    34,    31,   -72,   -72,   101,    54,   -72,   -72,    79,
     -72,   103,   101,    28,   -72,    52,   -72,   -14,    -1,   -14,
     106,   101,   -72,   -72,   101,   -72,    62,   -72,    37,   103,
      41,    48,   -72,   -72,     7,   -72,   -72,   -72,   -72,   -72,
     -72,    71,    72,   -72,     8,   -72,    55,   -72,   -14,   -72,
     -72,   -72,    59,    16,   -72,   101,   -72,     1,    54,   -72,
     -72,   -72,    60,    86,    85,     4,   -72,    87,   -72,   -72,
     101,   -72,   -72,    65,   -72,   -72,    67,    67,   -72,    59,
      92,    67,    67,   101,   101,   -72,    84,   101,   101,   -72,
     -72,   -72,   -72,   -72,    67,   101,   -72
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    22,     7,     1,     2,     3,     4,     5,     6,
      56,     0,    43,    24,     0,    10,    15,    56,    56,    20,
      23,    71,    63,    65,    64,    43,     0,    12,    26,    43,
      36,     0,    43,    58,    55,     0,    11,    60,    56,    60,
      43,    43,    70,    34,    43,    66,    46,    48,     0,     0,
      18,     0,    37,    35,     0,    52,    54,    53,    67,    68,
      69,    28,     0,    25,     0,    62,    59,     9,    60,    19,
      13,    42,    46,    43,    27,    43,    47,    28,     0,    16,
      50,    51,     0,     0,     0,     0,    57,     0,    21,    45,
      43,    49,    17,     0,    29,    32,    71,    71,    61,    46,
       0,    71,    71,    43,    43,    44,     0,    43,    43,    38,
      39,    40,    30,    33,    71,    43,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   109,   -72,   -72,   -72,    82,   -72,   -72,    24,   -72,
     -72,   -72,   -72,   105,   -72,   -72,   -12,   -72,   -72,   -72,
     -72,   -72,   -28,   -38,   -72,   -72,    75,    23,    61,   -33,
     -72,   104,   -72,   -71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     5,     6,    15,    27,     7,    16,    51,     8,
       9,    10,    11,    17,    32,    18,    52,    83,   101,    84,
     102,   114,    43,    29,    48,    30,    61,    19,    34,    36,
      66,    31,    62,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      28,    53,    90,    73,    67,     4,    69,    96,    35,    82,
      80,    33,    97,    47,    -8,     1,    81,    20,    -8,    46,
      63,    22,    23,    24,    14,   103,   104,    25,    71,    72,
     107,   108,    74,    25,   -14,    88,    45,    41,   -14,    91,
      37,    39,    25,   115,    89,    53,    40,    21,    42,    22,
      23,    24,    12,    13,    14,    41,   -14,    50,   -46,   -46,
      64,    68,    65,    71,    76,   -71,    42,   -71,   -71,   -71,
      25,   105,    26,    78,    75,    13,    14,    79,    99,    82,
      41,    85,    46,    41,    22,    23,    24,    87,   -71,    94,
      93,   109,   110,    95,    42,   112,   113,    98,   100,    42,
      41,   106,    92,   116,    46,    25,    22,    23,    24,    21,
       3,    22,    23,    24,    54,   111,    55,    56,    57,    58,
      59,    60,    70,    38,    77,    86,     0,    25,     0,    49,
       0,     0,    25
};

static const yytype_int8 yycheck[] =
{
      12,    29,    73,    41,    37,     0,    39,     3,    22,     8,
       3,     3,     8,    25,     0,     1,    54,     4,     4,     3,
      32,     5,     6,     7,    25,    96,    97,    26,    40,    41,
     101,   102,    44,    26,     0,    68,     5,    21,     4,    77,
      17,    18,    26,   114,    72,    73,    12,     3,    32,     5,
       6,     7,    23,    24,    25,    21,    22,     3,    24,    25,
      32,    38,    10,    75,    27,     3,    32,     5,     6,     7,
      26,    99,    28,    32,    12,    24,    25,    29,    90,     8,
      21,     9,     3,    21,     5,     6,     7,    32,    26,     3,
      30,   103,   104,     8,    32,   107,   108,    10,    33,    32,
      21,     9,    78,   115,     3,    26,     5,     6,     7,     3,
       1,     5,     6,     7,    11,    31,    13,    14,    15,    16,
      17,    18,    40,    18,    49,    64,    -1,    26,    -1,    25,
      -1,    -1,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    36,    36,     0,    37,    38,    41,    44,    45,
      46,    47,    23,    24,    25,    39,    42,    48,    50,    62,
       4,     3,     5,     6,     7,    26,    28,    40,    51,    58,
      60,    66,    49,     3,    63,    22,    64,    62,    48,    62,
      12,    21,    32,    57,    68,     5,     3,    51,    59,    66,
       3,    43,    51,    57,    11,    13,    14,    15,    16,    17,
      18,    61,    67,    51,    32,    10,    65,    64,    62,    64,
      40,    51,    51,    58,    51,    12,    27,    61,    32,    29,
       3,    58,     8,    52,    54,     9,    63,    32,    64,    57,
      68,    58,    43,    30,     3,     8,     3,     8,    10,    51,
      33,    53,    55,    68,    68,    57,     9,    68,    68,    51,
      51,    31,    51,    51,    56,    68,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    36,    36,    36,    36,    36,    37,
      38,    38,    39,    40,    40,    41,    42,    43,    43,    44,
      45,    45,    47,    46,    49,    48,    50,    51,    52,    53,
      51,    54,    55,    51,    51,    51,    51,    51,    51,    51,
      56,    51,    51,    51,    57,    57,    57,    58,    59,    59,
      60,    60,    61,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    67,    67,    67,
      68,    68
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     0,     4,
       2,     3,     2,     3,     1,     2,     4,     3,     1,     4,
       2,     5,     0,     2,     0,     3,     2,     3,     0,     0,
       7,     0,     0,     7,     2,     2,     1,     2,     6,     6,
       0,    10,     3,     0,     5,     3,     0,     3,     1,     3,
       3,     3,     1,     1,     1,     2,     0,     3,     1,     2,
       0,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* classe: classe classe_primitiva  */
#line 124 "sintatico.y"
                                   { precedencia = 0;  saida("| uma classe primitiva|");   qntClasses++; qntPrimitiva++;}
#line 1323 "sintatico.tab.c"
    break;

  case 3: /* classe: classe classe_coberta  */
#line 125 "sintatico.y"
                                                 { precedencia = 0; saida("| uma classe coberta|");  qntClasses++; qntCoberta++;}
#line 1329 "sintatico.tab.c"
    break;

  case 4: /* classe: classe classe_enumerada  */
#line 126 "sintatico.y"
                                                    { precedencia = 0; saida( "| uma classe enumerada|")  ;qntClasses++; qntEnumerada++;}
#line 1335 "sintatico.tab.c"
    break;

  case 5: /* classe: classe classe_definida  */
#line 127 "sintatico.y"
                                                  { precedencia = 0; saida("| uma classe definida|");  qntClasses++; qntDefinida++;}
#line 1341 "sintatico.tab.c"
    break;

  case 6: /* classe: classe classe_especial  */
#line 128 "sintatico.y"
                                                 { precedencia = 0; saida("| uma classe especial|");  qntClasses++;qntEspecial++;}
#line 1347 "sintatico.tab.c"
    break;

  case 22: /* $@1: %empty  */
#line 156 "sintatico.y"
           {cout << "|linha " << linhaAtual << " | " << classeAtual << " | " << endl; }
#line 1353 "sintatico.tab.c"
    break;

  case 23: /* classe_id: $@1 CLASSE_RESERVADA  */
#line 156 "sintatico.y"
                                                                                                           {precedencia = 1;}
#line 1359 "sintatico.tab.c"
    break;

  case 24: /* $@2: %empty  */
#line 158 "sintatico.y"
                                   {precedencia = 3;}
#line 1365 "sintatico.tab.c"
    break;

  case 26: /* equivalentto: EQUIVALENT_RESERVADA definicao  */
#line 160 "sintatico.y"
                                                {precedencia = 2;}
#line 1371 "sintatico.tab.c"
    break;

  case 28: /* $@3: %empty  */
#line 163 "sintatico.y"
                                                {strcpy(isPropriedade, yytext); }
#line 1377 "sintatico.tab.c"
    break;

  case 29: /* $@4: %empty  */
#line 163 "sintatico.y"
                                                                                         {  cout << ANSI_COLOR_BLUE << "|sobrecarga do tipo (object property) " << propriedadeAtual << " na linha " << yylineno << ANSI_COLOR_RESET << "|" << endl; strcpy(isPropriedade, " "); }
#line 1383 "sintatico.tab.c"
    break;

  case 31: /* $@5: %empty  */
#line 164 "sintatico.y"
                                                 {strcpy(isPropriedade, yytext); }
#line 1389 "sintatico.tab.c"
    break;

  case 32: /* $@6: %empty  */
#line 164 "sintatico.y"
                                                                                             { cout << ANSI_COLOR_BLUE << "|sobrecarga do tipo (data property) " << propriedadeAtual << " na linha " << yylineno << ANSI_COLOR_RESET << "|" << endl; strcpy(isPropriedade, " "); }
#line 1395 "sintatico.tab.c"
    break;

  case 36: /* definicao: fechamento  */
#line 167 "sintatico.y"
                                     {qntAxiomaDeFechamento++; fechamento = true; PrecedenciaFechamento = true;}
#line 1401 "sintatico.tab.c"
    break;

  case 38: /* definicao: propriedade quantificador NUM CLASSE virgula definicao  */
#line 169 "sintatico.y"
                                                                                 { cout << ANSI_COLOR_BLUE <<"|propriedade: " << propriedadeAtual << " na linha " << yylineno << " precisa ter " << operador(quantificadorAtual) << " " << numAtual << " " << nomeClasseAtual << ANSI_COLOR_RESET << "|" << endl; }
#line 1407 "sintatico.tab.c"
    break;

  case 39: /* definicao: propriedade quantificador NUM TIPODADO virgula definicao  */
#line 170 "sintatico.y"
                                                                                   { cout << ANSI_COLOR_BLUE <<"|propriedade: " << propriedadeAtual << " na linha " << yylineno << " precisa ter " << operador(quantificadorAtual) << " " << numAtual << " " << tipoDadoAtual << ANSI_COLOR_RESET << "|" << endl; }
#line 1413 "sintatico.tab.c"
    break;

  case 40: /* $@7: %empty  */
#line 171 "sintatico.y"
                                                                                           { cout << ANSI_COLOR_BLUE << "|propriedade: " << propriedadeAtual << " na linha " << yylineno << " é do tipo: " << tipoDadoAtual << " e precisa ser " << intervalo(intervaloAtual) <<  numAtual  << ANSI_COLOR_RESET << "|" << endl;}
#line 1419 "sintatico.tab.c"
    break;

  case 49: /* conteudo: propriedade reservada parenteses  */
#line 181 "sintatico.y"
                                                          { qntAninhada++; aninhada = true;}
#line 1425 "sintatico.tab.c"
    break;

  case 53: /* reservada: VALUE_RESERVADA  */
#line 190 "sintatico.y"
                                          {strcpy(isPropriedade, yytext); }
#line 1431 "sintatico.tab.c"
    break;

  case 54: /* reservada: ALL_RESERVADA  */
#line 191 "sintatico.y"
                                        {strcpy(isPropriedade, yytext); }
#line 1437 "sintatico.tab.c"
    break;

  case 55: /* disjointclasses: DISJOINTCLASSES_RESERVADA disjointclasses_lista  */
#line 193 "sintatico.y"
                                                                  {precedencia = 4;}
#line 1443 "sintatico.tab.c"
    break;

  case 59: /* individuos: INDIVIDUALS_RESERVADA individuos_lista  */
#line 199 "sintatico.y"
                                                      {precedencia = 0;}
#line 1449 "sintatico.tab.c"
    break;


#line 1453 "sintatico.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 218 "sintatico.y"


extern FILE * yyin;  
int main(int argc, char ** argv)
{
	
    if (argc > 1)
    {
        FILE * file;
        file = fopen(argv[1], "r");
        if (!file)
        {
            std::cout << "Arquivo " << argv[1] << " não encontrado!\n";
            exit(1);
        }
        yyin = file;

	}
	cout << "\nRealizando analise semantica...\n\n";
	 yyparse();
	cout << "\nCONTAGEM DE CLASSES E ERROS\n";
	cout << "\n|-----------------------------------------------------------------|";
	cout << "\n|Quantidade de classes| " << qntClasses << "\n"; 
	cout << "|-----------------------------------------------------------------|";
	cout << "\n|Quantidade de classes primitivas| " << qntPrimitiva << "\n";
	cout << "|-----------------------------------------------------------------|";
	cout << "\n|Quantidade de classes definidas| " << qntDefinida << "\n";
	cout << "|-----------------------------------------------------------------|";
	cout << "\n|Quantidade de classes enumeradas| " << qntEnumerada << "\n";
	cout << "|-----------------------------------------------------------------|";
	cout << "\n|Quantidade de classes cobertas| " << qntCoberta << "\n";
	cout << "|-----------------------------------------------------------------|";
	cout << "\n|Quantidade de axiomas de fechamento| " << qntAxiomaDeFechamento << "\n";
	cout << "|-----------------------------------------------------------------|"; 
	cout << "\n|Quantidade de aninhadas| " << qntAninhada << "\n"; 
	cout << "|-----------------------------------------------------------------|";
	cout << "\n|Quantidade de especiais| " << qntEspecial << "\n";   
	cout << "|-----------------------------------------------------------------|";
	cout << "\n|Quantidade de erros|" << erros << "\n";  
	cout << "|-----------------------------------------------------------------|\n";
}

void syntax(const char *s){
	if(strcmp(isPropriedade,"some") == 0 ||strcmp(isPropriedade,"value") == 0 || strcmp(isPropriedade,"all") == 0 ){
		cout << ANSI_COLOR_YELLOW  << "|linha " << yylineno << ": " << classeAtual << "  Erro( semantic error ): motivo: ser classe ou tipo de dado depois do "<< isPropriedade <<   "(linha " << yylineno << ")";
		cout << ANSI_COLOR_RESET << "\n|-----------------------------------------------------------------|\n";
		strcpy(isPropriedade, " ");
	}else{
	cout << ANSI_COLOR_RED  << "|linha " << yylineno << ": " << classeAtual << "  Erro (" << s << "): motivo: \"" << yytext << "\" (linha " << yylineno << ")";
	cout << ANSI_COLOR_RESET << "\n|-----------------------------------------------------------------|\n";
	}
}

void yyerror(const char * s)
{
	erros++;
	if(PrecedenciaFechamento){
		PrecedenciaFechamento = false;
		regex propriedade("[a-z][A-Za-z]*");
			if(regex_match(yytext,propriedade)){
				cout << ANSI_COLOR_YELLOW << "|linha " << yylineno << ": " << classeAtual << "  Erro( semantic error ): motivo: axiomas de fechamento só podem aparecer depois de declarações existenciais de propriedades" <<   "(linha " << yylineno << ")";
				cout << ANSI_COLOR_RESET << "\n|-----------------------------------------------------------------|\n";
			}
			else{
				syntax(s);
			}
	}
	else{
		switch (precedencia){
				case 0:
				
					if(strcmp(yytext,"EquivalentTo:") == 0 || strcmp(yytext,"SubClassOf:") == 0 || strcmp(yytext,"DisjointClasses:") == 0 || strcmp(yytext,"Individuals:") == 0){
						cout << ANSI_COLOR_YELLOW  << "|linha " << yylineno << ": " << classeAtual << "  Erro( semantic error ): motivo: deveria ser class: em vez de "<< yytext <<   "(linha " << yylineno << ")";
						cout << ANSI_COLOR_RESET << "\n|-----------------------------------------------------------------|\n";
					}
					else{
						syntax(s);
					}
					break;
				case 1:
				
					if(strcmp(yytext,"Class:") == 0 || strcmp(yytext,"SubClassOf:") == 0 || strcmp(yytext,"DisjointClasses:") == 0 || strcmp(yytext,"Individuals:") == 0){
						cout << ANSI_COLOR_YELLOW   << "|linha " << yylineno << ": " << classeAtual << "  Erro( semantic error ): motivo: deveria ser EquivalentTo: em vez de "<< yytext <<   "(linha " << yylineno << ")";
						cout << ANSI_COLOR_RESET << "\n|-----------------------------------------------------------------|\n";
					}
					else{
						syntax(s);
					}
					break;
				case 2:
				
					if(strcmp(yytext,"Class:") == 0 || strcmp(yytext,"EquivalentTo:") == 0 || strcmp(yytext,"DisjointClasses:") == 0 || strcmp(yytext,"Individuals:") == 0){
							cout << ANSI_COLOR_YELLOW   << "|linha " << yylineno << ": " << classeAtual << "  Erro( semantic error ): motivo: deveria ser SubClassOf: em vez de "<< yytext <<   "(linha " << yylineno << ")";
							cout << ANSI_COLOR_RESET << "\n|-----------------------------------------------------------------|\n";
						}
						else{
							syntax(s);
						}
						break;
				case 3:
					if(strcmp(yytext,"Class:") == 0 || strcmp(yytext,"EquivalentTo:") == 0 || strcmp(yytext,"SubClassOf:") == 0 || strcmp(yytext,"Individuals:") == 0){
						cout << ANSI_COLOR_YELLOW   << "|linha " << yylineno << ": " << classeAtual << "  Erro( semantic error ): motivo: deveria ser DisjointClasses: em vez de "<< yytext <<   "(linha " << yylineno << ")";
						cout << ANSI_COLOR_RESET << "\n|-----------------------------------------------------------------|\n";
					}
					else{
						syntax(s);
					}
					break;
				case 4:
				
					if(strcmp(yytext,"Class:") == 0 || strcmp(yytext,"EquivalentTo:") == 0 || strcmp(yytext,"SubClassOf:") == 0 || strcmp(yytext,"DisjointClasses:") == 0){
						cout << ANSI_COLOR_YELLOW   << "|linha " << yylineno << ": " << classeAtual << "  Erro( semantic error ): motivo: deveria ser Individuals: em vez de "<< yytext <<   "(linha " << yylineno << ")";
						cout << ANSI_COLOR_RESET << "\n|-----------------------------------------------------------------|\n";
					}
					else{
						syntax(s);
					}
					break;
			
		}
	}
	
	

}