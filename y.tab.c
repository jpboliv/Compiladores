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
  #include "functions.h"
  #define NSYMS 100

 typedef struct _symtab{
  char *name;
  //nao pode ser so double(exemplo da aula)
  double value;
  }symtab;

  extern int flagTreeErros;

  symtab tab[NSYMS];

  int yylex(void);
  void yyerror(const char *s);

#line 86 "y.tab.c" /* yacc.c:339  */

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
    STRLIT = 302
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

#line 231 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   396

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

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
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    43,    44,    45,    46,    49,    50,    52,
      53,    56,    59,    60,    63,    65,    66,    67,    70,    71,
      72,    74,    75,    79,    81,    82,    85,    86,    87,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    99,    99,
      99,   100,   102,   102,   104,   105,   107,   108,   111,   113,
     114,   116,   117,   119,   120,   124,   125,   128,   128,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     148,   148,   149
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
  "STRLIT", "$accept", "Program", "auxProgram", "FieldDecl",
  "auxFieldDecl", "MethodDecl", "MethodHeader", "MethodBody",
  "AuxMethodBody", "FormalParams", "auxFormalParams", "VarDecl",
  "auxVarDecl", "Type", "Statement", "auxStatement1", "auxStatement2",
  "auxStatement4", "auxStatement5", "Assignment", "MethodInvocation",
  "AuxMethodInvocation1", "AuxMethodInvocation2", "ParseArgs", "Expr", YY_NULLPTR
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

#define YYPACT_NINF -32

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-32)))

#define YYTABLE_NINF -53

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,   -25,    19,    10,   -32,   133,    -1,    26,   133,    21,
     133,   133,   -32,    23,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,    18,    16,    45,    44,    72,   -32,    46,   138,   -32,
      75,    52,   -32,    58,    92,    89,    95,    97,   204,    98,
      49,   -17,   100,   138,    74,   138,    83,   -32,   -32,   -32,
      52,   112,   104,    96,   -32,   122,   204,     3,   188,   168,
     204,   204,   204,   -32,   -32,   -32,     5,   111,   -32,   -32,
     -32,   324,   204,    49,   132,   152,   204,   -32,   -32,   116,
     -32,   -32,   141,   134,   -32,   121,   145,   226,   146,   142,
     -32,   147,   324,   148,   244,    38,    38,   -32,   -32,   -32,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   262,   -32,   -32,   150,   154,   293,   324,
     129,   136,   -32,   131,    62,   -32,   204,    92,   -32,   204,
     140,   -32,   -32,   348,   337,    94,    94,   359,   359,    94,
      94,    38,    38,   -32,   -32,   -32,    92,   -32,   -32,   204,
     -32,   116,   -32,   -32,   135,   280,   174,   311,   -32,   -32,
     293,   -32,   121,   143,    92,   169,   -32,   -32,   -32,   -32,
     -32
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     5,     2,     3,     4,    26,    28,
      27,     0,     0,     0,     0,     0,     7,     0,     0,    11,
       9,    20,    10,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    39,    40,
      20,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,    81,    80,    79,    77,     0,    57,    58,
      59,    46,     0,     0,     0,     0,     0,    14,    15,    25,
      16,    35,     0,     0,    13,    22,     0,     0,     0,     0,
      43,     0,    42,     0,     0,    73,    74,    75,    76,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    29,     0,     0,    54,    48,
       0,     0,    12,     0,     0,    18,     0,     0,    56,     0,
       0,    82,    78,    60,    61,    66,    64,    62,    67,    63,
      65,    68,    69,    70,    71,    72,     0,    50,    49,     0,
      51,    25,    23,    19,     0,     0,    31,     0,    34,    32,
      54,    24,    22,     0,     0,     0,    53,    21,    33,    30,
      55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -32,   -32,   101,   -32,   -32,   -32,   -32,   -32,   -16,   144,
      29,   -32,    37,    -3,   -31,   -32,   -32,   119,   -32,   -28,
     -27,   -32,    33,   -20,   -24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    22,    11,    23,    29,    42,    52,
     125,    43,   121,    44,    45,    46,    91,    74,    67,    68,
      69,   117,   150,    70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    48,    75,    55,    88,     1,    47,    48,    49,    73,
      24,    98,    47,    48,    49,    47,    48,    47,    48,     4,
      49,     3,    76,    49,    75,    49,    18,    78,    53,    80,
      19,     5,    87,    20,    92,    94,    95,    96,    97,    12,
      21,    13,    73,    15,    76,    47,    48,    53,   113,    89,
      33,   118,   119,    49,    34,    18,    26,    27,    35,    19,
      36,    37,    20,    38,    25,    18,    28,    39,    51,    19,
      40,   -45,    20,   110,   111,   112,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   -41,
      30,    31,    32,    33,    50,    41,   156,    34,    54,    47,
      48,    35,   155,    36,    37,   157,    38,    49,    56,    14,
      39,    16,    17,    40,    57,   159,    58,    72,    47,    48,
      79,   154,    77,    81,    84,   160,    49,   108,   109,   110,
     111,   112,   -41,   169,     6,    83,    47,    48,    41,    33,
      86,    18,    85,    34,    49,    19,     7,    35,    20,    36,
      37,    99,    38,   116,   115,    -6,    39,   120,   123,    40,
     -17,   122,   124,    36,   126,   129,   128,   130,   131,    93,
     147,    59,   -52,     8,   148,   151,   152,   153,   -41,    36,
     158,   162,   164,   168,    41,    60,    61,    59,   161,   170,
      62,   167,   114,   166,    82,    63,    64,    65,    66,    36,
       0,    60,    61,     0,     0,     0,    62,    59,     0,     0,
       0,    63,    64,    65,    66,    36,     0,     0,     0,     0,
       0,    60,    61,    59,     0,     0,    62,     0,     0,     0,
       0,    63,    64,    65,    66,    90,     0,    60,    61,     0,
       0,     0,    62,     0,     0,     0,   127,    63,    64,    65,
      66,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   132,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   146,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     163,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,     0,   149,   165,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   100,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   102,   103,     0,     0,
     106,   107,   108,   109,   110,   111,   112
};

