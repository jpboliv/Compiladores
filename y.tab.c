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
#line 1 "jac.y" /* yacc.c:339  */

  #include <stdio.h>
  #include <string.h>

  int yylex(void);
  void yyerror(const char *s);

#line 74 "y.tab.c" /* yacc.c:339  */

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
    RESERVED = 297,
    REALLIT = 298,
    DECLIT = 299,
    BOOLLIT = 300,
    ID = 301,
    STRLIT = 302,
    LSQ = 303,
    RSQ = 304
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
#define RESERVED 297
#define REALLIT 298
#define DECLIT 299
#define BOOLLIT 300
#define ID 301
#define STRLIT 302
#define LSQ 303
#define RSQ 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 223 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    30,    30,    30,    31,    34,    35,    37,
      38,    41,    44,    45,    48,    49,    51,    53,    54,    55,
      58,    59,    61,    62,    65,    66,    67,    70,    71,    72,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    84,
      84,    84,    84,    85,    85,    89,    90,    92,    93,    96,
      98,    99,   101,   102,   104,   105,   109,   110,   113,   113,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   133,   133,   134
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
  "SEMI", "COMMA", "RESERVED", "REALLIT", "DECLIT", "BOOLLIT", "ID",
  "STRLIT", "LSQ", "RSQ", "$accept", "Program", "auxProgram", "FieldDecl",
  "auxFieldDecl", "MethodDecl", "MethodHeader", "AuxMethodHelper2",
  "MethodBody", "AuxMethodBody", "FormalParams", "auxFormalParams",
  "VarDecl", "auxVarDecl", "Type", "Statement", "auxStatement1",
  "auxStatement2", "auxStatement4", "auxStatement5", "Assignment",
  "MethodInvocation", "AuxMethodInvocation1", "AuxMethodInvocation2",
  "ParseArgs", "Expr", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -33

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-33)))

#define YYTABLE_NINF -54

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   -19,    21,    20,   -33,    37,     6,    13,    37,    11,
      37,    37,   -33,   110,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,    -3,    27,    14,    38,   138,   -33,   -12,   122,    22,
     152,    59,    64,    67,   143,    68,    84,    -9,    66,   138,
      44,   138,    52,   -33,   -33,   -33,   122,    69,    81,    99,
     103,   -33,    85,   -33,   115,   143,     3,    65,   157,   -33,
     -33,   -33,    12,    95,   -33,   -33,   -33,   282,   143,    84,
     118,    36,   143,   -33,   -33,   101,   -33,   -33,   126,   114,
     -33,   127,   -33,   124,   148,   179,   149,   151,   -33,   155,
     282,   163,   198,   -33,   -33,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   -33,   217,
     -33,   -33,   165,   170,   250,   282,   125,   132,   -33,   -33,
     131,    51,   -33,   143,   152,   -33,   143,   153,   -33,   -33,
     308,   296,   326,   326,   320,   320,   326,   326,   144,   144,
     156,   156,   156,   152,   -33,   -33,   143,   -33,   101,   -33,
     -33,   145,   236,   187,   268,   -33,   -33,   250,   -33,   124,
     180,   152,   176,   -33,   -33,   -33,   -33,   -33
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     5,     2,     3,     4,    27,    29,
      28,     0,     0,     0,     0,     0,    11,    10,    15,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    15,     0,     0,     0,
       0,    14,     0,    38,     0,     0,     0,     0,     0,    82,
      81,    80,    78,     0,    58,    59,    60,    47,     0,     0,
       0,     0,     0,    16,    17,    26,    18,    36,     0,    10,
       7,     0,    12,    23,     0,     0,     0,     0,    44,     0,
      43,     0,     0,    77,    37,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,     0,     0,     0,    76,     0,
      45,    30,     0,     0,    55,    49,     0,     0,    13,     9,
       0,     0,    20,     0,     0,    57,     0,     0,    83,    79,
      61,    62,    67,    65,    63,    68,    64,    66,    69,    70,
      71,    72,    73,     0,    51,    50,     0,    52,    26,    24,
      21,     0,     0,    31,     0,    35,    33,    55,    25,    23,
       0,     0,     0,    54,    22,    34,    32,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -33,   -33,    93,   -33,   140,   -33,   -33,   175,   -33,    -7,
     -33,    63,   -33,    49,     7,   -27,   -33,   -33,   169,   -33,
     -25,   -24,   -33,    82,   -17,   -32
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    48,    11,    22,    50,    26,    38,
      51,   122,    39,   117,    40,    41,    42,    89,    70,    63,
      64,    65,   113,   147,    66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    44,     1,    54,    86,    43,    44,    46,    45,    69,
      71,    43,    44,    45,    43,    44,    43,    44,    93,    45,
      23,     4,    45,    85,    45,    90,    92,     3,    13,    47,
      72,    71,    74,    15,    76,    52,   109,   112,     6,   114,
     115,     5,    69,    24,    43,    44,    12,    32,    25,    87,
       7,    72,    45,    52,    18,    58,   -53,    28,    19,    -6,
      27,    20,    53,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,    32,     8,    55,    59,
      60,    61,    62,    56,    58,    29,    57,    68,    73,    30,
      75,   152,    77,    31,   154,    32,    33,   153,    34,    43,
      44,    14,    35,    16,    17,    36,   -46,    45,    59,    60,
      61,    62,    88,    18,   157,    79,   156,    19,    43,    44,
      20,    80,    81,    82,   -42,    18,    45,    21,   151,    19,
      37,    83,    20,    84,   166,    94,    43,    44,    49,    29,
     111,    18,   116,    30,    45,    19,   118,    31,    20,    32,
      33,   120,    34,    29,    32,    47,    35,    30,    91,    36,
     -19,    31,    58,    32,    33,   121,    34,   123,    32,   125,
      35,   148,   149,    36,   126,   127,    58,   150,   -42,   105,
     106,   107,   108,   128,    37,   144,    59,    60,    61,    62,
     145,   159,   -42,   155,   108,   161,   167,   158,    37,   124,
      59,    60,    61,    62,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   129,   119,
     165,    78,   164,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   143,   110,   163,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   160,     0,     0,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
       0,   146,   162,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    95,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    97,    98,     0,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   103,
     104,   105,   106,   107,   108
};

