/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
#define YYBISON_VERSION "3.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 21 "lab7.y"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "symtable.h"
#include "ast.h"


int mydebug = 0;

extern int line;

void yyerror (s)
	char *s;
{
	fprintf(stderr, "error on line %d: %s\nAborting...\n", line, s);
	exit(1);

}

int yylex(void);

ASTnode * globalTreePointer;

int level = 0;

int globalOffset = 0;
int offset = 0;


#line 101 "y.tab.c"

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    NUM = 259,
    INT = 260,
    VOID = 261,
    BOOLEAN = 262,
    BEG = 263,
    END = 264,
    IF = 265,
    THEN = 266,
    ELSE = 267,
    WHILE = 268,
    DO = 269,
    RET = 270,
    READ = 271,
    WRITE = 272,
    LE = 273,
    LT = 274,
    GE = 275,
    GT = 276,
    EQ = 277,
    NE = 278,
    AND = 279,
    OR = 280,
    TRUE = 281,
    FALSE = 282,
    NOT = 283
  };
#endif
/* Tokens.  */
#define ID 258
#define NUM 259
#define INT 260
#define VOID 261
#define BOOLEAN 262
#define BEG 263
#define END 264
#define IF 265
#define THEN 266
#define ELSE 267
#define WHILE 268
#define DO 269
#define RET 270
#define READ 271
#define WRITE 272
#define LE 273
#define LT 274
#define GE 275
#define GT 276
#define EQ 277
#define NE 278
#define AND 279
#define OR 280
#define TRUE 281
#define FALSE 282
#define NOT 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 54 "lab7.y"

	char * string;
	int value;
	ASTnode * node;
	enum OPERATORS operator;

#line 207 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   124

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

#define YYUNDEFTOK  2
#define YYMAXUTOK   283

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,    38,    36,    32,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    30,     2,    31,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    84,    89,    96,   101,   107,   129,   136,
     148,   157,   168,   172,   176,   183,   182,   200,   204,   211,
     215,   222,   234,   249,   249,   262,   265,   273,   276,   283,
     287,   291,   295,   299,   303,   307,   311,   317,   322,   328,
     336,   346,   354,   358,   365,   372,   379,   387,   393,   404,
     417,   421,   430,   434,   438,   442,   446,   450,   456,   460,
     469,   473,   479,   483,   492,   496,   500,   504,   510,   514,
     519,   523,   527,   532,   537,   545,   558,   563,   568,   573
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "INT", "VOID", "BOOLEAN",
  "BEG", "END", "IF", "THEN", "ELSE", "WHILE", "DO", "RET", "READ",
  "WRITE", "LE", "LT", "GE", "GT", "EQ", "NE", "AND", "OR", "TRUE",
  "FALSE", "NOT", "';'", "'['", "']'", "','", "'('", "')'", "'='", "'+'",
  "'-'", "'*'", "'/'", "$accept", "program", "decls_list", "dec",
  "var_dec", "var_list", "type_spec", "fun_dec", "$@1", "params",
  "param_list", "param", "compound_stmt", "$@2", "local_decs", "stmt_list",
  "stmt", "expression_stmt", "selection_stmt", "iteration_stmt",
  "return_stmt", "read_stmt", "write_stmt", "assignment_stmt",
  "expression", "variable", "simple_expression", "relop",
  "additive_expression", "addop", "term", "multop", "factor", "call",
  "args", "arg_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    59,
      91,    93,    44,    40,    41,    61,    43,    45,    42,    47
};
# endif

#define YYPACT_NINF -83

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-83)))

