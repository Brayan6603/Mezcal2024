/* A Bison parser, made by GNU Bison 3.5.1.  */

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
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "compiler/grammar.y"


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include <memory>


extern char *yytext;
int yylex(void);
void yyerror(char const *);
std::string result;

#line 85 "grammar.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "compiler/grammar.y"

    #include <string>

#line 132 "grammar.tab.c"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    COLON = 259,
    RIGHT_ARROW = 260,
    LEFT_CURLY_BRACE = 261,
    RIGHT_CURLY_BRACE = 262,
    SEMICOLON = 263,
    LEFT_PARENTHESIS = 264,
    RIGHT_PARENTHESIS = 265,
    SINGLECOMMENT = 266,
    MULTILINECOMMENT = 267,
    CHARACTERS_BLOCK = 268,
    COMMA = 269,
    FALSE = 270,
    TRUE = 271,
    DIS = 272,
    INT = 273,
    DEC = 274,
    BLN = 275,
    STR = 276,
    AS = 277,
    INT_VALUE = 278,
    DEC_VALUE = 279,
    SHOW = 280,
    DOLLAR = 281,
    LOAD = 282,
    DOUBLE_COLON = 283,
    LEFT_BRACKET = 284,
    RIGHT_BRACKET = 285,
    VOID = 286,
    MAIN = 287,
    ANSWER = 288,
    MINOR = 289,
    MAYOR = 290,
    EQUAL = 291,
    MINOR_EQUAL = 292,
    MAYOR_EQUAL = 293,
    NOT_EQUAL = 294,
    RIGHT_INTER = 295,
    AT = 296,
    LESS = 297,
    PLUS = 298,
    MULT = 299,
    DIV = 300,
    MOD = 301,
    INVERSE_SLASH = 302,
    SHARP = 303,
    INTEGRATED = 304,
    DOT = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef std::string YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */



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
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   615

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

