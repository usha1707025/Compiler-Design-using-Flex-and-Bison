%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  #include "1707025.tab.h"
  extern FILE *yyin;
%}

%%
"void main_function()"	{return VOIDMAIN;}
"start"			{ return START;}
"end"			{ return END;}

[a-z]		{ yylval=*yytext - 'a';
			  return VARIABLE;
			}
[0-9]+      { yylval=atoi(yytext);
               return NUMBER;
			}
"##".*		{ printf("\nSingle line command\n");}
"#"[^#]+"#"	{ printf("\nMultiple line command\n");}
"integer"		{return INT;}
"float"		{return FLOAT;}
"double"	{return DOUBLE;}
"char"		{return CHAR;}

","			{ return COMMA;}
"semicolon"		{ return SC;}
"->"		{ return ASSIGN;}

"user_input"	{return SCAN;}
"("			{ return LB;}
")"			{ return RB;}
"output"	{ return OUT;}

"prime_number"	{return PRIME;}
"even_odd"		{return EVEN_ODD;}
"factorial"		{return FACT;}
"square_root"	{return SQRT;}
"power"		{ return POWER;}
"square"	{ return SQRE;}
"cube"		{ return CUBE;}
"fibonacci_series" 	{return FIBO;}
"summation"	{return SUMMATION;}
"divisors"	{return DIVISORS;}

"sum"		{ return SUM;}
"minus"		{ return MINUS;}
"mul"		{ return MUL;}
"div" 		{ return DIV;}

"whether"	{return IF;}
"ewhether"	{return ELIF;}
"otherwise"	{return ELSE;}
"do"		{return DO;}
"done"		{return DONE;}

"switch"	{ return SWITCH;}
":"			{ return COLON;}
"case"		{ return CASE;}
"default"	{ return DEF;}

"is_not_equal"	{return NEQU;}
"is_equal"	{return EQU;}
"greater_than_or_equal"		{return GRE;}
"greater_than" 	{return GR;}
"less_than_or_equal"	{return LE;}
"less_than"		{return LT;}
"sum+"		{return SUMM;}

"while"		{ return WHILE;}
"for"		{ return FOR;}
"in_range" 	{ return IR;}
"to"		{ return TO;}


[ \t\n]     ;
%%