#define YYTABLE_NINF -18

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      34,   -83,   -83,   -83,    12,   -83,    34,   -83,    14,   -83,
     -83,   -83,    52,     1,    39,    54,    30,   -83,    33,    41,
     -83,    45,    36,    38,    78,    61,   -83,    64,    54,    67,
      90,    34,   -83,    68,   -83,   -83,   -83,   -83,    34,    34,
      54,     5,   -83,   -19,   -83,    32,    32,    20,    97,    32,
     -83,   -83,    32,   -83,    32,   -83,    92,     5,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,    73,    70,    69,    25,    31,
     -83,   -83,    32,    32,    93,   -83,    89,   -83,    77,    79,
      81,    82,   -83,    74,   -83,   -83,   -83,    32,   -83,   -83,
     -83,   -83,   -83,   -83,    32,   -83,   -83,    32,   -83,   -83,
     -83,   -83,    32,    76,    80,    83,   -83,     5,     5,   -83,
     -83,   -83,   -83,    57,    25,    31,   -83,   -83,    32,   -83,
     101,   -83,   -83,   -83,     5,   -83
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    14,     0,     2,     3,     5,     0,     6,
       1,     4,     8,     0,     0,     0,     0,     7,     0,     8,
      10,     0,     9,    13,     0,     0,    18,    19,     0,    21,
       0,     0,    11,     0,    23,    16,    20,    22,    25,    25,
       0,    27,    26,    48,    69,     0,     0,     0,     0,     0,
      72,    73,     0,    38,     0,    30,     0,    27,    29,    31,
      32,    34,    35,    36,    33,     0,    70,    47,    50,    58,
      62,    71,     0,    77,     0,    70,     0,    42,     0,    48,
       0,     0,    74,     0,    24,    28,    37,     0,    52,    53,
      55,    54,    56,    57,     0,    60,    61,     0,    66,    67,
      64,    65,     0,     0,    78,     0,    76,     0,     0,    43,
      44,    45,    68,     0,    51,    59,    63,    49,     0,    75,
      39,    41,    46,    79,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   108,   -83,    55,    -9,     6,   -83,   -83,   -83,
      84,   -83,    86,   -83,    85,    62,   -82,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -44,   -41,    35,   -83,    24,   -83,
      23,   -83,   -48,   -83,   -83,     3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    13,     8,     9,    16,    25,
      26,    27,    55,    38,    41,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    75,    67,    94,    68,    97,
      69,   102,    70,    71,   105,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      66,    74,    76,    78,    82,    81,    20,    80,    43,    44,
      83,    72,    10,    34,    73,    45,    66,    12,    46,    32,
      47,    48,    49,    43,    44,   120,   121,    24,   103,   104,
      17,    50,    51,    52,    53,    43,    44,    24,    54,     1,
       2,     3,   125,    18,    40,    40,    50,    51,    52,    77,
       1,    23,     3,    54,   116,    98,    99,    19,    50,    51,
      52,    95,    96,    21,    22,    54,    66,    66,    28,   100,
     101,    14,   -17,    15,   104,    88,    89,    90,    91,    92,
      93,    29,    14,    66,    15,   -15,   122,    88,    89,    90,
      91,    92,    93,    39,    39,    30,    31,    33,    34,    37,
      79,    84,    86,   108,   107,    87,   109,   117,   112,    72,
     110,   111,   118,   124,    11,    36,    35,   119,   114,    85,
     115,   123,   113,     0,    42
};

static const yytype_int8 yycheck[] =
{
      41,    45,    46,    47,    52,    49,    15,    48,     3,     4,
      54,    30,     0,     8,    33,    10,    57,     3,    13,    28,
      15,    16,    17,     3,     4,   107,   108,    21,    72,    73,
      29,    26,    27,    28,    29,     3,     4,    31,    33,     5,
       6,     7,   124,     4,    38,    39,    26,    27,    28,    29,
       5,     6,     7,    33,   102,    24,    25,     3,    26,    27,
      28,    36,    37,    33,    31,    33,   107,   108,    32,    38,
      39,    30,    34,    32,   118,    18,    19,    20,    21,    22,
      23,     3,    30,   124,    32,    33,    29,    18,    19,    20,
      21,    22,    23,    38,    39,    34,    32,    30,     8,    31,
       3,     9,    29,    14,    11,    35,    29,    31,    34,    30,
      29,    29,    32,    12,     6,    31,    30,    34,    94,    57,
      97,   118,    87,    -1,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,    41,    42,    43,    44,    46,    47,
       0,    42,     3,    45,    30,    32,    48,    29,     4,     3,
      45,    33,    31,     6,    46,    49,    50,    51,    32,     3,
      34,    32,    45,    30,     8,    52,    50,    31,    53,    44,
      46,    54,    54,     3,     4,    10,    13,    15,    16,    17,
      26,    27,    28,    29,    33,    52,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    68,    70,
      72,    73,    30,    33,    64,    65,    64,    29,    64,     3,
      65,    64,    72,    64,     9,    55,    29,    35,    18,    19,
      20,    21,    22,    23,    67,    36,    37,    69,    24,    25,
      38,    39,    71,    64,    64,    74,    75,    11,    14,    29,
      29,    29,    34,    66,    68,    70,    72,    31,    32,    34,
      56,    56,    29,    75,    12,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    44,    45,    45,
      45,    45,    46,    46,    46,    48,    47,    49,    49,    50,
      50,    51,    51,    53,    52,    54,    54,    55,    55,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    59,    60,    60,    61,    62,    63,    64,    65,    65,
      66,    66,    67,    67,    67,    67,    67,    67,    68,    68,
      69,    69,    70,    70,    71,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    73,    74,    74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     1,     4,
       3,     6,     1,     1,     1,     0,     7,     1,     1,     1,
       3,     2,     4,     0,     5,     0,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     4,
       6,     4,     2,     3,     3,     3,     4,     1,     1,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     2,     4,     1,     0,     1,     3
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
  unsigned long yylno = yyrline[yyrule];
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

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

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
#line 78 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
				globalTreePointer = (yyval.node);
			}
