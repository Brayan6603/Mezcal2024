%option noyywrap
%{
/* 
Our initial sintactical specification
enter:->{}

*/
#include "grammar.tab.h"
%}

digit[0-9]
alpha[a-zA-Z]
characters_block {quotes}({dot}*{alpha}*{whitespace}*{digit}*)+{quotes}
singlecomment {slash}{slash}({dot}*{whitespace}*)+{linefeed}
multilinecomment {minor}{plus}({dot}*{whitespace}*{linefeed}*)+{plus}{mayor} 
name {alpha}({digit}*{alpha}*)+
whitespace [ \r\t\v\f]
linefeed    \n
wildcard [*]
minor [<]
mayor [>]
plus [+]
dot .
slash [/]
quotes[\"]
dollar [$]

%%

"main"       {return MAIN;}
"answer"     {return ANSWER;}
"Int"        {return INT;}
"Dec"        {return DEC;}
"Bln"        {return BLN;}
"Str"        {return STR;}
"void"       {return VOID;}
"as"         {return AS;}
"show"       {return SHOW;}
"load"       {return LOAD;}
{dollar}     {return DOLLAR;}
"integrated" {return INTEGRATED;}
"tru"          {return TRUE;}
"fls"         {return FALSE;}
"|"           {return DIS;}
{digit}+        {return INT_VALUE;}
{digit}+\.{digit}+      {return DEC_VALUE;}

{name}  {return NAME; }
{characters_block}      {return CHARACTERS_BLOCK; }
{singlecomment}         {return SINGLECOMMENT;}
{multilinecomment}      {return MULTILINECOMMENT;}
","     {return COMMA;}
":"     {return COLON; }
"::"     {return DOUBLE_COLON;}
";"     {return SEMICOLON; }
"->"    {return RIGHT_ARROW; }
"{"     {return LEFT_CURLY_BRACE; }
"}"     {return RIGHT_CURLY_BRACE; }
"("     {return LEFT_PARENTHESIS;}
")"     {return RIGHT_PARENTHESIS;}
"["     {return LEFT_BRACKET;}
"]"     {return RIGHT_BRACKET;}
{minor} {return MINOR;}
{mayor} {return MAYOR;}
"="     {return EQUAL;}
"<="    {return MINOR_EQUAL;}
">="    {return MAYOR_EQUAL;}
"!="    {return NOT_EQUAL;}
"?"     {return RIGHT_INTER;}
"@"     {return AT;}
"+"     {return PLUS;}
"-"     {return LESS;}
{wildcard} {return MULT;}
{slash} {return DIV;}
"%"     {return MOD;}
"\\"    {return INVERSE_SLASH;}
"#"     {return SHARP; }
"."   {return DOT;}

{whitespace}
{linefeed}  ++yylineno;

%%

#include <stdio.h>