#define YYUNDEFTOK  2
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    27,    27,    31,    32,    36,    41,    59,    77,    79,
      83,    85,    87,    89,    91,    95,    97,    99,   101,   105,
     106,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   133,   137,   141,   143,   147,   149,   153,   155,   160,
     162,   166,   170,   174,   176,   178,   180,   182,   184,   188,
     190,   195,   197,   199,   201,   203,   208,   212,   214,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
     240,   242,   244,   248,   250,   254,   256,   258,   260,   262,
     264,   266,   268,   272,   274,   278,   280,   282,   284,   289,
     291,   293,   295,   299,   301,   303,   305,   309,   311,   313,
     315,   320,   322,   326,   328,   330,   334,   338,   340,   342,
     344,   348,   350,   354,   358,   362,   366,   370,   376,   380,
     384,   386,   390,   394,   398,   402,   406,   410
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "COLON", "RIGHT_ARROW",
  "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "SEMICOLON", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "SINGLECOMMENT", "MULTILINECOMMENT",
  "CHARACTERS_BLOCK", "COMMA", "FALSE", "TRUE", "DIS", "INT", "DEC", "BLN",
  "STR", "AS", "INT_VALUE", "DEC_VALUE", "SHOW", "DOLLAR", "LOAD",
  "DOUBLE_COLON", "LEFT_BRACKET", "RIGHT_BRACKET", "VOID", "MAIN",
  "ANSWER", "MINOR", "MAYOR", "EQUAL", "MINOR_EQUAL", "MAYOR_EQUAL",
  "NOT_EQUAL", "RIGHT_INTER", "AT", "LESS", "PLUS", "MULT", "DIV", "MOD",
  "INVERSE_SLASH", "SHARP", "INTEGRATED", "DOT", "$accept", "input",
  "function_or_struct_list", "function_or_struct", "return_type",
  "input_type", "statements", "statement", "answer_statement",
  "bifurcation", "condition", "loop", "loop_it", "loop_int_definition",
  "logicalComparison", "logicalOperator", "operation", "operator",
  "arrayStruct_access", "std_input", "assignment", "values", "value",
  "definitions", "definition", "definition_without_val",
  "definition_with_val", "definition_for_arrays",
  "definition_for_struct_type", "identifiers", "ids", "std_output",
  "array_load", "array_access", "data_var", "characters_block",
  "expression", "int_value", "decimal_value", "bln_value", "int_type",
  "dec_type", "bln_type", "str_type", "void_type", "name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-5)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     227,  -176,  -176,  -176,    10,    15,    15,    15,    15,    21,
      15,    42,   195,    32,    70,    60,    81,   160,  -176,    77,
    -176,    58,  -176,   101,   108,  -176,   111,   114,   124,   125,
      45,  -176,   153,    75,   154,    84,  -176,    24,  -176,     9,
      99,    48,   493,   137,    15,  -176,  -176,  -176,  -176,  -176,
      15,   122,   152,   539,  -176,   569,   123,  -176,  -176,  -176,
    -176,  -176,   179,   155,   474,  -176,  -176,  -176,   160,  -176,
     474,  -176,  -176,  -176,  -176,  -176,  -176,    15,   136,  -176,
      15,  -176,   478,  -176,   159,   497,  -176,  -176,  -176,  -176,
    -176,    15,   187,   284,    20,  -176,     6,  -176,    62,  -176,
      98,  -176,    15,   182,   539,  -176,   474,  -176,   175,  -176,
     137,   474,    49,   474,  -176,  -176,  -176,  -176,  -176,  -176,
     474,   474,   171,   474,   176,   539,   117,  -176,   177,  -176,
     183,   184,   186,   188,   197,   212,   474,   539,  -176,  -176,
     198,     8,  -176,   488,   239,   474,  -176,  -176,   191,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,    12,   474,   494,
     474,   185,   225,   249,   539,   539,   539,    15,   539,   252,
     236,    15,    15,    15,    15,  -176,   221,   474,   474,   474,
     474,   474,   474,   104,   258,   235,   245,  -176,   474,   539,
      16,   539,  -176,   499,    15,  -176,  -176,  -176,   240,    15,
     254,   251,   143,   266,   275,   505,   516,   522,   527,   533,
     539,   474,   474,   253,   287,   279,   539,  -176,   539,   243,
     259,    11,   309,   334,   276,   298,  -176,  -176,  -176,  -176,
    -176,  -176,   544,   228,   579,   278,  -176,  -176,  -176,  -176,
      15,   267,   474,   310,  -176,  -176,  -176,   285,  -176,   359,
    -176,   474,  -176,  -176,  -176,  -176,   288,  -176,  -176,  -176,
    -176,  -176,   579,  -176,   313,   539,   474,   318,  -176,   550,
     319,   294,  -176,   539,   325,  -176,   326,   321,   384,  -176,
    -176,   327,  -176,   409,   434,  -176,  -176,  -176,   459,  -176
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
     105,   127,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     9,     0,
      23,    33,    22,     0,     0,    26,     0,     0,     0,     0,
       0,   104,     0,     0,     0,   106,    20,     0,   106,     0,
       0,     0,     0,     0,     0,   115,   121,   120,   118,   119,
       0,     0,     0,    75,    82,     0,    81,    80,    79,    76,
      77,    78,     0,     0,     0,    84,     1,     2,   105,    21,
       0,    24,    25,    85,    86,    87,    88,     0,     0,    29,
       0,    31,     0,    30,     0,     0,    52,    51,    54,    53,
      55,     0,     0,   105,     0,    93,     0,    94,     0,    95,
       0,    96,     0,   108,    74,   107,     0,    57,   106,   114,
     106,     0,     0,     0,    43,    45,    44,    47,    46,    48,
       0,     0,     0,     0,     0,    32,   105,     3,     0,   103,
      89,    90,    91,    92,   101,     0,     0,    63,    60,    62,
       0,     0,   116,     0,     0,     0,    34,    19,   106,    69,
      65,    70,    66,    71,    67,    68,    72,   106,     0,     0,
       0,     0,     0,     0,    50,    42,    49,     0,    41,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,    64,
       0,    73,   113,     0,     0,    20,    20,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,     0,     0,     0,     0,    61,   110,   109,     0,
       0,     0,   105,   105,     0,     0,    20,    97,    98,    99,
     100,   102,     0,     0,     0,     0,    15,    16,    17,    18,
       0,     0,     0,     0,    35,    37,   122,     0,     8,   105,
     112,     0,   123,   124,   125,   126,     0,    10,    11,    12,
      13,    14,     0,    58,     0,    39,     0,     0,    36,     0,
       0,     0,    20,    40,     0,   111,     0,     0,   105,    20,
      20,     0,    38,   105,   105,    20,     5,     7,   105,     6
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,   271,   340,    82,  -176,  -175,     7,  -176,  -176,
    -176,  -176,  -176,  -176,   -62,  -176,  -176,   -31,  -176,  -176,
    -176,  -176,   -37,  -176,   217,  -176,  -176,  -176,  -176,  -176,
      29,  -176,  -176,     2,  -176,   -38,   168,   -36,   -33,   -26,
     126,  -176,  -176,  -176,  -176,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    67,    68,   256,   185,    93,   147,    19,    20,
      21,    22,   220,    51,    52,   120,    53,   121,    54,    23,
      24,   103,    55,   126,    25,    26,    27,    28,    29,    30,
      31,    32,   138,    56,    57,    58,    34,    59,    60,    61,
     257,   258,   259,   260,   261,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    95,    33,   101,    92,   104,    97,    18,   128,     1,
      43,     1,    62,    96,    99,   242,    36,    35,     1,    33,
     222,   223,   113,     1,    18,    42,   190,   125,    94,    45,
      49,    46,    47,    49,    37,    39,    40,    41,   184,    48,
      49,   106,    50,    48,   108,   137,    44,    48,   143,   161,
     110,   249,   100,    86,    87,    88,    89,    90,   150,    77,
      63,    45,   155,   152,   217,     1,    65,    78,    35,   159,
      33,   105,   154,   107,    64,    18,   164,    46,    47,   109,
     135,    66,   140,   165,   166,    69,   168,    70,    82,   162,
     163,   144,    83,   148,   140,    33,   140,   278,   140,   183,
     140,     1,   157,    98,   283,   284,   129,   134,   189,    71,
     288,    45,    84,    85,    46,    47,    72,    92,   211,    73,
       1,   191,    74,   193,   170,    80,    86,    87,    88,    89,
      90,   109,    75,    76,    91,   171,   172,   173,   174,     1,
     205,   206,   207,   208,   209,   210,    86,    87,    88,    89,
      90,   216,   212,   218,   130,   131,   132,   133,    46,    47,
      -4,    79,    81,     1,    95,   101,   106,   197,    97,   111,
     186,     2,     3,   122,   232,   233,    99,     4,     5,     6,
       7,     8,   112,   123,   124,     9,    10,    11,   141,    12,
     243,   145,    13,    14,   221,    82,   158,   167,     1,    83,
     200,   201,   202,   203,   160,   265,   169,   176,    45,    15,
      46,    47,   177,   178,   269,   179,   182,   180,    48,    49,
      85,    50,   148,   148,    33,    33,   181,    85,   225,   273,
       1,   195,   194,    86,    87,    88,    89,    90,     2,     3,
     263,    91,   251,   188,     4,     5,     6,     7,     8,   148,
     139,    33,     9,    10,    11,   196,    12,   198,   199,    13,
      14,   204,   149,   213,   151,   214,   153,   215,   156,   224,
      86,    87,    88,    89,    90,    49,    15,    48,   148,    45,
      33,   226,   234,   148,   148,    33,    33,     1,   148,   241,
      33,   146,   235,   240,   246,     2,     3,   236,   237,   238,
     239,     4,     5,     6,     7,     8,   248,   262,   264,     9,
      10,    11,     1,    12,   266,   267,   244,    14,   270,   272,
       2,     3,   274,   276,   277,   281,     4,     5,     6,     7,
       8,   279,   280,   285,     9,    10,    11,     1,    12,   127,
      17,   245,    14,   175,   271,     2,     3,     0,     0,     0,
     247,     4,     5,     6,     7,     8,     0,     0,     0,     9,
      10,    11,     1,    12,     0,     0,   268,    14,     0,     0,
       2,     3,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     0,     0,     0,     9,    10,    11,     1,    12,     0,
       0,   282,    14,     0,     0,     2,     3,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     0,     0,     0,     9,
      10,    11,     1,    12,     0,     0,   286,    14,     0,     0,
       2,     3,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     0,     0,     0,     9,    10,    11,     1,    12,     0,
       0,   287,    14,     0,     0,     2,     3,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     0,     0,     0,     9,
      10,    11,     1,    12,     0,     0,   289,    14,     0,     0,
       2,     3,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     1,     0,     0,     9,    10,    11,    45,    12,    46,
      47,    45,    14,    46,    47,     0,     1,    48,    49,     0,
      50,    48,    49,     0,    50,     0,    45,   136,    46,    47,
      45,     0,    46,    47,     0,     0,    48,    49,   187,   102,
      48,    49,     0,    50,   192,     0,     0,   142,     0,   219,
      86,    87,    88,    89,    90,   227,    86,    87,    88,    89,
      90,    86,    87,    88,    89,    90,   228,    86,    87,    88,
      89,    90,   229,     0,     0,     0,     0,   230,    86,    87,
      88,    89,    90,   231,    86,    87,    88,    89,    90,    86,
      87,    88,    89,    90,   250,    86,    87,    88,    89,    90,
     275,    86,    87,    88,    89,    90,    86,    87,    88,    89,
      90,     0,    86,    87,    88,    89,    90,   246,   252,   253,
     254,     0,     0,   114,   115,   116,   117,   118,   119,     0,
     255,    86,    87,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
       0,    37,     0,    41,    35,    42,    39,     0,    70,     3,
      10,     3,    12,     4,    40,     4,     6,    17,     3,    17,
     195,   196,    53,     3,    17,     4,    14,    64,     4,    13,
      24,    15,    16,    24,     5,     6,     7,     8,    30,    23,
      24,    29,    26,    23,    44,    82,     4,    23,    85,   111,
      50,   226,     4,    42,    43,    44,    45,    46,    94,    14,
      28,    13,   100,    96,    48,     3,     6,    22,    68,   106,
      68,    42,    98,    44,     4,    68,   113,    15,    16,    50,
      80,     0,    82,   120,   121,     8,   123,    29,     4,    40,
      41,    91,     8,    93,    94,    93,    96,   272,    98,   136,
     100,     3,   102,     4,   279,   280,    77,    78,   145,     8,
     285,    13,    28,    29,    15,    16,     8,   148,    14,     8,
       3,   158,     8,   160,     7,    50,    42,    43,    44,    45,
      46,   102,     8,     8,    50,    18,    19,    20,    21,     3,
     177,   178,   179,   180,   181,   182,    42,    43,    44,    45,
      46,   188,   183,   190,    18,    19,    20,    21,    15,    16,
       0,     8,     8,     3,   200,   203,    29,   167,   201,    47,
     141,    11,    12,    50,   211,   212,   202,    17,    18,    19,
      20,    21,    30,     4,    29,    25,    26,    27,    29,    29,
     221,     4,    32,    33,   194,     4,    14,    26,     3,     8,
     171,   172,   173,   174,    29,   242,    30,    30,    13,    49,
      15,    16,    29,    29,   251,    29,     4,    29,    23,    24,
      29,    26,   222,   223,   222,   223,    29,    29,   199,   266,
       3,     6,    47,    42,    43,    44,    45,    46,    11,    12,
     240,    50,    14,     4,    17,    18,    19,    20,    21,   249,
      82,   249,    25,    26,    27,     6,    29,     5,    22,    32,
      33,    40,    94,     5,    96,    30,    98,    22,   100,    29,
      42,    43,    44,    45,    46,    24,    49,    23,   278,    13,
     278,     6,    29,   283,   284,   283,   284,     3,   288,    30,
     288,     7,     5,    50,    18,    11,    12,    18,    19,    20,
      21,    17,    18,    19,    20,    21,     8,    29,    41,    25,
      26,    27,     3,    29,     4,    30,     7,    33,    30,     6,
      11,    12,     4,     4,    30,     4,    17,    18,    19,    20,
      21,     6,     6,     6,    25,    26,    27,     3,    29,    68,
       0,     7,    33,   126,   262,    11,    12,    -1,    -1,    -1,
     224,    17,    18,    19,    20,    21,    -1,    -1,    -1,    25,
      26,    27,     3,    29,    -1,    -1,     7,    33,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    25,    26,    27,     3,    29,    -1,
      -1,     7,    33,    -1,    -1,    11,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,    25,
      26,    27,     3,    29,    -1,    -1,     7,    33,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    25,    26,    27,     3,    29,    -1,
      -1,     7,    33,    -1,    -1,    11,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,    25,
      26,    27,     3,    29,    -1,    -1,     7,    33,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,     3,    -1,    -1,    25,    26,    27,    13,    29,    15,
      16,    13,    33,    15,    16,    -1,     3,    23,    24,    -1,
      26,    23,    24,    -1,    26,    -1,    13,    29,    15,    16,
      13,    -1,    15,    16,    -1,    -1,    23,    24,    30,    26,
      23,    24,    -1,    26,    30,    -1,    -1,    30,    -1,    30,
      42,    43,    44,    45,    46,    30,    42,    43,    44,    45,
      46,    42,    43,    44,    45,    46,    30,    42,    43,    44,
      45,    46,    30,    -1,    -1,    -1,    -1,    30,    42,    43,
      44,    45,    46,    30,    42,    43,    44,    45,    46,    42,
      43,    44,    45,    46,    30,    42,    43,    44,    45,    46,
      30,    42,    43,    44,    45,    46,    42,    43,    44,    45,
      46,    -1,    42,    43,    44,    45,    46,    18,    19,    20,
      21,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      31,    42,    43,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    11,    12,    17,    18,    19,    20,    21,    25,
      26,    27,    29,    32,    33,    49,    52,    54,    58,    59,
      60,    61,    62,    70,    71,    75,    76,    77,    78,    79,
      80,    81,    82,    84,    87,    96,     6,    81,    96,    81,
      81,    81,     4,    96,     4,    13,    15,    16,    23,    24,
      26,    64,    65,    67,    69,    73,    84,    85,    86,    88,
      89,    90,    96,    28,     4,     6,     0,    53,    54,     8,
      29,     8,     8,     8,     8,     8,     8,    14,    22,     8,
      50,     8,     4,     8,    28,    29,    42,    43,    44,    45,
      46,    50,    68,    57,     4,    88,     4,    89,     4,    90,
       4,    86,    26,    72,    73,    81,    29,    81,    96,    81,
      96,    47,    30,    68,    34,    35,    36,    37,    38,    39,
      66,    68,    50,     4,    29,    73,    74,    53,    65,    81,
      18,    19,    20,    21,    81,    96,    29,    73,    83,    87,
      96,    29,    30,    73,    96,     4,     7,    58,    96,    87,
      88,    87,    89,    87,    90,    86,    87,    96,    14,    73,
      29,    65,    40,    41,    73,    73,    73,    26,    73,    30,
       7,    18,    19,    20,    21,    75,    30,    29,    29,    29,
      29,    29,     4,    73,    30,    56,    81,    30,     4,    73,
      14,    73,    30,    73,    47,     6,     6,    96,     5,    22,
      81,    81,    81,    81,    40,    73,    73,    73,    73,    73,
      73,    14,    68,     5,    30,    22,    73,    48,    73,    30,
      63,    96,    57,    57,    29,    81,     6,    30,    30,    30,
      30,    30,    73,    73,    29,     5,    18,    19,    20,    21,
      50,    30,     4,    68,     7,     7,    18,    91,     8,    57,
      30,    14,    19,    20,    21,    31,    55,    91,    92,    93,
      94,    95,    29,    96,    41,    73,     4,    30,     7,    73,
      30,    55,     6,    73,     4,    30,     4,    30,    57,     6,
       6,     4,     7,    57,    57,     6,     7,     7,    57,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    54,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    68,    68,    68,    68,    68,    69,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    75,    75,    75,    75,    76,
      76,    76,    76,    77,    77,    77,    77,    78,    78,    78,
      78,    79,    79,    80,    80,    80,    81,    82,    82,    82,
      82,    83,    83,    84,    85,    86,    87,    87,    88,    89,
      90,    90,    91,    92,    93,    94,    95,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,    12,    13,    12,     7,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     2,
       0,     2,     1,     1,     2,     2,     1,     1,     1,     2,
       2,     2,     3,     1,     4,     7,     8,     7,    11,     3,
       4,     3,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     4,     3,     8,     5,
       3,     5,     3,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     6,     6,     6,
       6,     3,     6,     3,     1,     0,     1,     3,     3,     6,
       6,     7,     5,     5,     2,     1,     3,     4,     1,     1,
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

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
# undef YYSTACK_RELOCATE
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
  case 2:
#line 27 "compiler/grammar.y"
                                              {result = std::string("#include<cstdio>\n #include<iostream>\n using namespace std; \n")+yyvsp[-1]+yyvsp[0];}
#line 1629 "grammar.tab.c"
    break;

  case 3:
#line 31 "compiler/grammar.y"
                                              {yyval = yyvsp[-1] + yyvsp[0]; }
#line 1635 "grammar.tab.c"
    break;

  case 4:
#line 32 "compiler/grammar.y"
                {yyval = "";}
#line 1641 "grammar.tab.c"
    break;

  case 5:
#line 37 "compiler/grammar.y"
    {
        yyval = std::string("int main(){\n" + yyvsp[-1] + "\n}");
    }
#line 1649 "grammar.tab.c"
    break;

  case 6:
#line 42 "compiler/grammar.y"
    {
        if(yyvsp[-5] == "Int"){
            yyval = std::string("int ") + yyvsp[-12] + "("+ yyvsp[-9] +"){" + yyvsp[-1] + "\n}\n\n";
        }
        else if(yyvsp[-5] == "Dec"){
            yyval = std::string("double ") + yyvsp[-12] + "("+ yyvsp[-9] +"){" + yyvsp[-1] + "\n}\n\n";
        } 
        else if(yyvsp[-5] == "Bln"){
            yyval = std::string("bool ") + yyvsp[-12] + "("+ yyvsp[-9] +"){" + yyvsp[-1] + "\n}\n\n";
        } 
        else if(yyvsp[-5] == "Str"){
            yyval = std::string("string ") + yyvsp[-12] + "("+ yyvsp[-9] +"){" + yyvsp[-1] + "\n}\n\n";
        }else{
            yyval = std::string("void ") + yyvsp[-12] + "("+ yyvsp[-9] +"){" + yyvsp[-1] + "\n}\n\n";
        }
    }
