/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "jac.y" /* yacc.c:339  */

  #include <stdio.h>
  #include <string.h>
  #include <stdarg.h>
  #include "functions.h"
  

  
  void yyerror(const char *s);
  int yylex();
  extern int flag;
  extern int n_line;
  extern int n_column;
  extern char* yytext;

  int flagTreeErros;

  node* root;
  node* main_node;
  node* main2_node;
  node* aux_node;
  node* aux2_node;
  node* present_node;
  node* value_node;

#line 92 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    BOOL = 258,
    CLASS = 259,
    DO = 260,
    DOTLENGTH = 261,
    DOUBLE = 262,
    ELSE = 263,
    IF = 264,
    INT = 265,
    PARSEINT = 266,
    PRINT = 267,
    PUBLIC = 268,
    RETURN = 269,
    STATIC = 270,
    STRING = 271,
    VOID = 272,
    WHILE = 273,
    OCURV = 274,
    CCURV = 275,
    OBRACE = 276,
    CBRACE = 277,
    OSQUARE = 278,
    CSQUARE = 279,
    AND = 280,
    OR = 281,
    LT = 282,
    GT = 283,
    EQ = 284,
    NEQ = 285,
    GEQ = 286,
    LEQ = 287,
    PLUS = 288,
    MINUS = 289,
    STAR = 290,
    DIV = 291,
    MOD = 292,
    NOT = 293,
    ASSIGN = 294,
    SEMI = 295,
    COMMA = 296,
    REALLIT = 297,
    DECLIT = 298,
    BOOLLIT = 299,
    ID = 300,
    STRLIT = 301,
    RESERVED = 302
  };
#endif
/* Tokens.  */
#define BOOL 258
#define CLASS 259
#define DO 260
#define DOTLENGTH 261
#define DOUBLE 262
#define ELSE 263
#define IF 264
#define INT 265
#define PARSEINT 266
#define PRINT 267
#define PUBLIC 268
#define RETURN 269
#define STATIC 270
#define STRING 271
#define VOID 272
#define WHILE 273
#define OCURV 274
#define CCURV 275
#define OBRACE 276
#define CBRACE 277
#define OSQUARE 278
#define CSQUARE 279
#define AND 280
#define OR 281
#define LT 282
#define GT 283
#define EQ 284
#define NEQ 285
#define GEQ 286
#define LEQ 287
#define PLUS 288
#define MINUS 289
#define STAR 290
#define DIV 291
#define MOD 292
#define NOT 293
#define ASSIGN 294
#define SEMI 295
#define COMMA 296
#define REALLIT 297
#define DECLIT 298
#define BOOLLIT 299
#define ID 300
#define STRLIT 301
#define RESERVED 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 27 "jac.y" /* yacc.c:355  */

  char *string;
  struct node *node;

#line 231 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    58,    59,    60,    61,    64,    65,    67,
      69,    74,    77,    81,    87,    89,    90,    94,    99,   106,
     113,   115,   119,   122,   124,   126,   131,   132,   133,   135,
     142,   147,   153,   158,   162,   166,   167,   172,   174,   175,
     176,   177,   179,   180,   182,   183,   185,   186,   189,   195,
     201,   203,   205,   207,   208,   212,   216,   219,   220,   222,
     223,   224,   227,   231,   235,   238,   241,   245,   248,   251,
     254,   257,   260,   264,   268,   271,   274,   277,   280,   282,
     283,   284,   285,   286
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "CLASS", "DO", "DOTLENGTH",
  "DOUBLE", "ELSE", "IF", "INT", "PARSEINT", "PRINT", "PUBLIC", "RETURN",
  "STATIC", "STRING", "VOID", "WHILE", "OCURV", "CCURV", "OBRACE",
  "CBRACE", "OSQUARE", "CSQUARE", "AND", "OR", "LT", "GT", "EQ", "NEQ",
  "GEQ", "LEQ", "PLUS", "MINUS", "STAR", "DIV", "MOD", "NOT", "ASSIGN",
  "SEMI", "COMMA", "REALLIT", "DECLIT", "BOOLLIT", "ID", "STRLIT",
  "RESERVED", "$accept", "Program", "auxProgram", "FieldDecl",
  "auxFieldDecl", "MethodDecl", "MethodHeader", "MethodBody",
  "AuxMethodBody", "FormalParams", "auxFormalParams", "VarDecl",
  "auxVarDecl", "Type", "Statement", "auxStatement1", "auxStatement2",
  "auxStatement4", "auxStatement5", "Assignment", "MethodInvocation",
  "AuxMethodInvocation1", "AuxMethodInvocation2", "ParseArgs", "Expr",
  "auxExpr", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF -37

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-37)))