static const yytype_int16 yycheck[] =
{
      25,    25,     4,    30,     1,    30,    30,    19,    25,    36,
      19,    36,    36,    30,    39,    39,    41,    41,     6,    36,
      13,     0,    39,    55,    41,    57,    58,    46,    15,    41,
      39,    19,    39,    22,    41,    28,    68,     1,     1,    71,
      72,    21,    69,    46,    69,    69,    40,    11,    21,    46,
      13,    39,    69,    46,     3,    19,    20,    19,     7,    22,
      46,    10,    40,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    11,    40,    19,    43,
      44,    45,    46,    19,    19,     1,    19,    19,    22,     5,
      46,   123,    40,     9,   126,    11,    12,   124,    14,   124,
     124,     8,    18,    10,    11,    21,    22,   124,    43,    44,
      45,    46,    47,     3,   146,    46,   143,     7,   143,   143,
      10,    40,    23,    20,    40,     3,   143,    17,   121,     7,
      46,    46,    10,    18,   161,    40,   161,   161,    16,     1,
      22,     3,    41,     5,   161,     7,    20,     9,    10,    11,
      12,    24,    14,     1,    11,    41,    18,     5,     1,    21,
      22,     9,    19,    11,    12,    41,    14,    19,    11,    20,
      18,    46,    40,    21,    23,    20,    19,    46,    40,    35,
      36,    37,    38,    20,    46,    20,    43,    44,    45,    46,
      20,    46,    40,    40,    38,     8,    20,   148,    46,    20,
      43,    44,    45,    46,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    20,    79,
      40,    46,   159,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    20,    69,   157,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    27,    28,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    33,
      34,    35,    36,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    51,    46,     0,    21,     1,    13,    40,    52,
      53,    55,    40,    15,    52,    22,    52,    52,     3,     7,
      10,    17,    56,    64,    46,    21,    58,    46,    19,     1,
       5,     9,    11,    12,    14,    18,    21,    46,    59,    62,
      64,    65,    66,    70,    71,    74,    19,    41,    54,    16,
      57,    60,    64,    40,    65,    19,    19,    19,    19,    43,
      44,    45,    46,    69,    70,    71,    74,    75,    19,    65,
      68,    19,    39,    22,    59,    46,    59,    40,    57,    46,
      40,    23,    20,    46,    18,    75,     1,    46,    47,    67,
      75,     1,    75,     6,    40,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    75,
      68,    22,     1,    72,    75,    75,    41,    63,    20,    54,
      24,    41,    61,    19,    20,    20,    23,    20,    20,    20,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    20,    20,    20,    41,    73,    46,    40,
      46,    64,    75,    65,    75,    40,    65,    75,    63,    46,
      20,     8,    24,    73,    61,    40,    65,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    52,    52,    53,    53,    54,
      54,    55,    56,    56,    57,    57,    58,    59,    59,    59,
      60,    60,    61,    61,    62,    63,    63,    64,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     2,     2,     0,     6,     2,     3,
       0,     4,     5,     5,     1,     0,     3,     2,     2,     0,
       3,     4,     4,     0,     4,     3,     0,     1,     1,     1,
       3,     5,     7,     5,     7,     5,     2,     3,     2,     1,
       1,     1,     0,     1,     1,     2,     0,     1,     0,     3,
       4,     4,     2,     0,     3,     0,     7,     4,     1,     1,
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
#line 29 "jac.y" /* yacc.c:1661  */
    {;}
#line 1456 "y.tab.c" /* yacc.c:1661  */
    break;

  case 5:
#line 30 "jac.y" /* yacc.c:1661  */
    {;}
#line 1462 "y.tab.c" /* yacc.c:1661  */
    break;

  case 6:
#line 31 "jac.y" /* yacc.c:1661  */
    {;}
#line 1468 "y.tab.c" /* yacc.c:1661  */
    break;

  case 7:
#line 34 "jac.y" /* yacc.c:1661  */
    {;}
#line 1474 "y.tab.c" /* yacc.c:1661  */
    break;

  case 8:
#line 35 "jac.y" /* yacc.c:1661  */
    {;}
#line 1480 "y.tab.c" /* yacc.c:1661  */
    break;

  case 9:
#line 37 "jac.y" /* yacc.c:1661  */
    {;}
#line 1486 "y.tab.c" /* yacc.c:1661  */
    break;

  case 10:
#line 38 "jac.y" /* yacc.c:1661  */
    {;}
#line 1492 "y.tab.c" /* yacc.c:1661  */
    break;

  case 11:
#line 41 "jac.y" /* yacc.c:1661  */
    {;}
#line 1498 "y.tab.c" /* yacc.c:1661  */
    break;

  case 12:
#line 44 "jac.y" /* yacc.c:1661  */
    {;}
#line 1504 "y.tab.c" /* yacc.c:1661  */
    break;

  case 14:
#line 48 "jac.y" /* yacc.c:1661  */
    {;}
#line 1510 "y.tab.c" /* yacc.c:1661  */
    break;

  case 15:
#line 49 "jac.y" /* yacc.c:1661  */
    {;}
#line 1516 "y.tab.c" /* yacc.c:1661  */
    break;

  case 16:
#line 51 "jac.y" /* yacc.c:1661  */
    {;}
#line 1522 "y.tab.c" /* yacc.c:1661  */
    break;

  case 17:
#line 53 "jac.y" /* yacc.c:1661  */
    {;}
#line 1528 "y.tab.c" /* yacc.c:1661  */
    break;

  case 18:
#line 54 "jac.y" /* yacc.c:1661  */
    {;}
#line 1534 "y.tab.c" /* yacc.c:1661  */
    break;

  case 19:
#line 55 "jac.y" /* yacc.c:1661  */
    {;}
#line 1540 "y.tab.c" /* yacc.c:1661  */
    break;

  case 20:
#line 58 "jac.y" /* yacc.c:1661  */
    {;}
#line 1546 "y.tab.c" /* yacc.c:1661  */
    break;

  case 21:
#line 59 "jac.y" /* yacc.c:1661  */
    {;}
#line 1552 "y.tab.c" /* yacc.c:1661  */
    break;

  case 22:
#line 61 "jac.y" /* yacc.c:1661  */
    {;}
#line 1558 "y.tab.c" /* yacc.c:1661  */
    break;

  case 23:
#line 62 "jac.y" /* yacc.c:1661  */
    {;}
#line 1564 "y.tab.c" /* yacc.c:1661  */
    break;

  case 24:
#line 65 "jac.y" /* yacc.c:1661  */
    {;}
#line 1570 "y.tab.c" /* yacc.c:1661  */
    break;

  case 25:
#line 66 "jac.y" /* yacc.c:1661  */
    {;}
#line 1576 "y.tab.c" /* yacc.c:1661  */
    break;

  case 26:
#line 67 "jac.y" /* yacc.c:1661  */
    {;}
#line 1582 "y.tab.c" /* yacc.c:1661  */
    break;

  case 27:
#line 70 "jac.y" /* yacc.c:1661  */
    {;}
#line 1588 "y.tab.c" /* yacc.c:1661  */
    break;

  case 28:
#line 71 "jac.y" /* yacc.c:1661  */
    {;}
#line 1594 "y.tab.c" /* yacc.c:1661  */
    break;

  case 29:
#line 72 "jac.y" /* yacc.c:1661  */
    {;}
#line 1600 "y.tab.c" /* yacc.c:1661  */
    break;

  case 30:
#line 74 "jac.y" /* yacc.c:1661  */
    {;}
#line 1606 "y.tab.c" /* yacc.c:1661  */
    break;

  case 31:
#line 75 "jac.y" /* yacc.c:1661  */
    {;}
#line 1612 "y.tab.c" /* yacc.c:1661  */
    break;

  case 32:
#line 76 "jac.y" /* yacc.c:1661  */
    {;}
#line 1618 "y.tab.c" /* yacc.c:1661  */
    break;

  case 33:
#line 77 "jac.y" /* yacc.c:1661  */
    {;}
#line 1624 "y.tab.c" /* yacc.c:1661  */
    break;

  case 34:
#line 78 "jac.y" /* yacc.c:1661  */
    {;}
#line 1630 "y.tab.c" /* yacc.c:1661  */
    break;

  case 35:
#line 79 "jac.y" /* yacc.c:1661  */
    {;}
#line 1636 "y.tab.c" /* yacc.c:1661  */
    break;

  case 36:
#line 80 "jac.y" /* yacc.c:1661  */
    {;}
#line 1642 "y.tab.c" /* yacc.c:1661  */
    break;

  case 37:
#line 81 "jac.y" /* yacc.c:1661  */
    {;}
#line 1648 "y.tab.c" /* yacc.c:1661  */
    break;

  case 38:
#line 82 "jac.y" /* yacc.c:1661  */
    {;}
#line 1654 "y.tab.c" /* yacc.c:1661  */
    break;

  case 42:
#line 84 "jac.y" /* yacc.c:1661  */
    {;}
#line 1660 "y.tab.c" /* yacc.c:1661  */
    break;

  case 44:
#line 85 "jac.y" /* yacc.c:1661  */
    {;}
#line 1666 "y.tab.c" /* yacc.c:1661  */
    break;

  case 45:
#line 89 "jac.y" /* yacc.c:1661  */
    {;}
#line 1672 "y.tab.c" /* yacc.c:1661  */
    break;

  case 46:
#line 90 "jac.y" /* yacc.c:1661  */
    {;}
#line 1678 "y.tab.c" /* yacc.c:1661  */
    break;

  case 47:
#line 92 "jac.y" /* yacc.c:1661  */
    {;}
#line 1684 "y.tab.c" /* yacc.c:1661  */
    break;

  case 48:
#line 93 "jac.y" /* yacc.c:1661  */
    {;}
#line 1690 "y.tab.c" /* yacc.c:1661  */
    break;

  case 49:
#line 96 "jac.y" /* yacc.c:1661  */
    {;}
#line 1696 "y.tab.c" /* yacc.c:1661  */
    break;

  case 50:
#line 98 "jac.y" /* yacc.c:1661  */
    {;}
#line 1702 "y.tab.c" /* yacc.c:1661  */
    break;

  case 51:
#line 99 "jac.y" /* yacc.c:1661  */
    {;}
#line 1708 "y.tab.c" /* yacc.c:1661  */
    break;

  case 52:
#line 101 "jac.y" /* yacc.c:1661  */
    {;}
#line 1714 "y.tab.c" /* yacc.c:1661  */
    break;

  case 53:
#line 102 "jac.y" /* yacc.c:1661  */
    {;}
#line 1720 "y.tab.c" /* yacc.c:1661  */
    break;

  case 54:
#line 104 "jac.y" /* yacc.c:1661  */
    {;}
#line 1726 "y.tab.c" /* yacc.c:1661  */
    break;

  case 55:
#line 105 "jac.y" /* yacc.c:1661  */
    {;}
#line 1732 "y.tab.c" /* yacc.c:1661  */
    break;

  case 56:
#line 109 "jac.y" /* yacc.c:1661  */
    {;}
#line 1738 "y.tab.c" /* yacc.c:1661  */
    break;

  case 57:
#line 110 "jac.y" /* yacc.c:1661  */
    {;}
#line 1744 "y.tab.c" /* yacc.c:1661  */
    break;

  case 60:
#line 113 "jac.y" /* yacc.c:1661  */
    {;}
#line 1750 "y.tab.c" /* yacc.c:1661  */
    break;

  case 61:
#line 114 "jac.y" /* yacc.c:1661  */
    {;}
#line 1756 "y.tab.c" /* yacc.c:1661  */
    break;

  case 62:
#line 115 "jac.y" /* yacc.c:1661  */
    {;}
#line 1762 "y.tab.c" /* yacc.c:1661  */
    break;

  case 63:
#line 116 "jac.y" /* yacc.c:1661  */
    {;}
#line 1768 "y.tab.c" /* yacc.c:1661  */
    break;

  case 64:
#line 117 "jac.y" /* yacc.c:1661  */
    {;}
#line 1774 "y.tab.c" /* yacc.c:1661  */
    break;

  case 65:
#line 118 "jac.y" /* yacc.c:1661  */
    {;}
#line 1780 "y.tab.c" /* yacc.c:1661  */
    break;

  case 66:
#line 119 "jac.y" /* yacc.c:1661  */
    {;}
#line 1786 "y.tab.c" /* yacc.c:1661  */
    break;

  case 67:
#line 120 "jac.y" /* yacc.c:1661  */
    {;}
#line 1792 "y.tab.c" /* yacc.c:1661  */
    break;

  case 68:
#line 121 "jac.y" /* yacc.c:1661  */
    {;}
#line 1798 "y.tab.c" /* yacc.c:1661  */
    break;

  case 69:
#line 122 "jac.y" /* yacc.c:1661  */
    {;}
#line 1804 "y.tab.c" /* yacc.c:1661  */
    break;

  case 70:
#line 123 "jac.y" /* yacc.c:1661  */
    {;}
#line 1810 "y.tab.c" /* yacc.c:1661  */
    break;

  case 71:
#line 124 "jac.y" /* yacc.c:1661  */
    {;}
#line 1816 "y.tab.c" /* yacc.c:1661  */
    break;

  case 72:
#line 125 "jac.y" /* yacc.c:1661  */
    {;}
#line 1822 "y.tab.c" /* yacc.c:1661  */
    break;

  case 73:
#line 126 "jac.y" /* yacc.c:1661  */
    {;}
#line 1828 "y.tab.c" /* yacc.c:1661  */
    break;

  case 74:
#line 127 "jac.y" /* yacc.c:1661  */
    {;}
#line 1834 "y.tab.c" /* yacc.c:1661  */
    break;

  case 75:
#line 128 "jac.y" /* yacc.c:1661  */
    {;}
#line 1840 "y.tab.c" /* yacc.c:1661  */
    break;

  case 76:
#line 129 "jac.y" /* yacc.c:1661  */
    {;}
#line 1846 "y.tab.c" /* yacc.c:1661  */
    break;

  case 77:
#line 130 "jac.y" /* yacc.c:1661  */
    {;}
#line 1852 "y.tab.c" /* yacc.c:1661  */
    break;

  case 78:
#line 131 "jac.y" /* yacc.c:1661  */
    {;}
#line 1858 "y.tab.c" /* yacc.c:1661  */
    break;

  case 79:
#line 132 "jac.y" /* yacc.c:1661  */
    {;}
#line 1864 "y.tab.c" /* yacc.c:1661  */
    break;

  case 82:
#line 133 "jac.y" /* yacc.c:1661  */
    {;}
#line 1870 "y.tab.c" /* yacc.c:1661  */
    break;

  case 83:
#line 134 "jac.y" /* yacc.c:1661  */
    {;}
#line 1876 "y.tab.c" /* yacc.c:1661  */
    break;


#line 1880 "y.tab.c" /* yacc.c:1661  */
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
#line 145 "jac.y" /* yacc.c:1906  */