#line 1670 "grammar.tab.c"
    break;

  case 7:
#line 60 "compiler/grammar.y"
    {
        if(yyvsp[-5] == "Int"){
            yyval = std::string("int ") + yyvsp[-11] + "(){" + yyvsp[-1] + "\n}\n\n";
        }
        else if(yyvsp[-5] == "Dec"){
            yyval = std::string("double ") + yyvsp[-11] + "(){" + yyvsp[-1] + "\n}\n\n";
        } 
        else if(yyvsp[-5] == "Bln"){
            yyval = std::string("bool ") + yyvsp[-11] + "(){" + yyvsp[-1] + "\n}\n\n";
        } 
        else if(yyvsp[-5] == "Str"){
            yyval = std::string("string ") + yyvsp[-11] + "(){" + yyvsp[-1] + "\n}\n\n";
        }else{
            yyval = std::string("void ") + yyvsp[-11] + "(){" + yyvsp[-1] + "\n}\n\n";
        }
    }
#line 1691 "grammar.tab.c"
    break;

  case 8:
#line 77 "compiler/grammar.y"
                                                                               {yyval = "\nstruct " + yyvsp[-1] + "{\n" + yyvsp[-4] + "};\n\n";}
#line 1697 "grammar.tab.c"
    break;

  case 9:
#line 79 "compiler/grammar.y"
              {yyval = yyvsp[0];}
#line 1703 "grammar.tab.c"
    break;

  case 10:
#line 83 "compiler/grammar.y"
             {yyval = yyvsp[0];}
#line 1709 "grammar.tab.c"
    break;

  case 11:
#line 85 "compiler/grammar.y"
             {yyval = yyvsp[0];}
#line 1715 "grammar.tab.c"
    break;

  case 12:
#line 87 "compiler/grammar.y"
             {yyval = yyvsp[0];}
#line 1721 "grammar.tab.c"
    break;

  case 13:
#line 89 "compiler/grammar.y"
             {yyval = yyvsp[0];}
#line 1727 "grammar.tab.c"
    break;

  case 14:
#line 91 "compiler/grammar.y"
              {yyval = yyvsp[0];}
#line 1733 "grammar.tab.c"
    break;

  case 15:
#line 95 "compiler/grammar.y"
               {yyval = "int " + yyvsp[-2];}
#line 1739 "grammar.tab.c"
    break;

  case 16:
#line 97 "compiler/grammar.y"
               {yyval = "double " + yyvsp[-2];}
#line 1745 "grammar.tab.c"
    break;

  case 17:
#line 99 "compiler/grammar.y"
               {yyval = "bool " + yyvsp[-2];}
#line 1751 "grammar.tab.c"
    break;

  case 18:
#line 101 "compiler/grammar.y"
               {yyval = "string " + yyvsp[-2];}
#line 1757 "grammar.tab.c"
    break;

  case 19:
#line 105 "compiler/grammar.y"
                         {yyval = yyvsp[-1] + yyvsp[0];}
#line 1763 "grammar.tab.c"
    break;

  case 20:
#line 106 "compiler/grammar.y"
                {yyval = "";}
#line 1769 "grammar.tab.c"
    break;

  case 21:
#line 110 "compiler/grammar.y"
                               {yyval = yyvsp[-1];}
#line 1775 "grammar.tab.c"
    break;

  case 22:
#line 112 "compiler/grammar.y"
         {yyval = yyvsp[0];}
#line 1781 "grammar.tab.c"
    break;

  case 23:
#line 114 "compiler/grammar.y"
                {yyval = yyvsp[0];}
#line 1787 "grammar.tab.c"
    break;

  case 24:
#line 116 "compiler/grammar.y"
                        {yyval = yyvsp[-1];}
#line 1793 "grammar.tab.c"
    break;

  case 25:
#line 118 "compiler/grammar.y"
                         {yyval = yyvsp[-1]; }
#line 1799 "grammar.tab.c"
    break;

  case 26:
#line 120 "compiler/grammar.y"
               {yyval = yyvsp[0]; }
#line 1805 "grammar.tab.c"
    break;

  case 27:
#line 122 "compiler/grammar.y"
                  {yyval = ""; }
#line 1811 "grammar.tab.c"
    break;

  case 28:
#line 124 "compiler/grammar.y"
                     {yyval = ""; }
#line 1817 "grammar.tab.c"
    break;

  case 29:
#line 126 "compiler/grammar.y"
                            {yyval = yyvsp[-1]; }
#line 1823 "grammar.tab.c"
    break;

  case 30:
#line 128 "compiler/grammar.y"
                   {
        yyval = "\n printf(\"%s \\n\", \"" + yyvsp[-1] + "\");";
        //std::cout << "Statement created\n";
        }
#line 1832 "grammar.tab.c"
    break;

  case 31:
#line 133 "compiler/grammar.y"
                         {yyval = std::move(yyvsp[-1]);}
#line 1838 "grammar.tab.c"
    break;

  case 32:
#line 137 "compiler/grammar.y"
                       {yyval = "\n\nreturn " + yyvsp[0] + ";\n";}
#line 1844 "grammar.tab.c"
    break;

  case 33:
#line 141 "compiler/grammar.y"
              {yyval = yyvsp[0];}
#line 1850 "grammar.tab.c"
    break;

  case 34:
#line 143 "compiler/grammar.y"
                                                      {yyval = "else{" + yyvsp[-1] + "\n}\n";}