#line 1396 "y.tab.c"
    break;

  case 3:
#line 85 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1404 "y.tab.c"
    break;

  case 4:
#line 90 "lab7.y"
    {
				(yyvsp[-1].node)->next = (yyvsp[0].node);
				(yyval.node) = (yyvsp[-1].node);
			}
#line 1413 "y.tab.c"
    break;

  case 5:
#line 97 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1421 "y.tab.c"
    break;

  case 6:
#line 102 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1429 "y.tab.c"
    break;

  case 7:
#line 108 "lab7.y"
    {		
				if((yyvsp[-2].operator) == VOIDTYPE) {
				printf("Cannot use VOID as a type\n");
				exit(1);
				}	
				ASTnode * p = (yyvsp[-1].node);
				while(p != NULL) {
					int temp = p->value;
					
					Insert((yyvsp[-2].operator), p->name, p->value, offset, level);
					if(temp <= 0) offset++;
					else offset += p->value;

					p->operator = (yyvsp[-2].operator);	
					p = p->s1;
					
				}
				(yyval.node) = (yyvsp[-1].node);
			}
#line 1453 "y.tab.c"
    break;

  case 8:
#line 130 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(VARDEC);
				(yyval.node)->name = (yyvsp[0].string);
				(yyval.node)->value = 0;
				//Insert(VOID, $1, 0, offset++, level);
			}
#line 1464 "y.tab.c"
    break;

  case 9:
#line 137 "lab7.y"
    {	
				//if($3 < 1) {
				//	fprintf(stderr, "ARRAY CANNOT BE LESS THAN 1");
				//exit(1);
				//}		
				(yyval.node) = ASTCreateNode(VARDEC);
				(yyval.node)->name = (yyvsp[-3].string);
				(yyval.node)->value = (yyvsp[-1].value);
				//Insert(VOID, $1, $3, offset, level);
				//offset+=$3;
			}
#line 1480 "y.tab.c"
    break;

  case 10:
#line 149 "lab7.y"
    {	
				(yyval.node) = ASTCreateNode(VARDEC);
				(yyval.node)->name = (yyvsp[-2].string);
				(yyval.node)->value = 0;
				(yyval.node)->s1 = (yyvsp[0].node);	
				//Insert(VOID, $1, 0, offset++, level);

			}
#line 1493 "y.tab.c"
    break;

  case 11:
#line 158 "lab7.y"
    {	
				(yyval.node) = ASTCreateNode(VARDEC);
				(yyval.node)->name = (yyvsp[-5].string);
				(yyval.node)->value = (yyvsp[-3].value);
				(yyval.node)->s1 = (yyvsp[0].node);
				//Insert(VOID, $1, $3, offset, level);
				//offset += $3;
			}
#line 1506 "y.tab.c"
    break;

  case 12:
#line 169 "lab7.y"
    {
				(yyval.operator) = INTTYPE;
			}
#line 1514 "y.tab.c"
    break;

  case 13:
#line 173 "lab7.y"
    {
				(yyval.operator) = VOIDTYPE;
			}
#line 1522 "y.tab.c"
    break;

  case 14:
#line 177 "lab7.y"
    {
				(yyval.operator) = BOOLTYPE;
			}
#line 1530 "y.tab.c"
    break;

  case 15:
#line 183 "lab7.y"
    {
				globalOffset = offset;
				Insert((yyvsp[-1].operator), (yyvsp[0].string), -2, offset, 0);
			}