#define YYTABLE_NINF -53

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,   -34,    34,   107,    37,   -37,    22,    49,   -37,   -37,
     -37,   -37,   -37,   -37,    89,   -37,   -37,   -37,    23,   -36,
      48,    41,    68,   -37,    43,   139,   -37,    70,   149,   -37,
      51,   189,    74,    78,    82,   197,    88,    45,    -9,    92,
     139,    20,    85,   139,    75,   -37,   -37,   -37,   149,   108,
     113,    90,   -37,   118,   197,    25,   180,    83,   217,   217,
     217,   -37,   -37,   -37,    26,   101,   -37,   -37,   -37,   -37,
     238,   197,    45,   121,   144,   197,   -37,   -37,   -37,   109,
     -37,   -37,   -37,   138,   142,   -37,   126,   143,   148,   150,
     146,   -37,   151,   -37,   152,   153,    17,    16,    16,   -37,
     -37,   -37,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   154,   -37,   -37,   155,   156,
     140,   -37,   -37,   -37,   135,    30,   -37,   197,   189,   -37,
     197,   145,   -37,   -37,   262,   251,    76,    76,   273,   273,
      76,    76,    16,    16,   -37,   -37,   -37,   189,   -37,   -37,
     197,   -37,   -37,   147,   163,   185,   171,   -37,   -37,   140,
     126,   157,   189,   176,   -37,   -37,   -37,   -37,   -37
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     2,     6,
       4,     5,     3,     8,     0,    26,    28,    27,     0,     0,
       0,     0,     0,     7,     0,     0,    11,     9,    20,    10,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    39,    40,    20,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,    82,    81,    80,    78,     0,    57,    59,    60,    46,
      58,     0,     0,     0,     0,     0,    14,    16,    23,     0,
      24,    17,    35,     0,     0,    13,    22,     0,     0,     0,
       0,    43,     0,    42,     0,     0,    78,    74,    75,    76,
      77,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    29,     0,     0,
      54,    48,    25,    12,     0,     0,    18,     0,     0,    56,
       0,     0,    83,    79,    61,    62,    67,    65,    63,    68,
      64,    66,    69,    70,    71,    72,    73,     0,    50,    49,
       0,    51,    19,     0,     0,    31,     0,    34,    32,    54,
      22,     0,     0,     0,    53,    21,    33,    30,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,    -2,   158,
      42,   -37,   -37,     7,   -28,   -37,   -37,   132,   -37,   -25,
     -24,   -37,    46,   -23,   -32,   -31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,    19,    11,    20,    26,    39,    50,
     126,    40,    41,    42,    43,    44,    92,    73,    65,    66,
      67,   119,   151,    68,    69,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    46,    47,    53,    23,    24,    45,    46,    47,    72,
      74,     4,    45,    46,    47,    45,    46,    47,    45,    46,
      47,    21,    88,   100,    93,    95,    89,    97,    98,    99,
      75,     1,   100,    15,     5,    51,    74,    16,    77,   115,
      17,    81,   120,   121,    72,    74,    30,    45,    46,    47,
      31,   112,   113,   114,    32,    51,    33,    34,    12,    35,
      78,    79,    13,    36,    14,    75,    37,   -45,    22,    25,
      90,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,    94,   -41,    27,    28,    29,    48,
      38,    52,    15,    54,    33,   154,    16,    55,   156,    17,
     155,    56,    57,    45,    46,    47,    18,    71,     6,   110,
     111,   112,   113,   114,    76,    82,    58,    59,   159,   158,
       7,    60,    45,    46,    47,    61,    62,    63,    64,     8,
      80,    84,   153,    85,   167,    86,    87,    45,    46,    47,
      30,   101,    15,   117,    31,   118,    16,     9,    32,    17,
      33,    34,    15,    35,   122,    33,    16,    36,   123,    17,
      37,   -15,   127,    57,   -52,    49,   124,   125,   128,   130,
     129,   131,   132,   133,   147,   148,   149,    58,    59,   -41,
     152,   150,    60,   161,    38,   157,    61,    62,    63,    64,
      30,    33,   160,   162,    31,   163,   168,   166,    32,    57,
      33,    34,   165,    35,   116,   164,    83,    36,    33,     0,
      37,     0,     0,    58,    59,     0,    57,     0,    60,     0,
       0,     0,    61,    62,    63,    64,    91,     0,    33,   -41,
      58,    59,     0,     0,    38,    60,    57,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
      58,    59,     0,     0,     0,    60,     0,     0,     0,    61,
      62,    63,    96,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   102,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     104,   105,     0,     0,   108,   109,   110,   111,   112,   113,
     114
};

