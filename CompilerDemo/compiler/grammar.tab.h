/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 52 "grammar.tab.h"

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