#line 1539 "y.tab.c"
    break;

  case 16:
#line 189 "lab7.y"
    {	
				(yyval.node) = ASTCreateNode(FUNDEC);	
				(yyval.node)->name = (yyvsp[-5].string);
				(yyval.node)->operator = (yyvsp[-6].operator);
				(yyval.node)->s1 = (yyvsp[-2].node);
				(yyval.node)->s2 = (yyvsp[0].node);
				Display();
				offset = globalOffset;
			}
#line 1553 "y.tab.c"
    break;

  case 17:
#line 201 "lab7.y"
    {
				(yyval.node) = NULL;
			}
#line 1561 "y.tab.c"
    break;

  case 18:
#line 205 "lab7.y"
    {
				
				(yyval.node) = (yyvsp[0].node);
			}
#line 1570 "y.tab.c"
    break;

  case 19:
#line 212 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1578 "y.tab.c"
    break;

  case 20:
#line 216 "lab7.y"
    {
				(yyvsp[-2].node)->next = (yyvsp[0].node);
				(yyval.node) = (yyvsp[-2].node);
			}
#line 1587 "y.tab.c"
    break;

  case 21:
#line 223 "lab7.y"
    {
				if(Search((yyvsp[0].string), 1)) {
				printf("variable already exists");
				exit(1);
}
				(yyval.node) = ASTCreateNode(PARAM);
				(yyval.node)->operator = (yyvsp[-1].operator);
				(yyval.node)->name = (yyvsp[0].string);
				(yyval.node)->value = 0;
				Insert((yyval.node)->operator, (yyval.node)->name, (yyval.node)->value, offset++, 1);
			}
#line 1603 "y.tab.c"
    break;

  case 22:
#line 235 "lab7.y"
    {
				
				if(Search((yyvsp[-2].string), 1)) {
				printf("variable already exists");
				exit(1);
}
				(yyval.node) = ASTCreateNode(PARAM);
				(yyval.node)->operator = (yyvsp[-3].operator);
				(yyval.node)->name = (yyvsp[-2].string);
				(yyval.node)->value = -1;
				Insert((yyval.node)->operator, (yyval.node)->name, (yyval.node)->value, offset++, 1);
			}
#line 1620 "y.tab.c"
    break;

  case 23:
#line 249 "lab7.y"
    {level++;}
#line 1626 "y.tab.c"
    break;

  case 24:
#line 251 "lab7.y"
    {		
				(yyval.node) = ASTCreateNode(BLOCK);
				(yyval.node)->s1 = (yyvsp[-2].node);
				(yyval.node)->s2 = (yyvsp[-1].node);
				Display();
				offset -= Delete(level);
				level--;
			}
#line 1639 "y.tab.c"
    break;

  case 25:
#line 262 "lab7.y"
    {
				(yyval.node) = NULL;
			}
#line 1647 "y.tab.c"
    break;

  case 26:
#line 266 "lab7.y"
    {
				(yyval.node) = (yyvsp[-1].node);
				(yyval.node)->next = (yyvsp[0].node);
			}
#line 1656 "y.tab.c"
    break;

  case 27:
#line 273 "lab7.y"
    {	
				(yyval.node) = NULL;
			}
#line 1664 "y.tab.c"
    break;

  case 28:
#line 277 "lab7.y"
    {
				(yyval.node) = (yyvsp[-1].node);
				(yyval.node)->next = (yyvsp[0].node);
			}
#line 1673 "y.tab.c"
    break;

  case 29:
#line 284 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1681 "y.tab.c"
    break;

  case 30:
#line 288 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1689 "y.tab.c"
    break;

  case 31:
#line 292 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1697 "y.tab.c"
    break;

  case 32:
#line 296 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1705 "y.tab.c"
    break;

  case 33:
#line 300 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1713 "y.tab.c"
    break;

  case 34:
#line 304 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1721 "y.tab.c"
    break;

  case 35:
#line 308 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1729 "y.tab.c"
    break;

  case 36:
#line 312 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1737 "y.tab.c"
    break;

  case 37:
#line 318 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(EXPRSTMT);
				(yyval.node)->s1 = (yyvsp[-1].node);
			}
#line 1746 "y.tab.c"
    break;

  case 38:
#line 323 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(EXPRSTMT);
			}
#line 1754 "y.tab.c"
    break;

  case 39:
#line 329 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(IFBLOCK);
				(yyval.node)->s1 = (yyvsp[-2].node);
				(yyval.node)->s2 = ASTCreateNode(IFELSESTMTS);
				(yyval.node)->s2->s1 = (yyvsp[0].node);
				(yyval.node)->s2->s2 = NULL; 
			}
#line 1766 "y.tab.c"
    break;

  case 40:
#line 337 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(IFBLOCK);
				(yyval.node)->s1 = (yyvsp[-4].node);
				(yyval.node)->s2 = ASTCreateNode(IFELSESTMTS);
				(yyval.node)->s2->s1 = (yyvsp[-2].node);
				(yyval.node)->s2->s2 = (yyvsp[0].node);
			}
#line 1778 "y.tab.c"
    break;

  case 41:
#line 347 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(WHILEBLOCK);
				(yyval.node)->s1 = (yyvsp[-2].node);
				(yyval.node)->s2 = (yyvsp[0].node);
			}
#line 1788 "y.tab.c"
    break;

  case 42:
#line 355 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(FUNRET);
			}
#line 1796 "y.tab.c"
    break;

  case 43:
#line 359 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(FUNRET);
				(yyval.node)->s1 = (yyvsp[-1].node);
			}
#line 1805 "y.tab.c"
    break;

  case 44:
#line 366 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(READSTMT);
				(yyval.node)->s1 = (yyvsp[-1].node);
			}
#line 1814 "y.tab.c"
    break;

  case 45:
#line 373 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(WRITESTMT);
				(yyval.node)->s1 = (yyvsp[-1].node);
			}
#line 1823 "y.tab.c"
    break;

  case 46:
#line 380 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(ASSIGN);
				(yyval.node)->s1 = (yyvsp[-3].node);
				(yyval.node)->s2 = (yyvsp[-1].node);
			}
#line 1833 "y.tab.c"
    break;

  case 47:
#line 388 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1841 "y.tab.c"
    break;

  case 48:
#line 394 "lab7.y"
    {
				printf((yyvsp[0].string));
				if(!Search((yyvsp[0].string), level)) {
printf("Symbol doesnt exist: %s\n", (yyvsp[0].string));
				exit(1);
				}
			
				(yyval.node) = ASTCreateNode(IDENT);
				(yyval.node)->name = (yyvsp[0].string);
			}
#line 1856 "y.tab.c"
    break;

  case 49:
#line 405 "lab7.y"
    {
				if(!Search((yyvsp[-3].string), level)) {
printf("Symbol doesnt exist: %s\n", (yyvsp[-3].string));
				exit(1);
				}
				(yyval.node) = ASTCreateNode(IDENT);
				(yyval.node)->name = (yyvsp[-3].string);
				(yyval.node)->s1 = (yyvsp[-1].node);
				(yyval.node)->value = (yyvsp[-1].node)->value;
			}
#line 1871 "y.tab.c"
    break;

  case 50:
#line 418 "lab7.y"
    {
					(yyval.node) = (yyvsp[0].node);
				}
#line 1879 "y.tab.c"
    break;

  case 51:
#line 422 "lab7.y"
    {
					(yyval.node) = ASTCreateNode(EXPR);
					(yyval.node)->s1 = (yyvsp[-2].node);
					(yyval.node)->s2 = (yyvsp[0].node);
					(yyval.node)->operator = (yyvsp[-1].operator);
				}
#line 1890 "y.tab.c"
    break;

  case 52:
#line 431 "lab7.y"
    {
				(yyval.operator) = LESSTHANOREQUAL;
			}
#line 1898 "y.tab.c"
    break;

  case 53:
#line 435 "lab7.y"
    {
				(yyval.operator) = LESSTHAN;
			}
#line 1906 "y.tab.c"
    break;

  case 54:
#line 439 "lab7.y"
    {
				(yyval.operator) = GREATERTHAN;
			}
#line 1914 "y.tab.c"
    break;

  case 55:
#line 443 "lab7.y"
    {
				(yyval.operator) = GREATERTHANOREQUAL;
			}
#line 1922 "y.tab.c"
    break;

  case 56:
#line 447 "lab7.y"
    {
				(yyval.operator) = EQUAL;
			}
#line 1930 "y.tab.c"
    break;

  case 57:
#line 451 "lab7.y"
    {
				(yyval.operator) = NOTEQUAL;
			}