static const yytype_int16 yycheck[] =
{
      25,    25,    25,    31,    40,    41,    31,    31,    31,    37,
      19,    45,    37,    37,    37,    40,    40,    40,    43,    43,
      43,    14,    54,     6,    56,    57,     1,    58,    59,    60,
      39,     4,     6,     3,     0,    28,    19,     7,    40,    71,
      10,    43,    74,    75,    72,    19,     1,    72,    72,    72,
       5,    35,    36,    37,     9,    48,    11,    12,    21,    14,
      40,    41,    40,    18,    15,    39,    21,    22,    45,    21,
      45,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     1,    40,    45,    19,    45,    19,
      45,    40,     3,    19,    11,   127,     7,    19,   130,    10,
     128,    19,    19,   128,   128,   128,    17,    19,     1,    33,
      34,    35,    36,    37,    22,    40,    33,    34,   150,   147,
      13,    38,   147,   147,   147,    42,    43,    44,    45,    22,
      45,    23,   125,    20,   162,    45,    18,   162,   162,   162,
       1,    40,     3,    22,     5,     1,     7,    40,     9,    10,
      11,    12,     3,    14,    45,    11,     7,    18,    20,    10,
      21,    22,    19,    19,    20,    16,    24,    41,    20,    23,
      20,    20,    20,    20,    20,    20,    20,    33,    34,    40,
      45,    41,    38,    20,    45,    40,    42,    43,    44,    45,
       1,    11,    45,     8,     5,    24,    20,    40,     9,    19,
      11,    12,   160,    14,    72,   159,    48,    18,    11,    -1,
      21,    -1,    -1,    33,    34,    -1,    19,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    -1,    11,    40,
      33,    34,    -1,    -1,    45,    38,    19,    -1,    -1,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      43,    44,    45,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      27,    28,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    49,    50,    45,     0,     1,    13,    22,    40,
      51,    53,    21,    40,    15,     3,     7,    10,    17,    52,
      54,    61,    45,    40,    41,    21,    55,    45,    19,    45,
       1,     5,     9,    11,    12,    14,    18,    21,    45,    56,
      59,    60,    61,    62,    63,    67,    68,    71,    19,    16,
      57,    61,    40,    62,    19,    19,    19,    19,    33,    34,
      38,    42,    43,    44,    45,    66,    67,    68,    71,    72,
      73,    19,    62,    65,    19,    39,    22,    56,    40,    41,
      45,    56,    40,    57,    23,    20,    45,    18,    72,     1,
      45,    46,    64,    72,     1,    72,    45,    73,    73,    73,
       6,    40,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    72,    65,    22,     1,    69,
      72,    72,    45,    20,    24,    41,    58,    19,    20,    20,
      23,    20,    20,    20,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    20,    20,    20,
      41,    70,    45,    61,    72,    62,    72,    40,    62,    72,
      45,    20,     8,    24,    70,    58,    40,    62,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    51,    51,    52,
      52,    53,    54,    54,    55,    56,    56,    56,    57,    57,
      57,    58,    58,    59,    60,    60,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     2,     2,     4,     2,     2,
       3,     4,     5,     5,     3,     0,     2,     2,     3,     4,
       0,     4,     0,     2,     2,     3,     1,     1,     1,     3,
       7,     5,     5,     7,     5,     2,     3,     2,     1,     1,
       1,     0,     1,     1,     2,     0,     1,     0,     3,     4,
       4,     2,     0,     3,     0,     7,     4,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     1,     3,
       1,     1,     1,     3
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
#line 56 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){((yyval.node))=root=new_node("Program","Program");add_son(root,(yyvsp[-1].node));};}
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 58 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node) = new_node("Id",(yyvsp[-1].string));};}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 59 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){add_brother((yyvsp[-1].node),(yyvsp[0].node));} ;}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 60 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){add_brother((yyvsp[-1].node), (yyvsp[0].node));};}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){};}
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 64 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node) = (yyvsp[-1].node);};}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 65 "jac.y" /* yacc.c:1646  */
    {flagTreeErros = 0;}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)  = new_node("FieldDecl","FieldDecl");add_son((yyval.node),(yyvsp[-1].node));
                                                                      add_brother((yyval.node)->son, new_node("Id",(yyvsp[0].string)));};}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 69 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyvsp[-2].node)= new_node("FieldDecl","FieldDecl");
                                                                        add_son((yyvsp[-2].node),new_node((yyval.node)->son->type,(yyval.node)->son->type));
                                                                        add_brother((yyvsp[-2].node)->son,new_node("Id",(yyvsp[0].string))); add_brother((yyval.node),(yyvsp[-2].node));};}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node) = new_node("MethodDecl","MethodDecl");add_son((yyval.node),(yyvsp[-1].node));add_brother((yyvsp[-1].node),(yyvsp[0].node));};}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)= new_node("MethodHeader","MethodHeader");
                                                                            add_son((yyval.node),(yyvsp[-4].node)); 
                                                                          add_brother((yyvsp[-4].node),new_node("Id",(yyvsp[-3].string)));  
                                                                          add_brother((yyvsp[-4].node),(yyvsp[-1].node));};}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 81 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1)               {(yyval.node)= new_node("MethodHeader","MethodHeader");
                                                                            add_son((yyval.node),aux_node=new_node("Void","Void"));
                                                                            add_brother(aux_node,new_node("Id",(yyvsp[-3].string)));
                                                                            add_brother(aux_node,(yyvsp[-1].node));};}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)= new_node("MethodBody","MethodBody");add_son((yyval.node),(yyvsp[-1].node));};}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=NULL;};}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 90 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){  
                                                                                  add_brother((yyvsp[-1].node),(yyvsp[0].node));
                                                                                  (yyval.node)=(yyvsp[-1].node);
                                                                                };}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 94 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){ add_brother((yyvsp[-1].node),(yyvsp[0].node));
                                                                                (yyval.node)=(yyvsp[-1].node);
                                                                                };}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 99 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)= new_node("MethodParams","MethodParams");
                                                                                  aux2_node=new_node("ParamDecl","ParamDecl");
                                                                                  add_son(aux2_node,(yyvsp[-2].node)); 
                                                                                  add_brother((yyvsp[-2].node),new_node("Id",(yyvsp[-1].string))); 
                                                                                  add_brother(aux2_node,(yyvsp[0].node)); 
                                                                                  add_son((yyval.node),aux2_node);
                                                                                  };}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 106 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){ (yyval.node)= new_node("MethodParams","MethodParams");
                                                                                aux2_node = new_node("ParamDecl","ParamDecl");
                                                                                main_node = new_node("StringArray","StringArray");
                                                                                add_son((yyval.node),aux2_node);
                                                                                add_brother(main_node,new_node("Id",(yyvsp[0].string)));
                                                                                add_son(aux2_node,main_node);
                                                                                };}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 113 "jac.y" /* yacc.c:1646  */
    {(yyval.node)= new_node("MethodParams","MethodParams");}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 115 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node) = new_node("ParamDecl","ParamDecl");
                                                                        add_son((yyval.node),(yyvsp[-2].node));
                                                                        add_brother((yyvsp[-2].node),new_node("Id",(yyvsp[-1].string))); 
                                                                        add_brother((yyval.node),(yyvsp[0].node));};}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 119 "jac.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 122 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node) = (yyvsp[-1].node);};}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 124 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)  = new_node("VarDecl","VarDecl");add_son((yyval.node),(yyvsp[-1].node));
                                                                      add_brother((yyvsp[-1].node), new_node("Id",(yyvsp[0].string)));};}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 126 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyvsp[-2].node)= new_node("VarDecl","VarDecl");
                                                                        add_son((yyvsp[-2].node),new_node((yyval.node)->son->type,(yyval.node)->son->type));
                                                                        add_brother((yyvsp[-2].node)->son,new_node("Id",(yyvsp[0].string))); add_brother((yyval.node),(yyvsp[-2].node));};}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 131 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Bool","Bool");};}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 132 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Int","Int");};}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 133 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Double","Double");};}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 135 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){ 
                                                          if((cntbrothers((yyvsp[-1].node)))==1){
                                                                (yyval.node) = (yyvsp[-1].node);                                                            
                                                          }else{
                                                            (yyval.node) = new_node("Block","Block"); 
                                                            add_son((yyval.node),(yyvsp[-1].node));}
                                                            };}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 142 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("If","If");
                                                          add_son((yyval.node),(yyvsp[-4].node));
                                                          add_brother((yyvsp[-4].node),(yyvsp[-2].node));
                                                          add_brother((yyvsp[-4].node),(yyvsp[0].node));
                                                          };}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 147 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){
                                                          (yyval.node) = new_node("If","If");
                                                          add_son((yyval.node),(yyvsp[-2].node));
                                                          add_brother ((yyvsp[-2].node),(yyvsp[0].node));
                                                          add_brother ((yyvsp[-2].node),new_node("Block","Block"));
                                                        };}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 153 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("While","While");
                                                            add_son((yyval.node),(yyvsp[-2].node));
                                                            add_brother((yyvsp[-2].node),(yyvsp[0].node));

                                                        };}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 158 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("DoWhile","DoWhile");
                                                            add_son((yyval.node),(yyvsp[-5].node));
                                                            add_brother((yyvsp[-5].node),(yyvsp[-2].node));
                                                          };}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 162 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Print","Print");
                                                          add_son((yyval.node),(yyvsp[-2].node));

                                                        };}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 166 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[-1].node);};}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node) = new_node("Return","Return");
                                                                              if((yyvsp[-1].node)!=NULL){
                                                                                  add_son((yyval.node),(yyvsp[-1].node));
                                                                              }
                                                                              };}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 172 "jac.y" /* yacc.c:1646  */
    {flagTreeErros = 0;}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 174 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[0].node);};}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 175 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[0].node);};}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 176 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[0].node);};}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 177 "jac.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 179 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[0].node);};}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 180 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("StrLit",(yyvsp[0].string));};}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 182 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[-1].node);add_brother((yyvsp[-1].node),(yyvsp[0].node));};}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 183 "jac.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 185 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[0].node);};}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 186 "jac.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 189 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Assign","Assign");
                                                      aux_node= new_node("Id",(yyvsp[-2].string));
                                                      add_brother(aux_node,(yyvsp[0].node));
                                                      add_son((yyval.node),aux_node);};}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 195 "jac.y" /* yacc.c:1646  */
    {(yyval.node)= new_node("Call","Call");
                                                          aux_node = new_node("Id",(yyvsp[-3].string));
                                                          add_son((yyval.node),aux_node);
                                                          if((yyvsp[-1].node)!=NULL){
                                                          add_brother(aux_node,(yyvsp[-1].node));}
                                                          ;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 201 "jac.y" /* yacc.c:1646  */
    {;}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 203 "jac.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);
                                                  add_brother((yyvsp[-1].node),(yyvsp[0].node));}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 205 "jac.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 207 "jac.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);add_brother((yyvsp[-1].node),(yyvsp[0].node));}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "jac.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 212 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)= new_node("ParseArgs","ParseArgs");
                                                              add_son((yyval.node),aux2_node=new_node("Id",(yyvsp[-4].string)));
                                                              add_brother(aux2_node,(yyvsp[-2].node));
                                                              };}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 216 "jac.y" /* yacc.c:1646  */
    {flagTreeErros = 0;}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 219 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[0].node);};}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 220 "jac.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 222 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[0].node);};}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 223 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[0].node);};}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 224 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("And","And");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));};}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 227 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){ (yyval.node)=new_node("Or","Or");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));
                                                                };}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 231 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node) =new_node("Eq","Eq");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));
                                                                  };}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 235 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Geq","Geq");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));};}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 238 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Gt","Gt");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));};}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 241 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Leq","Leq");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));
                                                                  };}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 245 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Lt","Lt");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));};}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 248 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Neq","Neq");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));};}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 251 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Add","Add");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));};}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 254 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Sub","Sub");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));};}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 257 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Mul","Mul");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));};}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 260 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Div","Div");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));
                                                                  };}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 264 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Mod","Mod");
                                                                  add_son((yyval.node),(yyvsp[-2].node));
                                                                  add_brother((yyvsp[-2].node),(yyvsp[0].node));
                                                                  };}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 268 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Plus","Plus");
                                                                  add_son((yyval.node),(yyvsp[0].node));
                                                                  };}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 271 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Minus","Minus");
                                                                  add_son((yyval.node),(yyvsp[0].node));
                                                                  };}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 274 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Not","Not");
                                                                  add_son((yyval.node),(yyvsp[0].node));
                                                                  };}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 277 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Length","Length");
                                                                  add_son((yyval.node),new_node("Id",(yyvsp[-1].string)));
                                                                  };}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 280 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("Id",(yyvsp[0].string));
                                                                      };}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 282 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=(yyvsp[-1].node);};}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 283 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("BoolLit",(yyvsp[0].string));};}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 284 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("DecLit", (yyvsp[0].string));};}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 285 "jac.y" /* yacc.c:1646  */
    {if(flagTreeErros ==1){(yyval.node)=new_node("RealLit",(yyvsp[0].string));};}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 286 "jac.y" /* yacc.c:1646  */
    {flagTreeErros = 0;}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2072 "y.tab.c" /* yacc.c:1646  */
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
#line 289 "jac.y" /* yacc.c:1906  */


void yyerror (const char *s) {
  printf ("Line %d, col %lu: %s: %s\n", n_line, n_column-strlen(yytext), s, yytext);
}

int main(int argv, char **argc){
  if(argv > 1){
    if(strcmp(argc[1], "-l")==0 || strcmp(argc[1], "-1")==0){
      if(strcmp(argc[1], "-l")==0){
        flag = 1;
      }
      yylex();
    }
    else if(strcmp(argc[1], "-t")==0){
      flag=2;
      flagTreeErros = 1;
      yyparse();
      
      if(flagTreeErros == 1 && root!=NULL ){
        print_tree(root,0);
      }
    }
  }
  else{
    flag=2;
    yyparse();
  }
return 0;
}



