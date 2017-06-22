/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yasin.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <math.h>
	#include <string.h>
	#include <stdlib.h>
	#include "compiler.c"

	int yylex(void);				
	void yyerror(const char *);		

#line 77 "yasin.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yasin.tab.h".  */
#ifndef YY_YY_YASIN_TAB_H_INCLUDED
# define YY_YY_YASIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    STR = 259,
    NUM = 260,
    FLT = 261,
    BOOL_LITERAL = 262,
    PRINT = 263,
    PONTO = 264,
    VIRGULA = 265,
    DOISPONTOS = 266,
    DEF = 267,
    IF = 268,
    THEN = 269,
    ELSE = 270,
    WHILE = 271,
    DO = 272,
    RETURN = 273,
    BREAK = 274,
    NEXT = 275,
    INT = 276,
    FLOAT = 277,
    BOOL = 278,
    VOID = 279,
    STRING = 280,
    INPUT = 281,
    OUTPUT = 282,
    PARE = 283,
    PARD = 284,
    CHAVETAE = 285,
    CHAVETAD = 286,
    PARECTE = 287,
    PARECTD = 288,
    PONTOVIRGULA = 289,
    SOMA = 290,
    SUBTRACAO = 291,
    MULTIPLICACAO = 292,
    DIVISAO = 293,
    MOD = 294,
    OR = 295,
    AND = 296,
    NOT = 297,
    POTENCIA = 298,
    IGUAL = 299,
    IGUALIGUAL = 300,
    MENOR = 301,
    MAIOR = 302,
    MENORIGUAL = 303,
    MAIORIGUAL = 304,
    DIFERENTE = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "yasin.y" /* yacc.c:355  */

	int val;
    double flt;
    char *str;
    char *id;
    int boolean;
    struct StmList *stmList;
    struct StmList *stmList1;
    struct StmList *stmList2;
    struct Decl *decl;
    struct Func *func;
    struct IdList *idList;
    struct ArgLista *argLista;
    struct Tipo *tipo;
    struct Operacao *operacao;
    struct Expressao *expressao;
    struct Expressao *expressao1;
    struct Expressao *expressao2;

#line 188 "yasin.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YASIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "yasin.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  104

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    75,    76,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    94,
      95,    96,    97,   100,   101,   102,   103,   106,   107,   108,
     109,   110,   113,   114,   115,   118,   119,   120,   121,   122,
     123,   124,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STR", "NUM", "FLT",
  "BOOL_LITERAL", "PRINT", "PONTO", "VIRGULA", "DOISPONTOS", "DEF", "IF",
  "THEN", "ELSE", "WHILE", "DO", "RETURN", "BREAK", "NEXT", "INT", "FLOAT",
  "BOOL", "VOID", "STRING", "INPUT", "OUTPUT", "PARE", "PARD", "CHAVETAE",
  "CHAVETAD", "PARECTE", "PARECTD", "PONTOVIRGULA", "SOMA", "SUBTRACAO",
  "MULTIPLICACAO", "DIVISAO", "MOD", "OR", "AND", "NOT", "POTENCIA",
  "IGUAL", "IGUALIGUAL", "MENOR", "MAIOR", "MENORIGUAL", "MAIORIGUAL",
  "DIFERENTE", "$accept", "program", "stmlist", "decl", "func", "idlist",
  "tipo", "arglista", "expressao", "operacao", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -34

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-34)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     102,    17,     5,   -19,     9,    47,    47,    47,   -34,   -34,
     -15,    -9,    22,   -34,   -14,   -34,    13,     5,    20,    47,
      16,   -34,    47,    51,    27,   -34,   -34,   -34,   -34,   -34,
      -7,    54,   111,    55,    57,   -34,   102,    51,   -34,    46,
      53,    36,   111,    95,   -34,   -34,   -34,   -34,   -34,   -34,
      38,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,    47,    39,    41,
      49,   -34,    35,    51,    51,    69,   -34,   102,   111,   102,
     -34,   -34,    47,    52,    73,    51,    56,    75,   111,   102,
       5,    78,    70,   -34,    80,   -34,   102,    79,   -34,    81,
     102,   -34,    82,   -34
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    23,    25,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     2,     0,     8,     0,     0,     0,     0,
      23,    26,     0,     0,    35,    36,    40,    39,    38,    41,
       0,     0,    13,     0,     0,     1,     3,     0,    24,    21,
      34,     0,     7,     0,    27,    28,    30,    31,    29,    18,
       0,    42,    43,    45,    44,    46,    56,    55,    57,    47,
      48,    49,    51,    52,    53,    54,    50,     0,     0,     0,
       0,     4,     5,     0,     0,    22,    12,     0,    37,     0,
      14,    15,     0,     0,    32,     0,     0,     0,     6,     0,
       0,     0,     9,    11,     0,    33,     0,     0,    20,     0,
       0,    19,     0,    10
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -34,   -34,   -33,   -34,    -1,    -2,   -26,    -6,    -5,   -34
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    16,    49,    41,    30,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      21,    31,    32,    71,    29,    29,    29,    50,    20,    22,
       2,    72,    23,    33,    42,    38,    40,    43,    29,    34,
      36,    29,    35,    20,    37,     2,    17,    17,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    86,    18,    87,    83,    84,    39,
      24,    25,    26,    27,    28,    18,    94,    73,    69,    91,
      70,    19,    78,    99,    74,    75,    29,   102,    77,    79,
      80,    68,    44,    45,    46,    47,    48,    88,    81,    82,
      85,    29,    89,    90,    95,    97,     0,    92,    40,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     1,    93,     2,    96,   100,
       3,    98,   101,   103,     4,     5,     0,     0,     6,     0,
       7,     8,     9,     0,    76,     0,     0,     0,    10,    11,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