#line 1938 "y.tab.c"
    break;

  case 58:
#line 457 "lab7.y"
    {
					(yyval.node) = (yyvsp[0].node);
				}
#line 1946 "y.tab.c"
    break;

  case 59:
#line 461 "lab7.y"
    {
					(yyval.node) = ASTCreateNode(EXPR);
					(yyval.node)->s1 = (yyvsp[-2].node);
					(yyval.node)->s2 = (yyvsp[0].node);
					(yyval.node)->operator = (yyvsp[-1].operator);
				}
#line 1957 "y.tab.c"
    break;

  case 60:
#line 470 "lab7.y"
    {
				(yyval.operator) = PLUS;
			}
#line 1965 "y.tab.c"
    break;

  case 61:
#line 474 "lab7.y"
    {
				(yyval.operator) = MINUS;
			}
#line 1973 "y.tab.c"
    break;

  case 62:
#line 480 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 1981 "y.tab.c"
    break;

  case 63:
#line 484 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(MULTOPTERM);
				(yyval.node)->s1 = (yyvsp[-2].node);
				(yyval.node)->s2 = (yyvsp[0].node);
				(yyval.node)->operator = (yyvsp[-1].operator);
			}
#line 1992 "y.tab.c"
    break;

  case 64:
#line 493 "lab7.y"
    {
				(yyval.operator) = MULT;
			}
#line 2000 "y.tab.c"
    break;

  case 65:
#line 497 "lab7.y"
    {
				(yyval.operator) = DIV;
			}
#line 2008 "y.tab.c"
    break;

  case 66:
#line 501 "lab7.y"
    {
				(yyval.operator) = EXPRAND;
			}
#line 2016 "y.tab.c"
    break;

  case 67:
#line 505 "lab7.y"
    {
				(yyval.operator) = EXPROR;
			}
#line 2024 "y.tab.c"
    break;

  case 68:
#line 511 "lab7.y"
    {
				(yyval.node) = (yyvsp[-1].node);
			}
#line 2032 "y.tab.c"
    break;

  case 69:
#line 515 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(NUMBER);
				(yyval.node)->value = (yyvsp[0].value);
			}
#line 2041 "y.tab.c"
    break;

  case 70:
#line 520 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 2049 "y.tab.c"
    break;

  case 71:
#line 524 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 2057 "y.tab.c"
    break;

  case 72:
#line 528 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(NUMBER);
				(yyval.node)->value = 1;
			}
#line 2066 "y.tab.c"
    break;

  case 73:
#line 533 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(NUMBER);
				(yyval.node)->value = 0;
			}
#line 2075 "y.tab.c"
    break;

  case 74:
#line 538 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(EXPR);
				(yyval.node)->operator = EXPRNOT;
				(yyval.node)->s1 = (yyvsp[0].node);
			}
#line 2085 "y.tab.c"
    break;

  case 75:
#line 546 "lab7.y"
    {
				
				if(!Search((yyvsp[-3].string), level)) {
printf("Symbol doesnt exist: %s", (yyvsp[-3].string));
				exit(1);
				}
				(yyval.node) = ASTCreateNode(CALL);
				(yyval.node)->s1 = (yyvsp[-1].node);
				(yyval.node)->name = (yyvsp[-3].string);
			}
#line 2100 "y.tab.c"
    break;

  case 76:
#line 559 "lab7.y"
    {
				(yyval.node) = (yyvsp[0].node);
			}
#line 2108 "y.tab.c"
    break;

  case 77:
#line 563 "lab7.y"
    {
				(yyval.node) = NULL;
			}
#line 2116 "y.tab.c"
    break;

  case 78:
#line 569 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(ARG);
				(yyval.node)->s1 = (yyvsp[0].node);
			}
#line 2125 "y.tab.c"
    break;

  case 79:
#line 574 "lab7.y"
    {
				(yyval.node) = ASTCreateNode(ARG);
				(yyval.node)->s1 = (yyvsp[-2].node);
				(yyval.node)->next = (yyvsp[0].node);
			}
#line 2135 "y.tab.c"
    break;


#line 2139 "y.tab.c"

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
#line 581 "lab7.y"
		

int main(void) {
	yyparse();
	Display();
	fprintf(stderr, "No errors found\n");
	printf("Abstract Syntax Tree:\n\n");
	ASTprint(0, globalTreePointer);
	return 1;
}

