/* A Bison parser, made by GNU Bison 3.7.1.  */

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
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "PCATParser.y"

#include<stdio.h>

#line 75 "PCATParser.tab.c"

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
    AND = 258,                     /* AND  */
    ARRAY = 259,                   /* ARRAY  */
    BEGIN = 260,                   /* BEGIN  */
    BY = 261,                      /* BY  */
    DIV = 262,                     /* DIV  */
    DO = 263,                      /* DO  */
    ELSE = 264,                    /* ELSE  */
    ELSEIF = 265,                  /* ELSEIF  */
    END = 266,                     /* END  */
    EXIT = 267,                    /* EXIT  */
    FOR = 268,                     /* FOR  */
    IF = 269,                      /* IF  */
    IS = 270,                      /* IS  */
    LOOP = 271,                    /* LOOP  */
    MOD = 272,                     /* MOD  */
    NOT = 273,                     /* NOT  */
    OF = 274,                      /* OF  */
    OR = 275,                      /* OR  */
    PROCEDURE = 276,               /* PROCEDURE  */
    PROGRAM = 277,                 /* PROGRAM  */
    READ = 278,                    /* READ  */
    RECORD = 279,                  /* RECORD  */
    RETURN = 280,                  /* RETURN  */
    THEN = 281,                    /* THEN  */
    TO = 282,                      /* TO  */
    TYPE = 283,                    /* TYPE  */
    VAR = 284,                     /* VAR  */
    WHILE = 285,                   /* WHILE  */
    WRITE = 286,                   /* WRITE  */
    DOT = 287,                     /* DOT  */
    MULT = 288,                    /* MULT  */
    ADD = 289,                     /* ADD  */
    SUBSTRACT = 290,               /* SUBSTRACT  */
    END_OF_INSTRUCTION = 291,      /* END_OF_INSTRUCTION  */
    LESS = 292,                    /* LESS  */
    GREATER = 293,                 /* GREATER  */
    ASSIGN = 294,                  /* ASSIGN  */
    LESSEQ = 295,                  /* LESSEQ  */
    GREATEREQ = 296,               /* GREATEREQ  */
    EQUAL = 297,                   /* EQUAL  */
    DIFF = 298,                    /* DIFF  */
    COLON = 299,                   /* COLON  */
    COMMA = 300,                   /* COMMA  */
    LPAREN = 301,                  /* LPAREN  */
    RPAREN = 302,                  /* RPAREN  */
    LSQBKT = 303,                  /* LSQBKT  */
    RSQBKT = 304,                  /* RSQBKT  */
    LBRKT = 305,                   /* LBRKT  */
    RBRKT = 306,                   /* RBRKT  */
    LSQBKTLESS = 307,              /* LSQBKTLESS  */
    GREATERRSQBKT = 308,           /* GREATERRSQBKT  */
    IDENTIFIER = 309,              /* IDENTIFIER  */
    INTEGER = 310,                 /* INTEGER  */
    REAL = 311,                    /* REAL  */
    ID = 312,                      /* ID  */
    STRING = 313                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AND = 3,                        /* AND  */
  YYSYMBOL_ARRAY = 4,                      /* ARRAY  */
  YYSYMBOL_BEGIN = 5,                      /* BEGIN  */
  YYSYMBOL_BY = 6,                         /* BY  */
  YYSYMBOL_DIV = 7,                        /* DIV  */
  YYSYMBOL_DO = 8,                         /* DO  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_ELSEIF = 10,                    /* ELSEIF  */
  YYSYMBOL_END = 11,                       /* END  */
  YYSYMBOL_EXIT = 12,                      /* EXIT  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_IS = 15,                        /* IS  */
  YYSYMBOL_LOOP = 16,                      /* LOOP  */
  YYSYMBOL_MOD = 17,                       /* MOD  */
  YYSYMBOL_NOT = 18,                       /* NOT  */
  YYSYMBOL_OF = 19,                        /* OF  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_PROCEDURE = 21,                 /* PROCEDURE  */
  YYSYMBOL_PROGRAM = 22,                   /* PROGRAM  */
  YYSYMBOL_READ = 23,                      /* READ  */
  YYSYMBOL_RECORD = 24,                    /* RECORD  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_THEN = 26,                      /* THEN  */
  YYSYMBOL_TO = 27,                        /* TO  */
  YYSYMBOL_TYPE = 28,                      /* TYPE  */
  YYSYMBOL_VAR = 29,                       /* VAR  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_WRITE = 31,                     /* WRITE  */
  YYSYMBOL_DOT = 32,                       /* DOT  */
  YYSYMBOL_MULT = 33,                      /* MULT  */
  YYSYMBOL_ADD = 34,                       /* ADD  */
  YYSYMBOL_SUBSTRACT = 35,                 /* SUBSTRACT  */
  YYSYMBOL_END_OF_INSTRUCTION = 36,        /* END_OF_INSTRUCTION  */
  YYSYMBOL_LESS = 37,                      /* LESS  */
  YYSYMBOL_GREATER = 38,                   /* GREATER  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_LESSEQ = 40,                    /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 41,                 /* GREATEREQ  */
  YYSYMBOL_EQUAL = 42,                     /* EQUAL  */
  YYSYMBOL_DIFF = 43,                      /* DIFF  */
  YYSYMBOL_COLON = 44,                     /* COLON  */
  YYSYMBOL_COMMA = 45,                     /* COMMA  */
  YYSYMBOL_LPAREN = 46,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 47,                    /* RPAREN  */
  YYSYMBOL_LSQBKT = 48,                    /* LSQBKT  */
  YYSYMBOL_RSQBKT = 49,                    /* RSQBKT  */
  YYSYMBOL_LBRKT = 50,                     /* LBRKT  */
  YYSYMBOL_RBRKT = 51,                     /* RBRKT  */
  YYSYMBOL_LSQBKTLESS = 52,                /* LSQBKTLESS  */
  YYSYMBOL_GREATERRSQBKT = 53,             /* GREATERRSQBKT  */
  YYSYMBOL_IDENTIFIER = 54,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 55,                   /* INTEGER  */
  YYSYMBOL_REAL = 56,                      /* REAL  */
  YYSYMBOL_ID = 57,                        /* ID  */
  YYSYMBOL_STRING = 58,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_body = 61,                      /* body  */
  YYSYMBOL_declaration = 62,               /* declaration  */
  YYSYMBOL_type_decl = 63,                 /* type_decl  */
  YYSYMBOL_typename = 64,                  /* typename  */
  YYSYMBOL_type = 65,                      /* type  */
  YYSYMBOL_component = 66,                 /* component  */
  YYSYMBOL_var_decl = 67,                  /* var_decl  */
  YYSYMBOL_id_list = 68,                   /* id_list  */
  YYSYMBOL_procedure_decl = 69,            /* procedure_decl  */
  YYSYMBOL_formal_params = 70,             /* formal_params  */
  YYSYMBOL_fp_section = 71,                /* fp_section  */
  YYSYMBOL_lvalue = 72,                    /* lvalue  */
  YYSYMBOL_expression = 73,                /* expression  */
  YYSYMBOL_unary_op = 74,                  /* unary_op  */
  YYSYMBOL_binary_op = 75,                 /* binary_op  */
  YYSYMBOL_number = 76,                    /* number  */
  YYSYMBOL_actual_params = 77,             /* actual_params  */
  YYSYMBOL_record_inits = 78,              /* record_inits  */
  YYSYMBOL_array_inits = 79,               /* array_inits  */
  YYSYMBOL_array_init = 80,                /* array_init  */
  YYSYMBOL_statement = 81,                 /* statement  */
  YYSYMBOL_write_params = 82,              /* write_params  */
  YYSYMBOL_write_expr = 83                 /* write_expr  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   616

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    70,    74,    75,    76,    80,    84,    88,
      89,    93,    97,    98,   102,   103,   107,   111,   112,   116,
     120,   121,   122,   126,   127,   128,   129,   130,   131,   132,
     133,   137,   138,   138,   142,   142,   143,   143,   143,   143,
     143,   144,   144,   144,   144,   144,   144,   148,   148,   152,
     153,   157,   161,   165,   169,   170,   171,   172,   173,   174,
     175,   177,   178,   179,   185,   186,   190,   191
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
  "\"end of file\"", "error", "\"invalid token\"", "AND", "ARRAY",
  "BEGIN", "BY", "DIV", "DO", "ELSE", "ELSEIF", "END", "EXIT", "FOR", "IF",
  "IS", "LOOP", "MOD", "NOT", "OF", "OR", "PROCEDURE", "PROGRAM", "READ",
  "RECORD", "RETURN", "THEN", "TO", "TYPE", "VAR", "WHILE", "WRITE", "DOT",
  "MULT", "ADD", "SUBSTRACT", "END_OF_INSTRUCTION", "LESS", "GREATER",
  "ASSIGN", "LESSEQ", "GREATEREQ", "EQUAL", "DIFF", "COLON", "COMMA",
  "LPAREN", "RPAREN", "LSQBKT", "RSQBKT", "LBRKT", "RBRKT", "LSQBKTLESS",
  "GREATERRSQBKT", "IDENTIFIER", "INTEGER", "REAL", "ID", "STRING",
  "$accept", "program", "body", "declaration", "type_decl", "typename",
  "type", "component", "var_decl", "id_list", "procedure_decl",
  "formal_params", "fp_section", "lvalue", "expression", "unary_op",
  "binary_op", "number", "actual_params", "record_inits", "array_inits",
  "array_init", "statement", "write_params", "write_expr", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
#endif

#define YYPACT_NINF (-34)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    -6,    32,    20,   -34,   -10,   -10,   -10,     1,    34,
     -34,    16,   -34,   -34,    36,    13,   -10,    29,   -34,   114,
      44,   -14,    -4,    -1,    41,   -10,    57,   -10,   274,   114,
      58,   274,   274,    62,    19,   -22,   100,   -34,   -34,    74,
      81,    78,   105,   -10,    89,   -10,    92,   -34,   -33,   -34,
     -34,   -34,   274,   -34,   -34,     7,   -19,   263,   274,   -34,
     121,   -10,   531,   304,   541,    97,   559,   -34,   -10,   274,
     274,   -34,    77,   -10,   -10,   -10,   -10,    46,   -34,   101,
     274,   274,   186,   -10,    88,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   114,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   274,   531,   106,    13,   -17,   114,   -34,   -34,
     531,    96,   -34,   -34,   234,    13,   315,    72,   102,   103,
      98,   -34,   137,   -10,   274,   356,   368,   -34,   -18,   274,
     107,   143,   531,   -34,   -10,   144,    42,   274,   -34,   -34,
     -10,   -34,   139,   -34,   123,   397,   -34,   274,   274,   409,
      88,   274,   -13,   131,   110,   215,   -34,    20,   -34,   -34,
     450,   438,   119,   120,   479,   145,   -34,   -34,   -34,   146,
     274,   -10,   274,   -34,   114,   -34,   -34,   520,    -9,   531,
     166,   114,   274,   114,   168,   157,   169,   147,   -34,   149,
     -34,   -34
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
      14,     0,     6,     5,     0,     8,     4,     0,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,    15,    18,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,    31,
      32,    33,     0,    47,    48,    20,    24,     0,     0,    23,
       0,     0,    62,     0,     0,     0,     0,    54,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,    28,    29,    30,    35,    39,
      40,    34,     0,    38,    36,    37,    41,    42,    45,    44,
      43,    46,     0,    26,     0,    20,     0,     0,    65,    66,
      67,     0,    57,    50,     0,    22,     0,     0,    15,     0,
       0,     9,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,    27,    59,     0,     0,     0,     0,    55,    21,
       0,    17,     0,    10,     0,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,    11,    13,
       0,     0,     0,     0,     0,     0,    58,    64,    49,     0,
       0,     0,     0,    52,     0,    56,    16,     0,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
      60,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -34,   -34,    30,   -34,   -34,   -20,   -34,   112,   -34,    -5,
     -34,   -34,   128,   -11,    14,   -34,   -34,   -34,   150,   -34,
     -34,    52,   -25,   -34,    68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    13,    14,    44,    76,    16,    55,
      12,    22,    40,    56,   110,    58,   102,    59,    67,    86,
      87,   130,    36,    65,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,    15,    17,    42,    60,    46,    81,     1,    35,     3,
      68,    24,    20,    68,    34,    68,    39,    69,    35,    68,
      15,   148,    48,    43,    34,    79,    70,    20,   134,    70,
     182,    70,     4,    38,   165,    70,    20,    18,    77,    19,
      15,     5,    57,    10,    41,    62,    63,    10,     6,     7,
     106,    23,    20,    66,   120,   121,   105,    83,    20,    84,
      49,    20,    21,   115,    20,    66,    82,   131,    39,    15,
      15,    77,   103,    25,    20,    88,    50,    51,   128,    89,
     114,    35,   135,   116,   117,    45,    20,    34,    52,    90,
     123,    20,    91,    47,   125,   126,    35,    53,    54,    10,
     109,    37,    34,   144,    61,    93,    94,    95,    64,    96,
      97,    71,    98,    99,   100,   101,   132,    73,    15,    72,
     156,   139,    74,   152,    75,    78,    26,    27,    28,   105,
      29,    80,   104,   112,   118,    15,   129,    30,   145,    31,
     124,   136,   133,   149,    32,    33,   140,   142,   143,   180,
     141,   155,   150,   151,   157,   153,   184,   167,   186,   158,
      88,   160,   161,    35,    89,   164,   178,   166,   172,    34,
      35,    10,    35,   173,    90,   183,    34,    91,    34,   187,
     189,   175,   176,   190,   177,   191,   179,   169,   122,    88,
      93,    94,    95,    89,    96,    97,   185,    98,    99,   100,
     101,   119,   163,    90,   154,    85,    91,     0,   188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    93,
      94,    95,    89,    96,    97,     0,    98,    99,   100,   101,
       0,     0,    90,   127,     0,    91,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    90,    96,    97,    91,    98,    99,   100,   101,     0,
       0,     0,   168,     0,     0,     0,    88,    93,    94,    95,
      89,    96,    97,     0,    98,    99,   100,   101,     0,   137,
      90,     0,     0,    91,     0,     0,     0,     0,     0,    92,
       0,     0,    49,     0,     0,     0,    93,    94,    95,     0,
      96,    97,     0,    98,    99,   100,   101,    88,    50,    51,
       0,    89,   107,     0,     0,     0,     0,     0,    88,     0,
      52,    90,    89,     0,    91,     0,     0,     0,     0,    53,
      54,    10,    90,     0,     0,    91,     0,    93,    94,    95,
       0,    96,    97,     0,    98,    99,   100,   101,    93,    94,
      95,   138,    96,    97,     0,    98,    99,   100,   101,    88,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    90,     0,    89,    91,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    91,    93,
      94,    95,   146,    96,    97,   147,    98,    99,   100,   101,
      88,    93,    94,    95,    89,    96,    97,     0,    98,    99,
     100,   101,    88,     0,    90,     0,    89,    91,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,   162,    91,
      93,    94,    95,   159,    96,    97,     0,    98,    99,   100,
     101,    88,    93,    94,    95,    89,    96,    97,     0,    98,
      99,   100,   101,    88,     0,    90,   170,    89,    91,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      91,    93,    94,    95,   171,    96,    97,     0,    98,    99,
     100,   101,    88,    93,    94,    95,    89,    96,    97,     0,
      98,    99,   100,   101,     0,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,   174,     0,     0,     0,     0,
       0,     0,    93,    94,    95,     0,    96,    97,     0,    98,
      99,   100,   101,    88,     0,     0,     0,    89,   181,     0,
       0,     0,     0,     0,    88,     0,     0,    90,    89,     0,
      91,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,    91,     0,    93,    94,    95,     0,    96,    97,    49,
      98,    99,   100,   101,    93,    94,    95,     0,    96,    97,
       0,    98,    99,   100,   101,    50,    51,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,   108,     0,
       0,     0,     0,    50,    51,     0,    53,    54,    10,   109,
       0,     0,     0,     0,     0,    52,   113,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    10
};

static const yytype_int16 yycheck[] =
{
       5,     6,     7,     4,    29,    25,    39,    22,    19,    15,
      32,    16,    45,    32,    19,    32,    21,    39,    29,    32,
      25,    39,    27,    24,    29,    45,    48,    45,    45,    48,
      39,    48,     0,    47,    47,    48,    45,    36,    43,     5,
      45,    21,    28,    57,    48,    31,    32,    57,    28,    29,
      61,    15,    45,    46,    74,    75,    61,    50,    45,    52,
      18,    45,    46,    68,    45,    46,    52,    92,    73,    74,
      75,    76,    58,    44,    45,     3,    34,    35,    83,     7,
      66,    92,   107,    69,    70,    44,    45,    92,    46,    17,
      44,    45,    20,    36,    80,    81,   107,    55,    56,    57,
      58,    57,   107,   123,    46,    33,    34,    35,    46,    37,
      38,    11,    40,    41,    42,    43,   102,    36,   123,    45,
     140,    49,    44,   134,    19,    36,    12,    13,    14,   134,
      16,    39,    11,    36,    57,   140,    48,    23,   124,    25,
      39,    45,    36,   129,    30,    31,    44,    49,    11,   174,
      47,   137,    45,    10,    15,    11,   181,    47,   183,    36,
       3,   147,   148,   174,     7,   151,   171,    36,    49,   174,
     181,    57,   183,    53,    17,     9,   181,    20,   183,    11,
      11,    36,    36,    36,   170,    36,   172,   157,    76,     3,
      33,    34,    35,     7,    37,    38,   182,    40,    41,    42,
      43,    73,   150,    17,   136,    55,    20,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    33,
      34,    35,     7,    37,    38,    -1,    40,    41,    42,    43,
      -1,    -1,    17,    47,    -1,    20,    -1,     3,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    17,    37,    38,    20,    40,    41,    42,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,     3,    33,    34,    35,
       7,    37,    38,    -1,    40,    41,    42,    43,    -1,    45,
      17,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    18,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    -1,    40,    41,    42,    43,     3,    34,    35,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      46,    17,     7,    -1,    20,    -1,    -1,    -1,    -1,    55,
      56,    57,    17,    -1,    -1,    20,    -1,    33,    34,    35,
      -1,    37,    38,    -1,    40,    41,    42,    43,    33,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,     3,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    17,    -1,     7,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    33,
      34,    35,    36,    37,    38,    27,    40,    41,    42,    43,
       3,    33,    34,    35,     7,    37,    38,    -1,    40,    41,
      42,    43,     3,    -1,    17,    -1,     7,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      43,     3,    33,    34,    35,     7,    37,    38,    -1,    40,
      41,    42,    43,     3,    -1,    17,     6,     7,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,     3,    33,    34,    35,     7,    37,    38,    -1,
      40,    41,    42,    43,    -1,    -1,    17,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    -1,    40,
      41,    42,    43,     3,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    17,     7,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    20,    -1,    33,    34,    35,    -1,    37,    38,    18,
      40,    41,    42,    43,    33,    34,    35,    -1,    37,    38,
      -1,    40,    41,    42,    43,    34,    35,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    34,    35,    -1,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    60,    15,     0,    21,    28,    29,    61,    62,
      57,    68,    69,    63,    64,    68,    67,    68,    36,     5,
      45,    46,    70,    15,    68,    44,    12,    13,    14,    16,
      23,    25,    30,    31,    68,    72,    81,    57,    47,    68,
      71,    48,     4,    24,    65,    44,    64,    36,    68,    18,
      34,    35,    46,    55,    56,    68,    72,    73,    74,    76,
      81,    46,    73,    73,    46,    82,    46,    77,    32,    39,
      48,    11,    45,    36,    44,    19,    66,    68,    36,    64,
      39,    39,    73,    50,    52,    77,    78,    79,     3,     7,
      17,    20,    26,    33,    34,    35,    37,    38,    40,    41,
      42,    43,    75,    73,    11,    68,    72,     8,    47,    58,
      73,    83,    36,    47,    73,    68,    73,    73,    57,    71,
      64,    64,    66,    44,    39,    73,    73,    47,    68,    48,
      80,    81,    73,    36,    45,    81,    45,    45,    36,    49,
      44,    47,    49,    11,    64,    73,    36,    27,    39,    73,
      45,    10,    72,    11,    83,    73,    64,    15,    36,    36,
      73,    73,    19,    80,    73,    47,    36,    47,    47,    61,
       6,    36,    49,    53,    26,    36,    36,    73,    68,    73,
      81,     8,    39,     9,    81,    73,    81,    11,    51,    11,
      36,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    61,    62,    62,    62,    63,    64,    65,
      65,    66,    67,    67,    68,    68,    69,    70,    70,    71,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    74,    74,    74,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    77,
      77,    78,    79,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     4,     2,     2,     2,     4,     1,     3,
       4,     4,     6,     7,     1,     3,     9,     5,     2,     5,
       1,     4,     3,     1,     1,     3,     2,     3,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       2,     9,     5,     5,     2,     4,     7,     3,     6,     4,
      12,     2,     2,    12,     5,     2,     1,     1
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

#line 1437 "PCATParser.tab.c"

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

#line 193 "PCATParser.y"