static const yytype_int16 yycheck[] =
{
      28,    28,    19,    34,     1,     4,    34,    34,    28,    40,
      13,     6,    40,    40,    34,    43,    43,    45,    45,     0,
      40,    46,    39,    43,    19,    45,     3,    43,    31,    45,
       7,    21,    56,    10,    58,    59,    60,    61,    62,    40,
      17,    15,    73,    22,    39,    73,    73,    50,    72,    46,
       1,    75,    76,    73,     5,     3,    40,    41,     9,     7,
      11,    12,    10,    14,    46,     3,    21,    18,    16,     7,
      21,    22,    10,    35,    36,    37,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    40,
      46,    19,    46,     1,    19,    46,   127,     5,    40,   127,
     127,     9,   126,    11,    12,   129,    14,   127,    19,     8,
      18,    10,    11,    21,    19,   146,    19,    19,   146,   146,
      46,   124,    22,    40,    20,   149,   146,    33,    34,    35,
      36,    37,    40,   164,     1,    23,   164,   164,    46,     1,
      18,     3,    46,     5,   164,     7,    13,     9,    10,    11,
      12,    40,    14,     1,    22,    22,    18,    41,    24,    21,
      22,    20,    41,    11,    19,    23,    20,    20,    20,     1,
      20,    19,    20,    40,    20,    46,    40,    46,    40,    11,
      40,    46,     8,    40,    46,    33,    34,    19,   151,    20,
      38,   162,    73,   160,    50,    43,    44,    45,    46,    11,
      -1,    33,    34,    -1,    -1,    -1,    38,    19,    -1,    -1,
      -1,    43,    44,    45,    46,    11,    -1,    -1,    -1,    -1,
      -1,    33,    34,    19,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    -1,    33,    34,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    20,    43,    44,    45,
      46,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    20,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    27,    28,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    49,    46,     0,    21,     1,    13,    40,    50,
      51,    53,    40,    15,    50,    22,    50,    50,     3,     7,
      10,    17,    52,    54,    61,    46,    40,    41,    21,    55,
      46,    19,    46,     1,     5,     9,    11,    12,    14,    18,
      21,    46,    56,    59,    61,    62,    63,    67,    68,    71,
      19,    16,    57,    61,    40,    62,    19,    19,    19,    19,
      33,    34,    38,    43,    44,    45,    46,    66,    67,    68,
      71,    72,    19,    62,    65,    19,    39,    22,    56,    46,
      56,    40,    57,    23,    20,    46,    18,    72,     1,    46,
      47,    64,    72,     1,    72,    72,    72,    72,     6,    40,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    72,    65,    22,     1,    69,    72,    72,
      41,    60,    20,    24,    41,    58,    19,    20,    20,    23,
      20,    20,    20,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    20,    20,    20,    41,
      70,    46,    40,    46,    61,    72,    62,    72,    40,    62,
      72,    60,    46,    20,     8,    24,    70,    58,    40,    62,
      20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    51,    51,    52,
      52,    53,    54,    54,    55,    56,    56,    56,    57,    57,
      57,    58,    58,    59,    60,    60,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     2,     2,     0,     4,     2,     2,
       3,     4,     5,     5,     3,     2,     2,     0,     3,     4,
       0,     4,     0,     4,     3,     0,     1,     1,     1,     3,
       7,     5,     5,     7,     5,     2,     3,     2,     1,     1,
       1,     0,     1,     1,     2,     0,     1,     0,     3,     4,
       4,     2,     0,     3,     0,     7,     4,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     1,     3,     1,
       1,     1,     3
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
#line 41 "jac.y" /* yacc.c:1646  */
    {;}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "jac.y" /* yacc.c:1646  */
    {;}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 44 "jac.y" /* yacc.c:1646  */
    {;}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 45 "jac.y" /* yacc.c:1646  */
    {;}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 46 "jac.y" /* yacc.c:1646  */
    {;}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 49 "jac.y" /* yacc.c:1646  */
    {;}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 50 "jac.y" /* yacc.c:1646  */
    {flagTreeErros = 0;}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 52 "jac.y" /* yacc.c:1646  */
    {;}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "jac.y" /* yacc.c:1646  */
    {;}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "jac.y" /* yacc.c:1646  */
    {;}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 59 "jac.y" /* yacc.c:1646  */
    {;}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "jac.y" /* yacc.c:1646  */
    {;}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 63 "jac.y" /* yacc.c:1646  */
    {;}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "jac.y" /* yacc.c:1646  */
    {;}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "jac.y" /* yacc.c:1646  */
    {;}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 67 "jac.y" /* yacc.c:1646  */
    {;}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "jac.y" /* yacc.c:1646  */
    {;}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 71 "jac.y" /* yacc.c:1646  */
    {;}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 72 "jac.y" /* yacc.c:1646  */
    {;}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 74 "jac.y" /* yacc.c:1646  */
    {;}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 75 "jac.y" /* yacc.c:1646  */
    {;}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 79 "jac.y" /* yacc.c:1646  */
    {;}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 81 "jac.y" /* yacc.c:1646  */
    {;}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "jac.y" /* yacc.c:1646  */
    {;}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 85 "jac.y" /* yacc.c:1646  */
    {;}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 86 "jac.y" /* yacc.c:1646  */
    {;}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 87 "jac.y" /* yacc.c:1646  */
    {;}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 89 "jac.y" /* yacc.c:1646  */
    {;}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 90 "jac.y" /* yacc.c:1646  */
    {;}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 91 "jac.y" /* yacc.c:1646  */
    {;}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 92 "jac.y" /* yacc.c:1646  */
    {;}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 93 "jac.y" /* yacc.c:1646  */
    {;}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 94 "jac.y" /* yacc.c:1646  */
    {;}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 95 "jac.y" /* yacc.c:1646  */
    {;}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 96 "jac.y" /* yacc.c:1646  */
    {;}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 97 "jac.y" /* yacc.c:1646  */
    {flagTreeErros = 0;}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 99 "jac.y" /* yacc.c:1646  */
    {;}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 100 "jac.y" /* yacc.c:1646  */
    {;}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 102 "jac.y" /* yacc.c:1646  */
    {;}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 104 "jac.y" /* yacc.c:1646  */
    {;}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 105 "jac.y" /* yacc.c:1646  */
    {;}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 107 "jac.y" /* yacc.c:1646  */
    {;}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 108 "jac.y" /* yacc.c:1646  */
    {;}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 111 "jac.y" /* yacc.c:1646  */
    {;}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 113 "jac.y" /* yacc.c:1646  */
    {;}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 114 "jac.y" /* yacc.c:1646  */
    {flagTreeErros = 0;}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 116 "jac.y" /* yacc.c:1646  */
    {;}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 117 "jac.y" /* yacc.c:1646  */
    {;}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 119 "jac.y" /* yacc.c:1646  */
    {;}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 120 "jac.y" /* yacc.c:1646  */
    {;}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 124 "jac.y" /* yacc.c:1646  */
    {;}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 125 "jac.y" /* yacc.c:1646  */
    {flagTreeErros = 0;}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 128 "jac.y" /* yacc.c:1646  */
    {;}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 129 "jac.y" /* yacc.c:1646  */
    {;}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 130 "jac.y" /* yacc.c:1646  */
    {;}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 131 "jac.y" /* yacc.c:1646  */
    {;}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 132 "jac.y" /* yacc.c:1646  */
    {;}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 133 "jac.y" /* yacc.c:1646  */
    {;}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 134 "jac.y" /* yacc.c:1646  */
    {;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 135 "jac.y" /* yacc.c:1646  */
    {;}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 136 "jac.y" /* yacc.c:1646  */
    {;}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 137 "jac.y" /* yacc.c:1646  */
    {;}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 138 "jac.y" /* yacc.c:1646  */
    {;}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 139 "jac.y" /* yacc.c:1646  */
    {;}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 140 "jac.y" /* yacc.c:1646  */
    {;}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 141 "jac.y" /* yacc.c:1646  */
    {;}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 142 "jac.y" /* yacc.c:1646  */
    {;}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 143 "jac.y" /* yacc.c:1646  */
    {;}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 144 "jac.y" /* yacc.c:1646  */
    {;}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 145 "jac.y" /* yacc.c:1646  */
    {;}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 146 "jac.y" /* yacc.c:1646  */
    {;}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 147 "jac.y" /* yacc.c:1646  */
    {;}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 148 "jac.y" /* yacc.c:1646  */
    {;}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 149 "jac.y" /* yacc.c:1646  */
    {flagTreeErros = 0;}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1914 "y.tab.c" /* yacc.c:1646  */
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
#line 153 "jac.y" /* yacc.c:1906  */


/*symtab *symlook(char *varname){
  int i;
  for(i=0; i<NSYMS; i++){
    if(tab[i].name && strcmp(varname, tab[i].name)==0)
      return &tab[i];
      if(!tab[i].name){
        tab[i].name=varname;
        return &tab[i];
      }
  }
  yyerror("tamanha maximo ultrapassado");
 } */