static const yytype_int8 yycheck[] =
{
       2,     6,     7,    36,     5,     6,     7,    14,     3,    28,
       5,    37,     3,    28,    19,    17,    18,    22,    19,    28,
      34,    22,     0,     3,    11,     5,    10,    10,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    77,    28,    79,    73,    74,    29,
       3,     4,     5,     6,     7,    28,    89,    11,     3,    85,
       3,    44,    67,    96,    11,    29,    67,   100,    30,    30,
      29,    17,    21,    22,    23,    24,    25,    82,    29,    44,
      11,    82,    30,    10,    90,    15,    -1,    31,    90,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     3,    31,     5,    30,    30,
       8,    31,    31,    31,    12,    13,    -1,    -1,    16,    -1,
      18,    19,    20,    -1,    29,    -1,    -1,    -1,    26,    27,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     8,    12,    13,    16,    18,    19,    20,
      26,    27,    52,    53,    54,    55,    56,    10,    28,    44,
       3,    56,    28,     3,     3,     4,     5,     6,     7,    55,
      59,    59,    59,    28,    28,     0,    34,    11,    56,    29,
      56,    58,    59,    59,    21,    22,    23,    24,    25,    57,
      14,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    60,    17,     3,
       3,    53,    57,    11,    11,    29,    29,    30,    59,    30,
      29,    29,    44,    57,    57,    11,    53,    53,    59,    30,
      10,    57,    31,    31,    53,    58,    30,    15,    31,    53,
      30,    31,    53,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    55,
      55,    55,    55,    56,    56,    56,    56,    57,    57,    57,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     3,     5,     3,     1,     6,
      10,     6,     4,     2,     4,     4,     1,     1,     3,     9,
       8,     3,     4,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     3,     5,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 72 "yasin.y" /* yacc.c:1646  */
    {root((yyvsp[0].stmlist));}
#line 1364 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "yasin.y" /* yacc.c:1646  */
    {(yyval.stmlist) = newStmList(decl_pontovirg,(yyvsp[-1].decl),NULL);}
#line 1370 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 76 "yasin.y" /* yacc.c:1646  */
    {(yyval.stmlist) = newStmList(decl_pontovirg_stmList,(yyvsp[-2].decl),(yyvsp[0].stmlist));}
#line 1376 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 78 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(idlist_dpontos_tipo,(yyvsp[-2].idlist),(yyvsp[0].tipo),NULL,NULL,NULL,NULL,NULL);}
#line 1382 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 79 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(idlist_dpontos_tipo_igual_exp,(yyvsp[-4].idlist),(yyvsp[-2].tipo),(yyvsp[0].expressao),NULL,NULL,NULL,NULL);}
#line 1388 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 80 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(id_igual_exp,NULL,NULL,(yyvsp[0].expressao),NULL,NULL,NULL,(yyvsp[-2].id));}
#line 1394 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 81 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(funcao,NULL,NULL,NULL,NULL,NULL,(yyvsp[0].func),NULL);}
#line 1400 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 82 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(if_exp_then_stmList,NULL,NULL,NULL,(yyvsp[-4].expressao),(yyvsp[-1].stmlist),NULL,NULL);}
#line 1406 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 83 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(if_exp_then_stmList_else_stmList,NULL,NULL,NULL,(yyvsp[-8].expressao),(yyvsp[-5].stmlist),(yyvsp[-1].stmlist),NULL);}
#line 1412 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 84 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(while_exp_do_stmList,NULL,NULL,(yyvsp[-4].expressao),(yyvsp[-1].stmlist),NULL,NULL,NULL);}
#line 1418 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 85 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(print_,NULL,NULL,(yyvsp[-1].expressao),NULL,NULL,NULL,NULL);}
#line 1424 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 86 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(return_,NULL,NULL,(yyvsp[0].expressao),NULL,NULL,NULL,NULL);}
#line 1430 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(input_id,NULL,NULL,NULL,NULL,NULL,NULL,(yyvsp[-1].id));}
#line 1436 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 88 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(output_id,NULL,NULL,NULL,NULL,NULL,NULL,(yyvsp[-1].id));}
#line 1442 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 89 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(break_,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
#line 1448 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 90 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(next_,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
#line 1454 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 91 "yasin.y" /* yacc.c:1646  */
    {(yyval.decl) = newDecl(def_id_type,NULL,(yyvsp[0].tipo),NULL,NULL,NULL,NULL,(yyvsp[-1].id));}
#line 1460 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 94 "yasin.y" /* yacc.c:1646  */
    {(yyval.func) = newFunc(id_arglist_dpontos_tipo_stmList,(yyvsp[-8].id),(yyvsp[-3].tipo),(yyvsp[-6].arglista),(yyvsp[-1].stmlist));}
#line 1466 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 95 "yasin.y" /* yacc.c:1646  */
    {(yyval.func) = newFunc(id_pars_dpontos_tipo_stmList,(yyvsp[-7].id),(yyvsp[-3].tipo),NULL,(yyvsp[-1].stmlist));}
#line 1472 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 96 "yasin.y" /* yacc.c:1646  */
    {(yyval.func) = newFunc(id_pars,(yyvsp[-2].id),NULL,NULL,NULL);}
#line 1478 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 97 "yasin.y" /* yacc.c:1646  */
    {(yyval.func) = newFunc(id_arglist,(yyvsp[-3].id),NULL,(yyvsp[-1].arglista),NULL);}
#line 1484 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 100 "yasin.y" /* yacc.c:1646  */
    {(yyval.idlist) = newIdList(id_,(yyvsp[0].id),NULL,NULL);}
#line 1490 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 101 "yasin.y" /* yacc.c:1646  */
    {(yyval.idlist) = newIdList(id_virg_idlist,(yyvsp[-2].id),NULL,(yyvsp[0].idlist));}
#line 1496 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 102 "yasin.y" /* yacc.c:1646  */
    {(yyval.idlist) = newIdList(num_,NULL,(yyvsp[0].val),NULL);}
#line 1502 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 103 "yasin.y" /* yacc.c:1646  */
    {(yyval.idlist) = newIdList(num_idlist,NULL,(yyvsp[-1].val),(yyvsp[0].idlist));}
#line 1508 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 106 "yasin.y" /* yacc.c:1646  */
    {(yyval.tipo) = newTipo(int_);}
#line 1514 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 107 "yasin.y" /* yacc.c:1646  */
    {(yyval.tipo) = newTipo(float_);}
#line 1520 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 108 "yasin.y" /* yacc.c:1646  */
    {(yyval.tipo) = newTipo(string_);}
#line 1526 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 109 "yasin.y" /* yacc.c:1646  */
    {(yyval.tipo) = newTipo(bool_);}
#line 1532 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 110 "yasin.y" /* yacc.c:1646  */
    {(yyval.tipo) = newTipo(void_);}
#line 1538 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 113 "yasin.y" /* yacc.c:1646  */
    {(yyval.arglista) = newArgLista(idlist_dpontos_tipo_argL,(yyvsp[-2].idlist),(yyvsp[0].tipo),NULL);}
#line 1544 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 114 "yasin.y" /* yacc.c:1646  */
    {(yyval.arglista) = newArgLista(idlist_dponstos_tipo_virg_args,(yyvsp[-4].idlist),(yyvsp[-2].tipo),(yyvsp[0].arglista));}
#line 1550 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 115 "yasin.y" /* yacc.c:1646  */
    {(yyval.arglista) = newArgLista(idlist_,(yyvsp[0].idlist),NULL,NULL);}
#line 1556 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 118 "yasin.y" /* yacc.c:1646  */
    {(yyval.expressao) = newExpressao(id_exp,(yyvsp[0].id),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
#line 1562 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 119 "yasin.y" /* yacc.c:1646  */
    {(yyval.expressao) = newExpressao(str_,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,(yyvsp[0].str));}
#line 1568 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 120 "yasin.y" /* yacc.c:1646  */
    {(yyval.expressao) = newExpressao(exp_op_exp,NULL,(yyvsp[-2].expressao),(yyvsp[0].expressao),(yyvsp[-1].operacao),NULL,NULL,NULL,NULL,NULL);}
#line 1574 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 121 "yasin.y" /* yacc.c:1646  */
    {(yyval.expressao) = newExpressao(bool_lit,NULL,NULL,NULL,NULL,NULL,NULL,NULL,(yyvsp[0].bool),NULL);}
#line 1580 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 122 "yasin.y" /* yacc.c:1646  */
    {(yyval.expressao) = newExpressao(flt_,(yyvsp[0].flt),NULL,NULL,NULL,NULL,NULL,(yyvsp[0].flt),NULL,NULL);}
#line 1586 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 123 "yasin.y" /* yacc.c:1646  */
    {(yyval.expressao) = newExpressao(num_exp,(yyvsp[0].val),NULL,NULL,NULL,(yyvsp[0].val),NULL,NULL,NULL,NULL);}
#line 1592 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 124 "yasin.y" /* yacc.c:1646  */
    {(yyval.expressao) = newExpressao(func_,(yyvsp[0].func),NULL,NULL,NULL,NULL,(yyvsp[0].func),NULL,NULL,NULL);}
#line 1598 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 126 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(soma_);}
#line 1604 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 127 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(subtracao_);}
#line 1610 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 128 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(divisao_);}
#line 1616 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 129 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(multiplicacao_);}
#line 1622 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 130 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(mod_);}
#line 1628 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 131 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(potencia_);}
#line 1634 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 132 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(igual_);}
#line 1640 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 133 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(igual_igual);}
#line 1646 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 134 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(diferente_);}
#line 1652 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 135 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(menor_);}
#line 1658 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 136 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(maior_);}
#line 1664 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 137 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(menorIgual_);}
#line 1670 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 138 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(maiorIgual_);}
#line 1676 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 139 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(and_);}
#line 1682 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 140 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(or_);}
#line 1688 "yasin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 141 "yasin.y" /* yacc.c:1646  */
    {(yyval.operacao) = newOperacao(not_);}
#line 1694 "yasin.tab.c" /* yacc.c:1646  */
    break;


#line 1698 "yasin.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 144 "yasin.y" /* yacc.c:1906  */


void yyerror(const char *msg){
	fprintf(stderr, "error: %s\n", msg);
}

int main(){
	return yyparse();
}