#line 1856 "grammar.tab.c"
    break;

  case 35:
#line 147 "compiler/grammar.y"
                                                                                                           {yyval = "if(" + yyvsp[-5] + "){" + yyvsp[-1] + "\n}";}
#line 1862 "grammar.tab.c"
    break;

  case 36:
#line 149 "compiler/grammar.y"
                                                                                                                     {yyval = yyvsp[-7] + "else if(" + yyvsp[-5] + "){" + yyvsp[-1] + "\n}";}
#line 1868 "grammar.tab.c"
    break;

  case 37:
#line 153 "compiler/grammar.y"
                                                                                                 {yyval = "\nwhile(" + yyvsp[-5] +"){" + yyvsp[-1] +"}\n";}
#line 1874 "grammar.tab.c"
    break;

  case 38:
#line 155 "compiler/grammar.y"
                                                                                                                                                         {yyval = "\nfor(" + yyvsp[-9] + "; " + yyvsp[-7] + "; " + yyvsp[-5] + "){" + yyvsp[-1] + "}\n"; }
#line 1880 "grammar.tab.c"
    break;

  case 39:
#line 160 "compiler/grammar.y"
                     {yyval = "\n" + yyvsp[-2] + " = " + yyvsp[0];}
#line 1886 "grammar.tab.c"
    break;

  case 40:
#line 162 "compiler/grammar.y"
                              {yyval = "\n" + yyvsp[-3] + " "+ yyvsp[-2] +"= " + yyvsp[0]; }
#line 1892 "grammar.tab.c"
    break;

  case 41:
#line 166 "compiler/grammar.y"
                     {yyval = "int " + yyvsp[-2] + " = " + yyvsp[0];}
#line 1898 "grammar.tab.c"
    break;

  case 42:
#line 170 "compiler/grammar.y"
                                {yyval = yyvsp[-2] + yyvsp[-1] + yyvsp[0]; }
#line 1904 "grammar.tab.c"
    break;

  case 43:
#line 174 "compiler/grammar.y"
          {yyval = " < ";}
#line 1910 "grammar.tab.c"
    break;

  case 44:
#line 176 "compiler/grammar.y"
          {yyval = " == ";}
#line 1916 "grammar.tab.c"
    break;

  case 45:
#line 178 "compiler/grammar.y"
          {yyval = " > ";}
#line 1922 "grammar.tab.c"
    break;

  case 46:
#line 180 "compiler/grammar.y"
                {yyval = " >= ";}
#line 1928 "grammar.tab.c"
    break;

  case 47:
#line 182 "compiler/grammar.y"
                {yyval = " <= ";}
#line 1934 "grammar.tab.c"
    break;

  case 48:
#line 184 "compiler/grammar.y"
              {yyval = " != ";}
#line 1940 "grammar.tab.c"
    break;

  case 49:
#line 188 "compiler/grammar.y"
                         {yyval = yyvsp[-2] + " " + yyvsp[-1] + " " + yyvsp[0]; }
#line 1946 "grammar.tab.c"
    break;

  case 50:
#line 190 "compiler/grammar.y"
                             {yyval = yyvsp[-2] + " " + yyvsp[-1] + " " + yyvsp[0]; }
#line 1952 "grammar.tab.c"
    break;

  case 51:
#line 195 "compiler/grammar.y"
         {yyval = "+";}
#line 1958 "grammar.tab.c"
    break;

  case 52:
#line 197 "compiler/grammar.y"
         {yyval = "-";}
#line 1964 "grammar.tab.c"
    break;

  case 53:
#line 199 "compiler/grammar.y"
        {yyval = "/";}
#line 1970 "grammar.tab.c"
    break;

  case 54:
#line 201 "compiler/grammar.y"
         {yyval = "*";}
#line 1976 "grammar.tab.c"
    break;

  case 55:
#line 203 "compiler/grammar.y"
        {yyval = "%";}
#line 1982 "grammar.tab.c"
    break;

  case 56:
#line 208 "compiler/grammar.y"
                                 {yyval = yyvsp[-3] + "." + yyvsp[0];}
#line 1988 "grammar.tab.c"
    break;

  case 57:
#line 212 "compiler/grammar.y"
                   {yyval = "\ncin >> " + yyvsp[0] + ";\n"; }
#line 1994 "grammar.tab.c"
    break;

  case 58:
#line 214 "compiler/grammar.y"
                                                              {yyval = "\ncin >> " + yyvsp[-5] + "[" + yyvsp[-3] + "]" + "." + yyvsp[0] + ";\n";}
#line 2000 "grammar.tab.c"
    break;

  case 59:
#line 218 "compiler/grammar.y"
                                      {yyval = yyvsp[-4] + "." + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2006 "grammar.tab.c"
    break;

  case 60:
#line 220 "compiler/grammar.y"
                          {yyval = yyvsp[-2] + yyvsp[0] + ";\n";}
#line 2012 "grammar.tab.c"
    break;

  case 61:
#line 222 "compiler/grammar.y"
                              {yyval = yyvsp[-4] + "." + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2018 "grammar.tab.c"
    break;

  case 62:
#line 224 "compiler/grammar.y"
                          {yyval = yyvsp[-2] + " = " + yyvsp[0];}
#line 2024 "grammar.tab.c"
    break;

  case 63:
#line 226 "compiler/grammar.y"
                     {yyval = "\n" + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2030 "grammar.tab.c"
    break;

  case 64:
#line 228 "compiler/grammar.y"
                              {yyval = "\n" + yyvsp[-3] + " "+ yyvsp[-2] +"= " + yyvsp[0] + ";\n"; }
#line 2036 "grammar.tab.c"
    break;

  case 65:
#line 230 "compiler/grammar.y"
                            {yyval = "int " + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2042 "grammar.tab.c"
    break;

  case 66:
#line 232 "compiler/grammar.y"
                                {yyval = "double " + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2048 "grammar.tab.c"
    break;

  case 67:
#line 234 "compiler/grammar.y"
                            {yyval = "bool " + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2054 "grammar.tab.c"
    break;

  case 68:
#line 236 "compiler/grammar.y"
                                   {yyval = "string " + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2060 "grammar.tab.c"
    break;

  case 69:
#line 238 "compiler/grammar.y"
                             {yyval = "int " + yyvsp[-2] + " = " + yyvsp[0];}
#line 2066 "grammar.tab.c"
    break;

  case 70:
#line 240 "compiler/grammar.y"
                             {yyval = "double " + yyvsp[-2] + " = " + yyvsp[0];}
#line 2072 "grammar.tab.c"
    break;

  case 71:
#line 242 "compiler/grammar.y"
                             {yyval = "bool " + yyvsp[-2] + " = " + yyvsp[0];}
#line 2078 "grammar.tab.c"
    break;

  case 72:
#line 244 "compiler/grammar.y"
                             {yyval = "string " + yyvsp[-2] + " = " + yyvsp[0];}
#line 2084 "grammar.tab.c"
    break;

  case 73:
#line 248 "compiler/grammar.y"
                       {yyval = yyvsp[-2] + " << " + yyvsp[0];}
#line 2090 "grammar.tab.c"
    break;

  case 74:
#line 250 "compiler/grammar.y"
          {yyval = yyvsp[0];}
#line 2096 "grammar.tab.c"
    break;

  case 75:
#line 254 "compiler/grammar.y"
              {yyval = yyvsp[0];}
#line 2102 "grammar.tab.c"
    break;

  case 76:
#line 256 "compiler/grammar.y"
              {yyval = yyvsp[0];}
#line 2108 "grammar.tab.c"
    break;

  case 77:
#line 258 "compiler/grammar.y"
                  {yyval = yyvsp[0];}
#line 2114 "grammar.tab.c"
    break;

  case 78:
#line 260 "compiler/grammar.y"
              {yyval = yyvsp[0];}
#line 2120 "grammar.tab.c"
    break;

  case 79:
#line 262 "compiler/grammar.y"
                     {yyval = yyvsp[0];}
#line 2126 "grammar.tab.c"
    break;

  case 80:
#line 264 "compiler/grammar.y"
             {yyval = yyvsp[0];}
#line 2132 "grammar.tab.c"
    break;

  case 81:
#line 266 "compiler/grammar.y"
                 {yyval = yyvsp[0];}
#line 2138 "grammar.tab.c"
    break;

  case 82:
#line 268 "compiler/grammar.y"
                       {yyval = yyvsp[0];}
#line 2144 "grammar.tab.c"
    break;

  case 83:
#line 272 "compiler/grammar.y"
                           {yyval = yyvsp[-1] + yyvsp[0];}
#line 2150 "grammar.tab.c"
    break;

  case 84:
#line 274 "compiler/grammar.y"
           {yyval = "";}
#line 2156 "grammar.tab.c"
    break;

  case 85:
#line 278 "compiler/grammar.y"
                                     {yyval = yyvsp[-1];}
#line 2162 "grammar.tab.c"
    break;

  case 86:
#line 280 "compiler/grammar.y"
                                  {yyval = yyvsp[-1];}
#line 2168 "grammar.tab.c"
    break;

  case 87:
#line 282 "compiler/grammar.y"
                                    {yyval = yyvsp[-1];}
#line 2174 "grammar.tab.c"
    break;

  case 88:
#line 284 "compiler/grammar.y"
                                         {yyval = yyvsp[-1];}
#line 2180 "grammar.tab.c"
    break;

  case 89:
#line 289 "compiler/grammar.y"
                       {yyval = "int " + yyvsp[-2] + ";\n";}
#line 2186 "grammar.tab.c"
    break;

  case 90:
#line 291 "compiler/grammar.y"
                       {yyval = "double " + yyvsp[-2] + ";\n";}
#line 2192 "grammar.tab.c"
    break;

  case 91:
#line 293 "compiler/grammar.y"
                       {yyval = "bool " + yyvsp[-2] + ";\n";}
#line 2198 "grammar.tab.c"
    break;

  case 92:
#line 295 "compiler/grammar.y"
                       {yyval = "string " + yyvsp[-2] + ";\n";}
#line 2204 "grammar.tab.c"
    break;

  case 93:
#line 299 "compiler/grammar.y"
                      {yyval = "int " + yyvsp[-1] + " = " + yyvsp[0] + ";\n";}
#line 2210 "grammar.tab.c"
    break;

  case 94:
#line 301 "compiler/grammar.y"
                          {yyval = "double " + yyvsp[-1] + " = " + yyvsp[0] + ";\n";}
#line 2216 "grammar.tab.c"
    break;

  case 95:
#line 303 "compiler/grammar.y"
                      {yyval = "bool " + yyvsp[-1] + " = " + yyvsp[0] + ";\n";}
#line 2222 "grammar.tab.c"
    break;

  case 96:
#line 305 "compiler/grammar.y"
                             {yyval = "string " + yyvsp[-1] + " = " + yyvsp[0] + ";\n";}
#line 2228 "grammar.tab.c"
    break;

  case 97:
#line 309 "compiler/grammar.y"
                                                        {yyval = "int " + yyvsp[-5] + "[" + yyvsp[-1] + "]" + ";\n";}
#line 2234 "grammar.tab.c"
    break;

  case 98:
#line 311 "compiler/grammar.y"
                                                        {yyval = "double " + yyvsp[-5] + "[" + yyvsp[-1] + "]" + ";\n";}
#line 2240 "grammar.tab.c"
    break;

  case 99:
#line 313 "compiler/grammar.y"
                                                        {yyval = "bool " + yyvsp[-5] + "[" + yyvsp[-1] + "]" + ";\n";}
#line 2246 "grammar.tab.c"
    break;

  case 100:
#line 315 "compiler/grammar.y"
                                                        {yyval = "string " + yyvsp[-5] + "[" + yyvsp[-1] + "]" + ";\n";}
#line 2252 "grammar.tab.c"
    break;

  case 101:
#line 320 "compiler/grammar.y"
                       {yyval = "\n" + yyvsp[0] + " " + yyvsp[-2] + ";\n";}
#line 2258 "grammar.tab.c"
    break;

  case 102:
#line 322 "compiler/grammar.y"
                                                        {yyval = "\n" + yyvsp[-3] + " " + yyvsp[-5] + "[" + yyvsp[-1] +"];\n";}
#line 2264 "grammar.tab.c"
    break;

  case 103:
#line 326 "compiler/grammar.y"
                          {yyval = yyvsp[-2] +", "+ yyvsp[0]; }
#line 2270 "grammar.tab.c"
    break;

  case 104:
#line 328 "compiler/grammar.y"
        {yyval = yyvsp[0];}
#line 2276 "grammar.tab.c"
    break;

  case 105:
#line 330 "compiler/grammar.y"
           {yyval = ""; }
#line 2282 "grammar.tab.c"
    break;

  case 106:
#line 334 "compiler/grammar.y"
         {yyval = yyvsp[0]; }
#line 2288 "grammar.tab.c"
    break;

  case 107:
#line 338 "compiler/grammar.y"
                   {yyval = "\ncout << &" + yyvsp[0] + " <<endl;";}
#line 2294 "grammar.tab.c"
    break;

  case 108:
#line 340 "compiler/grammar.y"
                      {yyval = "\ncout << " + yyvsp[0] + " <<endl;";}
#line 2300 "grammar.tab.c"
    break;

  case 109:
#line 342 "compiler/grammar.y"
                                       {yyval = "\ncout << " + yyvsp[-2] + "[" + yyvsp[0] + "]<<endl;";}
#line 2306 "grammar.tab.c"
    break;

  case 110:
#line 344 "compiler/grammar.y"
                                       {yyval = "\ncout << sizeof(" + yyvsp[-2] + ") / sizeof(" + yyvsp[-2] + "[0]) <<endl;";}
#line 2312 "grammar.tab.c"
    break;

  case 111:
#line 348 "compiler/grammar.y"
                                                                {yyval = "[" + yyvsp[-5] + yyvsp[-4] +yyvsp[-3]+ "] = " + yyvsp[-1];}
#line 2318 "grammar.tab.c"
    break;

  case 112:
#line 350 "compiler/grammar.y"
                                                 {yyval = "[" + yyvsp[-3] + "] = " + yyvsp[-1];}
#line 2324 "grammar.tab.c"
    break;

  case 113:
#line 354 "compiler/grammar.y"
                                                 {yyval = yyvsp[-3] + "[" + yyvsp[-1] + "]";}
#line 2330 "grammar.tab.c"
    break;

  case 114:
#line 358 "compiler/grammar.y"
               {yyval = yyvsp[0];}
#line 2336 "grammar.tab.c"
    break;

  case 115:
#line 362 "compiler/grammar.y"
                     {yyval = std::string(yytext);}
#line 2342 "grammar.tab.c"
    break;

  case 116:
#line 366 "compiler/grammar.y"
                                   {
        yyval = yyvsp[-2] + "();\n";
    }
#line 2350 "grammar.tab.c"
    break;

  case 117:
#line 370 "compiler/grammar.y"
                                          {
        yyval = yyvsp[-3] + "("+yyvsp[-1]+");\n";
    }
#line 2358 "grammar.tab.c"
    break;

  case 118:
#line 376 "compiler/grammar.y"
              {yyval = std::string(yytext); }
#line 2364 "grammar.tab.c"
    break;

  case 119:
#line 380 "compiler/grammar.y"
              {yyval = std::string(yytext); }
#line 2370 "grammar.tab.c"
    break;

  case 120:
#line 384 "compiler/grammar.y"
         {yyval = "true";}
#line 2376 "grammar.tab.c"
    break;

  case 121:
#line 386 "compiler/grammar.y"
          {yyval = "false";}
#line 2382 "grammar.tab.c"
    break;

  case 122:
#line 390 "compiler/grammar.y"
        {yyval = std::string(yytext); }
#line 2388 "grammar.tab.c"
    break;

  case 123:
#line 394 "compiler/grammar.y"
        {yyval = std::string(yytext); }
#line 2394 "grammar.tab.c"
    break;

  case 124:
#line 398 "compiler/grammar.y"
        {yyval = std::string(yytext); }
#line 2400 "grammar.tab.c"
    break;

  case 125:
#line 402 "compiler/grammar.y"
        {yyval = std::string(yytext); }
#line 2406 "grammar.tab.c"
    break;

  case 126:
#line 406 "compiler/grammar.y"
         {yyval = std::string(yytext); }
#line 2412 "grammar.tab.c"
    break;

  case 127:
#line 410 "compiler/grammar.y"
         {
   yyval= std::string(yytext);
    }
#line 2420 "grammar.tab.c"
    break;


#line 2424 "grammar.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
                  yystos[+*yyssp], yyvsp);
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
#line 416 "compiler/grammar.y"



void yyerror(char const *x){
    printf("Error %s\n", x);
    exit(1);
}
