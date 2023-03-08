
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1707025.y"

   #include <stdio.h>
   #include <stdlib.h>
   #include <math.h>
   extern FILE *yyin;
   int yylex(void);
   void yyerror(char *);
   int sym[26],store[26];


/* Line 189 of yacc.c  */
#line 84 "1707025.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VOIDMAIN = 258,
     START = 259,
     END = 260,
     VARIABLE = 261,
     NUMBER = 262,
     INT = 263,
     FLOAT = 264,
     DOUBLE = 265,
     CHAR = 266,
     COMMA = 267,
     SC = 268,
     ASSIGN = 269,
     SUM = 270,
     MINUS = 271,
     MUL = 272,
     DIV = 273,
     SCAN = 274,
     LB = 275,
     RB = 276,
     OUT = 277,
     PRIME = 278,
     EVEN_ODD = 279,
     FACT = 280,
     SQRT = 281,
     POWER = 282,
     IF = 283,
     ELIF = 284,
     ELSE = 285,
     DO = 286,
     DONE = 287,
     NEQU = 288,
     EQU = 289,
     GRE = 290,
     GR = 291,
     WHILE = 292,
     LE = 293,
     LT = 294,
     SUMM = 295,
     FOR = 296,
     IR = 297,
     TO = 298,
     FIBO = 299,
     SQRE = 300,
     CUBE = 301,
     SWITCH = 302,
     COLON = 303,
     CASE = 304,
     DEF = 305,
     SUMMATION = 306,
     DIVISORS = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 178 "1707025.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   750

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    15,    18,    21,    24,
      27,    31,    33,    35,    37,    39,    43,    45,    47,    53,
      58,    64,    66,    72,    78,    84,    90,    96,   102,   120,
     141,   162,   171,   182,   191,   193,   195,   200,   207,   212,
     217,   221,   225,   229,   233,   237,   241,   245,   249,   253,
     257
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,     3,     4,    55,     5,    -1,    -1,    55,
      59,    -1,    55,    60,    -1,    55,    61,    -1,    55,    62,
      -1,    55,    63,    -1,    55,    56,    -1,    57,    58,    13,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    58,
      12,     6,    -1,     6,    -1,    13,    -1,    19,    20,     6,
      21,    13,    -1,     6,    14,    64,    13,    -1,    22,    20,
      64,    21,    13,    -1,    64,    -1,    23,    20,    64,    21,
      13,    -1,    24,    20,    64,    21,    13,    -1,    25,    20,
      64,    21,    13,    -1,    44,    20,    64,    21,    13,    -1,
      51,    20,    64,    21,    13,    -1,    52,    20,    64,    21,
      13,    -1,    28,    64,    31,    64,    13,    32,    29,    64,
      31,    64,    13,    32,    30,    31,    64,    13,    32,    -1,
      28,    64,    31,    28,    64,    31,    64,    13,    32,    30,
      31,    64,    13,    32,    32,    30,    31,    64,    13,    32,
      -1,    47,    20,    64,    21,    31,    49,    64,    48,    64,
      13,    49,    64,    48,    64,    13,    50,    48,    64,    13,
      32,    -1,    37,    64,    38,     7,    31,    64,    13,    32,
      -1,    41,    64,    42,    64,    43,    64,    31,    64,    13,
      32,    -1,    31,    64,    13,    32,    37,    64,    38,     7,
      -1,     7,    -1,     6,    -1,    26,    20,    64,    21,    -1,
      27,    20,    64,    12,    64,    21,    -1,    45,    20,    64,
      21,    -1,    46,    20,    64,    21,    -1,    64,    15,    64,
      -1,    64,    16,    64,    -1,    64,    17,    64,    -1,    64,
      18,    64,    -1,    64,    38,    64,    -1,    64,    39,    64,
      -1,    64,    36,    64,    -1,    64,    35,    64,    -1,    64,
      33,    64,    -1,    64,    34,    64,    -1,     6,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    22,    22,    25,    26,    27,    28,    29,    30,    31,
      33,    35,    36,    37,    38,    40,    50,    62,    63,    75,
      83,    89,    90,   109,   118,   131,   144,   152,   164,   172,
     183,   202,   214,   223,   241,   242,   243,   252,   255,   258,
     261,   262,   263,   264,   273,   274,   276,   277,   278,   279,
     280
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOIDMAIN", "START", "END", "VARIABLE",
  "NUMBER", "INT", "FLOAT", "DOUBLE", "CHAR", "COMMA", "SC", "ASSIGN",
  "SUM", "MINUS", "MUL", "DIV", "SCAN", "LB", "RB", "OUT", "PRIME",
  "EVEN_ODD", "FACT", "SQRT", "POWER", "IF", "ELIF", "ELSE", "DO", "DONE",
  "NEQU", "EQU", "GRE", "GR", "WHILE", "LE", "LT", "SUMM", "FOR", "IR",
  "TO", "FIBO", "SQRE", "CUBE", "SWITCH", "COLON", "CASE", "DEF",
  "SUMMATION", "DIVISORS", "$accept", "program", "cstatement",
  "cdeclaration", "type", "ID", "statement", "function", "if_else",
  "switch", "loop", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    55,    55,    55,    55,
      56,    57,    57,    57,    57,    58,    58,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    61,    61,
      62,    63,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     2,     2,     2,     2,     2,
       3,     1,     1,     1,     1,     3,     1,     1,     5,     4,
       5,     1,     5,     5,     5,     5,     5,     5,    17,    20,
      20,     8,    10,     8,     1,     1,     4,     6,     4,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,     2,    35,    34,    11,
      12,    13,    14,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     4,     5,     6,     7,     8,    21,     0,
      50,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    40,    41,    42,    43,    48,    49,    47,    46,    44,
      45,    19,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,    34,     0,     0,    38,    39,     0,     0,     0,
      15,    18,    20,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    25,     0,    26,    27,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,    29,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     5,    31,    32,    60,    33,    34,    35,    36,
      37,    99
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -30
static const yytype_int16 yypact[] =
{
       3,     7,    54,   -30,   -30,   164,   -30,   -11,   -30,   -30,
     -30,   -30,   -30,   -30,    35,    44,    56,    64,    65,    70,
      71,     1,     1,     1,     1,    72,    75,    80,    89,    90,
      92,   -30,    69,   -30,   -30,   -30,   -30,   -30,   672,     1,
     -30,    76,     1,     1,     1,     1,     1,     1,    43,   414,
     146,   697,   213,     1,     1,     1,     1,     1,     1,   -30,
       8,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,   248,    93,   439,   446,   471,   478,   503,   241,    -2,
      81,    60,     1,   510,   535,   542,   567,   574,   599,   109,
     -30,   -16,   -16,   -29,   -29,    55,    55,    55,    55,   672,
     672,   -30,   103,   104,   105,   106,   107,   -30,     1,     1,
     255,    84,    91,   202,   110,   -30,   -30,    96,   115,   116,
     -30,   -30,   -30,   -30,   -30,   -30,   606,   631,    98,     1,
       1,     1,   -30,    82,   -30,   -30,   -30,     1,   111,   704,
     282,   640,     1,   289,     1,    62,   101,     1,    -3,   102,
     665,   711,   -30,   296,     1,   108,     1,   112,   323,   114,
     330,   -30,    86,     1,   118,     1,   337,   113,    63,   120,
     117,     1,   121,     1,   364,   124,   371,    97,   125,   123,
      88,     1,   -30,     1,   378,   405,   133,   135,   -30,   -30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,    -5
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -35
static const yytype_int16 yytable[] =
{
      38,    63,    64,    39,    48,     8,     1,    48,     8,    69,
      70,     3,    61,    62,    63,    64,    49,    50,    51,    52,
      89,    90,    69,    70,    19,    20,   109,    19,    20,    40,
      65,    66,    67,    68,    71,    69,    70,    73,    74,    75,
      76,    77,    78,    26,    27,   154,    26,    27,    83,    84,
      85,    86,    87,    88,     4,    41,    91,    92,    93,    94,
      95,    96,    97,    98,    42,   100,    48,   112,    48,   151,
      61,    62,    63,    64,   110,    59,    43,   113,    61,    62,
      63,    64,    72,    40,    44,    45,    19,    20,    19,    20,
      46,    47,    53,    69,    70,    54,    65,    66,    67,    68,
      55,    69,    70,   126,   127,    26,    27,    26,    27,    56,
      57,   171,    58,   111,   102,   120,   121,   122,   123,   124,
     125,   129,   130,   132,   139,   140,   141,   133,   134,   135,
     138,   142,   143,   152,   155,   165,   183,   148,   159,   150,
     144,     0,   153,   170,   161,   163,     0,   180,   173,   158,
     167,   160,   172,   175,   178,   182,   181,     0,   166,    80,
     168,    61,    62,    63,    64,   188,   174,   189,   176,     6,
       7,     8,     9,    10,    11,    12,   184,    13,   185,    65,
      66,    67,    68,    14,    69,    70,    15,    16,    17,    18,
      19,    20,    21,     0,     0,    22,     0,     0,     0,     0,
       0,    23,     0,     0,     0,    24,     0,     0,    25,    26,
      27,    28,     0,     0,     0,    29,    30,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,    65,    66,    67,    68,     0,
      69,    70,     0,     0,     0,   131,    65,    66,    67,    68,
       0,    69,    70,   108,     0,    82,    61,    62,    63,    64,
       0,   101,     0,    61,    62,    63,    64,     0,   128,     0,
      61,    62,    63,    64,    65,    66,    67,    68,     0,    69,
      70,    65,    66,    67,    68,     0,    69,    70,    65,    66,
      67,    68,     0,    69,    70,   146,     0,    61,    62,    63,
      64,     0,   149,     0,    61,    62,    63,    64,     0,   157,
       0,    61,    62,    63,    64,    65,    66,    67,    68,     0,
      69,    70,    65,    66,    67,    68,     0,    69,    70,    65,
      66,    67,    68,     0,    69,    70,   162,     0,    61,    62,
      63,    64,     0,   164,     0,    61,    62,    63,    64,     0,
     169,     0,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    65,    66,    67,    68,     0,    69,    70,
      65,    66,    67,    68,     0,    69,    70,   177,     0,    61,
      62,    63,    64,     0,   179,     0,    61,    62,    63,    64,
       0,   186,     0,    61,    62,    63,    64,    65,    66,    67,
      68,     0,    69,    70,    65,    66,    67,    68,     0,    69,
      70,    65,    66,    67,    68,     0,    69,    70,   187,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,    65,    66,
      67,    68,     0,    69,    70,    79,     0,    65,    66,    67,
      68,     0,    69,    70,    61,    62,    63,    64,     0,     0,
     103,    61,    62,    63,    64,     0,     0,   104,     0,     0,
       0,     0,    65,    66,    67,    68,     0,    69,    70,    65,
      66,    67,    68,     0,    69,    70,    61,    62,    63,    64,
       0,     0,   105,    61,    62,    63,    64,     0,     0,   106,
       0,     0,     0,     0,    65,    66,    67,    68,     0,    69,
      70,    65,    66,    67,    68,     0,    69,    70,    61,    62,
      63,    64,     0,     0,   107,    61,    62,    63,    64,     0,
       0,   114,     0,     0,     0,     0,    65,    66,    67,    68,
       0,    69,    70,    65,    66,    67,    68,     0,    69,    70,
      61,    62,    63,    64,     0,     0,   115,    61,    62,    63,
      64,     0,     0,   116,     0,     0,     0,     0,    65,    66,
      67,    68,     0,    69,    70,    65,    66,    67,    68,     0,
      69,    70,    61,    62,    63,    64,     0,     0,   117,    61,
      62,    63,    64,     0,     0,   118,     0,     0,     0,     0,
      65,    66,    67,    68,     0,    69,    70,    65,    66,    67,
      68,     0,    69,    70,    61,    62,    63,    64,     0,     0,
     119,    61,    62,    63,    64,     0,     0,   136,     0,     0,
       0,     0,    65,    66,    67,    68,     0,    69,    70,    65,
      66,    67,    68,     0,    69,    70,    61,    62,    63,    64,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,   137,     0,    65,    66,    67,    68,     0,    69,
      70,   147,     0,    65,    66,    67,    68,     0,    69,    70,
      61,    62,    63,    64,     0,     0,     0,    61,    62,    63,
      64,     0,     0,     0,     0,     0,   156,     0,    65,    66,
      67,    68,     0,    69,    70,    65,    66,    67,    68,     0,
      69,    70,    61,    62,    63,    64,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,   -34,   -34,   -34,   -34,
      65,    66,    67,    68,     0,    81,    70,    65,    66,    67,
      68,     0,   145,    70,   -34,   -34,   -34,   -34,     0,   -34,
     -34
};

static const yytype_int16 yycheck[] =
{
       5,    17,    18,    14,     6,     7,     3,     6,     7,    38,
      39,     4,    15,    16,    17,    18,    21,    22,    23,    24,
      12,    13,    38,    39,    26,    27,    28,    26,    27,    40,
      33,    34,    35,    36,    39,    38,    39,    42,    43,    44,
      45,    46,    47,    45,    46,    48,    45,    46,    53,    54,
      55,    56,    57,    58,     0,    20,    61,    62,    63,    64,
      65,    66,    67,    68,    20,    70,     6,     7,     6,     7,
      15,    16,    17,    18,    79,     6,    20,    82,    15,    16,
      17,    18,     6,    40,    20,    20,    26,    27,    26,    27,
      20,    20,    20,    38,    39,    20,    33,    34,    35,    36,
      20,    38,    39,   108,   109,    45,    46,    45,    46,    20,
      20,    48,    20,    32,    21,     6,    13,    13,    13,    13,
      13,    37,    31,    13,   129,   130,   131,    31,    13,    13,
      32,    49,   137,    32,    32,    49,    48,   142,    30,   144,
      29,    -1,   147,    30,    32,    31,    -1,    50,    31,   154,
      32,   156,    32,    32,    30,    32,    31,    -1,   163,    13,
     165,    15,    16,    17,    18,    32,   171,    32,   173,     5,
       6,     7,     8,     9,    10,    11,   181,    13,   183,    33,
      34,    35,    36,    19,    38,    39,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    -1,    -1,    -1,    51,    52,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    39,    -1,    -1,    -1,    43,    33,    34,    35,    36,
      -1,    38,    39,    12,    -1,    42,    15,    16,    17,    18,
      -1,    13,    -1,    15,    16,    17,    18,    -1,    13,    -1,
      15,    16,    17,    18,    33,    34,    35,    36,    -1,    38,
      39,    33,    34,    35,    36,    -1,    38,    39,    33,    34,
      35,    36,    -1,    38,    39,    13,    -1,    15,    16,    17,
      18,    -1,    13,    -1,    15,    16,    17,    18,    -1,    13,
      -1,    15,    16,    17,    18,    33,    34,    35,    36,    -1,
      38,    39,    33,    34,    35,    36,    -1,    38,    39,    33,
      34,    35,    36,    -1,    38,    39,    13,    -1,    15,    16,
      17,    18,    -1,    13,    -1,    15,    16,    17,    18,    -1,
      13,    -1,    15,    16,    17,    18,    33,    34,    35,    36,
      -1,    38,    39,    33,    34,    35,    36,    -1,    38,    39,
      33,    34,    35,    36,    -1,    38,    39,    13,    -1,    15,
      16,    17,    18,    -1,    13,    -1,    15,    16,    17,    18,
      -1,    13,    -1,    15,    16,    17,    18,    33,    34,    35,
      36,    -1,    38,    39,    33,    34,    35,    36,    -1,    38,
      39,    33,    34,    35,    36,    -1,    38,    39,    13,    -1,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    38,    39,    31,    -1,    33,    34,    35,
      36,    -1,    38,    39,    15,    16,    17,    18,    -1,    -1,
      21,    15,    16,    17,    18,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    33,
      34,    35,    36,    -1,    38,    39,    15,    16,    17,    18,
      -1,    -1,    21,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    38,
      39,    33,    34,    35,    36,    -1,    38,    39,    15,    16,
      17,    18,    -1,    -1,    21,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    38,    39,    33,    34,    35,    36,    -1,    38,    39,
      15,    16,    17,    18,    -1,    -1,    21,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    38,    39,    33,    34,    35,    36,    -1,
      38,    39,    15,    16,    17,    18,    -1,    -1,    21,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    38,    39,    33,    34,    35,
      36,    -1,    38,    39,    15,    16,    17,    18,    -1,    -1,
      21,    15,    16,    17,    18,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    33,
      34,    35,    36,    -1,    38,    39,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    -1,
      -1,    -1,    31,    -1,    33,    34,    35,    36,    -1,    38,
      39,    31,    -1,    33,    34,    35,    36,    -1,    38,    39,
      15,    16,    17,    18,    -1,    -1,    -1,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,    34,
      35,    36,    -1,    38,    39,    33,    34,    35,    36,    -1,
      38,    39,    15,    16,    17,    18,    -1,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    -1,    15,    16,    17,    18,
      33,    34,    35,    36,    -1,    38,    39,    33,    34,    35,
      36,    -1,    38,    39,    33,    34,    35,    36,    -1,    38,
      39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    54,     4,     0,    55,     5,     6,     7,     8,
       9,    10,    11,    13,    19,    22,    23,    24,    25,    26,
      27,    28,    31,    37,    41,    44,    45,    46,    47,    51,
      52,    56,    57,    59,    60,    61,    62,    63,    64,    14,
      40,    20,    20,    20,    20,    20,    20,    20,     6,    64,
      64,    64,    64,    20,    20,    20,    20,    20,    20,     6,
      58,    15,    16,    17,    18,    33,    34,    35,    36,    38,
      39,    64,     6,    64,    64,    64,    64,    64,    64,    31,
      13,    38,    42,    64,    64,    64,    64,    64,    64,    12,
      13,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    13,    21,    21,    21,    21,    21,    21,    12,    28,
      64,    32,     7,    64,    21,    21,    21,    21,    21,    21,
       6,    13,    13,    13,    13,    13,    64,    64,    13,    37,
      31,    43,    13,    31,    13,    13,    21,    31,    32,    64,
      64,    64,    49,    64,    29,    38,    13,    31,    64,    13,
      64,     7,    32,    64,    48,    32,    31,    13,    64,    30,
      64,    32,    13,    31,    13,    49,    64,    32,    64,    13,
      30,    48,    32,    31,    64,    32,    64,    13,    30,    13,
      50,    31,    32,    48,    64,    64,    13,    13,    32,    32
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 22 "1707025.y"
    { printf("\nSuccessful compilation\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 33 "1707025.y"
    {printf("\nValid declaration of the variables.\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 40 "1707025.y"
    {
							if(store[(yyvsp[(3) - (3)])]==1)
							{
								printf("%c is already declared\n",(yyvsp[(3) - (3)])+97);
							}
							else
							{
								store[(yyvsp[(3) - (3)])]=1;
							}
						;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 50 "1707025.y"
    {
							if(store[(yyvsp[(1) - (1)])]==1)
							{
								printf("%c is already declared\n",(yyvsp[(1) - (1)])+97);
							}
							else
							{
								store[(yyvsp[(1) - (1)])]=1;
							}
						;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 63 "1707025.y"
    {
									if(store[(yyvsp[(3) - (5)])]==1){
										float a;
										printf("\nUser input for %c:\n",(yyvsp[(3) - (5)])+97);
										scanf("%f",&a);
										sym[(yyvsp[(3) - (5)])]=a;
										}
									else{
										printf("%c is not declared\n",(yyvsp[(3) - (5)])+97);
										}
									;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 75 "1707025.y"
    {
									if(store[(yyvsp[(1) - (4)])]==1){
									   sym[(yyvsp[(1) - (4)])]=(yyvsp[(3) - (4)]);
									   printf("\nValue of the variable, %c: %d\t\n",(yyvsp[(1) - (4)])+97,(yyvsp[(3) - (4)]));}
									else{
										printf("%c is not declared\n",(yyvsp[(1) - (4)])+97);  
										}
								;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 83 "1707025.y"
    { 
								printf("\nValue of the expression = %d\n",(yyvsp[(3) - (5)]));
								;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 90 "1707025.y"
    {
										int i,flag=0;
										printf("\nFunction for Prime number\n");
										if((yyvsp[(3) - (5)])>1){
										for(i=2;i<=(yyvsp[(3) - (5)])/2;i++){
											if((yyvsp[(3) - (5)])%i==0){
											printf("%d is not a prime number\n",(yyvsp[(3) - (5)]));
											flag=1;
											break;
											}
										}
										if(flag==0){
											printf("%d is a prime number\n",(yyvsp[(3) - (5)]));
											}
										}
										else{
										  printf("%d is not a prime number\n",(yyvsp[(3) - (5)]));
										  }
								   ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 109 "1707025.y"
    {
									printf("\nFunction for odd_even\n");
									if((yyvsp[(3) - (5)])%2==0){
									   printf("%d is an even number\n",(yyvsp[(3) - (5)]));
									   }
									else{
									   printf("%d is an odd number\n",(yyvsp[(3) - (5)]));
						               }
									;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 118 "1707025.y"
    {
									unsigned long long fact=1;
									int i;
									printf("\nFunction for Factorial\n");
                                    if((yyvsp[(3) - (5)])< 0)
                                        printf("\nError! Factorial of a negative number doesn't exist.\n");
                                    else{
                                      for(i=1;i<=(yyvsp[(3) - (5)]);i++) {
                                            fact *= i;
                                           }
                                     printf("Factorial of %d = %llu\n",(yyvsp[(3) - (5)]),fact);
                                    }
								;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 131 "1707025.y"
    {
									int n=(yyvsp[(3) - (5)]),i;
									printf("\nFunction for Fibonacci_series\n");
									int arr[n+2];
									arr[0]=0;
									arr[1]=1;
									for(i=2;i<=n;i++){
										arr[i]=arr[i-1]+arr[i-2];
									}
									printf("First %d fibonacci numbers :",n);
									for(i=0;i<n;i++){ printf(" %d",arr[i]);}
									printf("\n");
									;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 144 "1707025.y"
    {
									int i,sum=0;
									printf("\nFunction for Summation\n");
									for(i=1;i<=(yyvsp[(3) - (5)]);i++){
									   sum+=i;
									   }
									   printf("Sum of 1 to %d : %d\n",(yyvsp[(3) - (5)]),sum);
									;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 152 "1707025.y"
    {
									int i;
									printf("\nFunction for Divisors\n");
									printf("All divisors of %d :",(yyvsp[(3) - (5)]));
									for(i=1;i<=(yyvsp[(3) - (5)]);i++){
									  if((yyvsp[(3) - (5)])%i==0){
										printf(" %d",i);}
										}
									printf("\n");
									;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 165 "1707025.y"
    {		
									float a=(yyvsp[(4) - (17)]),b=(yyvsp[(10) - (17)]),c=(yyvsp[(15) - (17)]);
                       					if((yyvsp[(2) - (17)])){ printf("\nValue of the expression in whether block = %.2lf\n",a);}
										else if((yyvsp[(8) - (17)])){ printf("\nValue of the expression in ewhether block = %.2lf\n",b);}

										else{ printf("\nValue of the expression in otherwise block = %.2lf\n",c);}
									;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 173 "1707025.y"
    {
									float a=(yyvsp[(7) - (20)]),b=(yyvsp[(12) - (20)]),c=(yyvsp[(18) - (20)]);
										if((yyvsp[(2) - (20)])){
											if((yyvsp[(5) - (20)])){ printf("\nValue of the expression in valid condition = %.2lf\n",a);}
										    else{ printf("\nValue of the expression in invalid condition = %.2lf\n",b);}
											}
										else{ printf("\nValue of the expression in invalid condition = %.2lf\n",c);}
									;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 184 "1707025.y"
    {
									printf("\nSwitch statement is found\n");
									while((yyvsp[(3) - (20)]))
									{
										if((yyvsp[(3) - (20)])==(yyvsp[(7) - (20)])){
											printf("Choice is 1: %d\n",(yyvsp[(9) - (20)]));
											break;}
										if((yyvsp[(3) - (20)])==(yyvsp[(12) - (20)])){
											printf("Choice is 2: %d\n",(yyvsp[(14) - (20)]));
											break;}
										else{
											printf("Choice other than 1, 2: %d\n",(yyvsp[(18) - (20)]));
											break;}
									}
								;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 203 "1707025.y"
    {
								printf("\nA while loop is found.\n");
								printf("\nTable of 10:\n\n");	
									while((yyvsp[(2) - (8)])<=(yyvsp[(4) - (8)])){
									  printf("10 * %d = %d\n",(yyvsp[(2) - (8)]),(yyvsp[(6) - (8)]));
									  (yyvsp[(2) - (8)])=(yyvsp[(2) - (8)])+1;
									  (yyvsp[(6) - (8)])=10*(yyvsp[(2) - (8)]);
									}
								printf("\nThe loop works properly.\n");
								;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 215 "1707025.y"
    {					
								printf("\nA for loop is found.\n");
								for((yyvsp[(2) - (10)])=(yyvsp[(4) - (10)]);(yyvsp[(2) - (10)])<=(yyvsp[(6) - (10)]);(yyvsp[(2) - (10)])++){
									printf("\niteration %d : %d\n",(yyvsp[(2) - (10)]),(yyvsp[(8) - (10)]));
								
								}
								printf("\nThe loop works properly.\n");
								;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 224 "1707025.y"
    {
								printf("\nA Do...while loop is found.\n");
								printf("\nTable of 10:\n\n");
									do
									{
									  printf("10 * %d = %d\n",(yyvsp[(6) - (8)]),(yyvsp[(6) - (8)]));
									  (yyvsp[(6) - (8)])=(yyvsp[(6) - (8)])+1;
									  (yyvsp[(2) - (8)])=10*(yyvsp[(6) - (8)]);
									}
									while((yyvsp[(6) - (8)])<=(yyvsp[(8) - (8)]));
								printf("\nThe loop works properly.\n");
								;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 242 "1707025.y"
    { (yyval)=sym[(yyvsp[(1) - (1)])];;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 243 "1707025.y"
    {
								float num=(yyvsp[(3) - (4)]);
								if(num>=0){
									(yyval)=(float)sqrt(num);
								}
								else{
								   printf("\nInput must be non negative\n");
								}
								;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 252 "1707025.y"
    {
								(yyval)=pow((yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));
								;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 255 "1707025.y"
    {
							(yyval)=(float)(yyvsp[(3) - (4)])*(yyvsp[(3) - (4)]);
							  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 258 "1707025.y"
    {
	                          (yyval)=(float)(yyvsp[(3) - (4)])*(yyvsp[(3) - (4)])*(yyvsp[(3) - (4)]);
							  ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 261 "1707025.y"
    { (yyval)=(yyvsp[(1) - (3)])+(yyvsp[(3) - (3)]);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 262 "1707025.y"
    { (yyval)=(yyvsp[(1) - (3)])-(yyvsp[(3) - (3)]);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 263 "1707025.y"
    { (yyval)=(yyvsp[(1) - (3)])*(yyvsp[(3) - (3)]);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 264 "1707025.y"
    { 
									if((yyvsp[(3) - (3)])){
									   (yyval)=(yyvsp[(1) - (3)])/(yyvsp[(3) - (3)]);
									}
									else{
									   (yyval)=0;
									   printf("\nDivision by zero\t");
									}
								;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 273 "1707025.y"
    {(yyval)= (yyvsp[(1) - (3)])<=(yyvsp[(3) - (3)]);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 274 "1707025.y"
    {(yyval)= (yyvsp[(1) - (3)])<(yyvsp[(3) - (3)]);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 276 "1707025.y"
    { (yyval)= (yyvsp[(1) - (3)])>(yyvsp[(3) - (3)]);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 277 "1707025.y"
    { (yyval)= (yyvsp[(1) - (3)])>=(yyvsp[(3) - (3)]);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 278 "1707025.y"
    { (yyval)= (yyvsp[(1) - (3)])!=(yyvsp[(3) - (3)]);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 279 "1707025.y"
    { (yyval)= (yyvsp[(3) - (3)]);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 280 "1707025.y"
    { (yyval)= sym[(yyvsp[(1) - (2)])]+1;;}
    break;



/* Line 1455 of yacc.c  */
#line 2047 "1707025.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 284 "1707025.y"


void yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
}

int yywrap()
{
   return 1;
   }
int main()
{
   yyin=fopen("input.txt","r");
   yyparse();
}
