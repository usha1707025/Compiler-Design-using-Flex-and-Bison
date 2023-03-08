
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


