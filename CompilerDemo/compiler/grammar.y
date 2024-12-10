%code requires{
    #include <string>
}

%{

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include <memory>


extern char *yytext;
int yylex(void);
void yyerror(char const *);
std::string result;
%}

%define api.value.type {std::string}

%token NAME COLON RIGHT_ARROW LEFT_CURLY_BRACE RIGHT_CURLY_BRACE SEMICOLON LEFT_PARENTHESIS RIGHT_PARENTHESIS SINGLECOMMENT MULTILINECOMMENT CHARACTERS_BLOCK COMMA FALSE TRUE DIS INT DEC BLN STR AS INT_VALUE DEC_VALUE SHOW DOLLAR LOAD DOUBLE_COLON LEFT_BRACKET RIGHT_BRACKET VOID MAIN ANSWER MINOR MAYOR EQUAL MINOR_EQUAL MAYOR_EQUAL NOT_EQUAL RIGHT_INTER AT LESS PLUS MULT DIV MOD INVERSE_SLASH SHARP INTEGRATED DOT
%start input
%%

input:
    function_or_struct function_or_struct_list{result = std::string("#include<cstdio>\n #include<iostream>\n using namespace std; \n")+$1+$2;}
;

function_or_struct_list:
    function_or_struct function_or_struct_list{$$ = $1 + $2; }
    | %empty    {$$ = "";}
    ;

function_or_struct:
    MAIN DOUBLE_COLON LEFT_BRACKET RIGHT_BRACKET RIGHT_ARROW LEFT_BRACKET int_type RIGHT_BRACKET COLON LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE 
    {
        $$ = std::string("int main(){\n" + $11 + "\n}");
    }
    |
    name DOUBLE_COLON LEFT_BRACKET input_type RIGHT_BRACKET RIGHT_ARROW LEFT_BRACKET return_type RIGHT_BRACKET COLON LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE 
    {
        if($8 == "Int"){
            $$ = std::string("int ") + $1 + "("+ $4 +"){" + $12 + "\n}\n\n";
        }
        else if($8 == "Dec"){
            $$ = std::string("double ") + $1 + "("+ $4 +"){" + $12 + "\n}\n\n";
        } 
        else if($8 == "Bln"){
            $$ = std::string("bool ") + $1 + "("+ $4 +"){" + $12 + "\n}\n\n";
        } 
        else if($8 == "Str"){
            $$ = std::string("string ") + $1 + "("+ $4 +"){" + $12 + "\n}\n\n";
        }else{
            $$ = std::string("void ") + $1 + "("+ $4 +"){" + $12 + "\n}\n\n";
        }
    }
    |
    name DOUBLE_COLON LEFT_BRACKET RIGHT_BRACKET RIGHT_ARROW LEFT_BRACKET return_type RIGHT_BRACKET COLON LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE 
    {
        if($7 == "Int"){
            $$ = std::string("int ") + $1 + "(){" + $11 + "\n}\n\n";
        }
        else if($7 == "Dec"){
            $$ = std::string("double ") + $1 + "(){" + $11 + "\n}\n\n";
        } 
        else if($7 == "Bln"){
            $$ = std::string("bool ") + $1 + "(){" + $11 + "\n}\n\n";
        } 
        else if($7 == "Str"){
            $$ = std::string("string ") + $1 + "(){" + $11 + "\n}\n\n";
        }else{
            $$ = std::string("void ") + $1 + "(){" + $11 + "\n}\n\n";
        }
    }
    |
    INTEGRATED LEFT_CURLY_BRACE definitions RIGHT_CURLY_BRACE AS ids SEMICOLON {$$ = "\nstruct " + $6 + "{\n" + $3 + "};\n\n";}
    |
    statement {$$ = $1;}
;

return_type:
    int_type {$$ = $1;}
    |
    dec_type {$$ = $1;}
    |
    bln_type {$$ = $1;}
    |
    str_type {$$ = $1;}
    |
    void_type {$$ = $1;}
;

input_type:
    ids AS INT {$$ = "int " + $1;}
    |
    ids AS DEC {$$ = "double " + $1;}
    |
    ids AS BLN {$$ = "bool " + $1;}
    |
    ids AS STR {$$ = "string " + $1;}
;

statements: 
    statements statement {$$ = $1 + $2;}
    | %empty    {$$ = "";}
    ;

statement:
    answer_statement SEMICOLON {$$ = $1;}
    |
    loop {$$ = $1;}
    |
    bifurcation {$$ = $1;}
    |
    std_input SEMICOLON {$$ = $1;}
    |
    assignment SEMICOLON {$$ = $1; }
    |
    definition {$$ = $1; }
    |
    SINGLECOMMENT {$$ = ""; }
    | 
    MULTILINECOMMENT {$$ = ""; }
    |
    std_output SEMICOLON    {$$ = $1; }
    |
    name SEMICOLON {
        $$ = "\n printf(\"%s \\n\", \"" + $1 + "\");";
        //std::cout << "Statement created\n";
        }
    | 
    expression SEMICOLON {$$ = std::move($1);}
;

answer_statement:
    ANSWER COLON value {$$ = "\n\nreturn " + $3 + ";\n";}
;

bifurcation:
    condition {$$ = $1;} 
    |
    DIS LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE {$$ = "else{" + $3 + "\n}\n";}
;

condition:
    LEFT_BRACKET logicalComparison RIGHT_BRACKET RIGHT_INTER LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE {$$ = "if(" + $2 + "){" + $6 + "\n}";}
    | 
    condition LEFT_BRACKET logicalComparison RIGHT_BRACKET RIGHT_INTER LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE {$$ = $1 + "else if(" + $3 + "){" + $7 + "\n}";}
;

loop:
    LEFT_BRACKET logicalComparison RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE{$$ = "\nwhile(" + $2 +"){" + $6 +"}\n";}
    |
    LEFT_BRACKET loop_int_definition INVERSE_SLASH logicalComparison INVERSE_SLASH loop_it RIGHT_BRACKET AT LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE{$$ = "\nfor(" + $2 + "; " + $4 + "; " + $6 + "){" + $10 + "}\n"; }

;

loop_it:
    name COLON value {$$ = "\n" + $1 + " = " + $3;}
    |
    name operator COLON value {$$ = "\n" + $1 + " "+ $2 +"= " + $4; }
;

loop_int_definition:
    name COLON value {$$ = "int " + $1 + " = " + $3;}
;

logicalComparison:
    value logicalOperator value {$$ = $1 + $2 + $3; }
;

logicalOperator:
    MINOR {$$ = " < ";}
    |
    EQUAL {$$ = " == ";}
    |
    MAYOR {$$ = " > ";}
    |
    MAYOR_EQUAL {$$ = " >= ";}
    |
    MINOR_EQUAL {$$ = " <= ";}
    |
    NOT_EQUAL {$$ = " != ";}
;

operation:
    value operator value {$$ = $1 + " " + $2 + " " + $3; }
    |
    operation operator value {$$ = $1 + " " + $2 + " " + $3; }

;

operator:
    PLUS {$$ = "+";}
    |
    LESS {$$ = "-";}
    |
    DIV {$$ = "/";}
    |
    MULT {$$ = "*";}
    |
    MOD {$$ = "%";}

;

arrayStruct_access:
    array_access DOT DOLLAR name {$$ = $1 + "." + $4;}
;

std_input:
    LOAD COLON ids {$$ = "\ncin >> " + $3 + ";\n"; }
    |
    LOAD COLON name LEFT_BRACKET value RIGHT_BRACKET DOT name {$$ = "\ncin >> " + $3 + "[" + $5 + "]" + "." + $8 + ";\n";}
;

assignment: 
    array_access DOT name COLON value {$$ = $1 + "." + $3 + " = " + $5 + ";\n";}
    |
    name COLON array_load {$$ = $1 + $3 + ";\n";}
    |
    name DOT name COLON value {$$ = $1 + "." + $3 + " = " + $5 + ";\n";}
    |
    name COLON expression {$$ = $1 + " = " + $3;}
    |
    name COLON value {$$ = "\n" + $1 + " = " + $3 + ";\n";}
    |
    name operator COLON value {$$ = "\n" + $1 + " "+ $2 +"= " + $4 + ";\n"; }
    |
    INT ids COLON int_value {$$ = "int " + $2 + " = " + $4 + ";\n";}
    |
    DEC ids COLON decimal_value {$$ = "double " + $2 + " = " + $4 + ";\n";}
    |
    BLN ids COLON bln_value {$$ = "bool " + $2 + " = " + $4 + ";\n";}
    |
    STR ids COLON characters_block {$$ = "string " + $2 + " = " + $4 + ";\n";}
    |
    INT ids COLON expression {$$ = "int " + $2 + " = " + $4;}
    |
    DEC ids COLON expression {$$ = "double " + $2 + " = " + $4;}
    |
    BLN ids COLON expression {$$ = "bool " + $2 + " = " + $4;}
    |
    STR ids COLON expression {$$ = "string " + $2 + " = " + $4;}
;

values:
    values COMMA value {$$ = $1 + " << " + $3;}
    |
    value {$$ = $1;}
;

value:
    operation {$$ = $1;}
    |
    int_value {$$ = $1;}
    |
    decimal_value {$$ = $1;}
    |
    bln_value {$$ = $1;}
    |
    characters_block {$$ = $1;}
    |
    data_var {$$ = $1;}
    |
    array_access {$$ = $1;}
    |
    arrayStruct_access {$$ = $1;}
;

definitions:
    definitions definition {$$ = $1 + $2;}
    |
    %empty {$$ = "";}
;

definition:
    definition_without_val SEMICOLON {$$ = $1;}
    |
    definition_with_val SEMICOLON {$$ = $1;}
    |
    definition_for_arrays SEMICOLON {$$ = $1;}
    | 
    definition_for_struct_type SEMICOLON {$$ = $1;}
    
;

definition_without_val:
    identifiers AS INT {$$ = "int " + $1 + ";\n";}
    |
    identifiers AS DEC {$$ = "double " + $1 + ";\n";}
    |
    identifiers AS BLN {$$ = "bool " + $1 + ";\n";}
    |
    identifiers AS STR {$$ = "string " + $1 + ";\n";}
;

definition_with_val:
    INT ids int_value {$$ = "int " + $2 + " = " + $3 + ";\n";}
    |
    DEC ids decimal_value {$$ = "double " + $2 + " = " + $3 + ";\n";}
    |
    BLN ids bln_value {$$ = "bool " + $2 + " = " + $3 + ";\n";}
    |
    STR ids characters_block {$$ = "string " + $2 + " = " + $3 + ";\n";}
;

definition_for_arrays:
    identifiers AS INT LEFT_BRACKET value RIGHT_BRACKET {$$ = "int " + $1 + "[" + $5 + "]" + ";\n";}
    |
    identifiers AS DEC LEFT_BRACKET value RIGHT_BRACKET {$$ = "double " + $1 + "[" + $5 + "]" + ";\n";}
    |
    identifiers AS BLN LEFT_BRACKET value RIGHT_BRACKET {$$ = "bool " + $1 + "[" + $5 + "]" + ";\n";}
    |
    identifiers AS STR LEFT_BRACKET value RIGHT_BRACKET {$$ = "string " + $1 + "[" + $5 + "]" + ";\n";}
;


definition_for_struct_type:
    identifiers AS ids {$$ = "\n" + $3 + " " + $1 + ";\n";}
    |
    identifiers AS ids LEFT_BRACKET value RIGHT_BRACKET {$$ = "\n" + $3 + " " + $1 + "[" + $5 +"];\n";}
;

identifiers:
    identifiers COMMA ids {$$ = $1 +", "+ $3; } 
    |
    ids {$$ = $1;}
    |
    %empty {$$ = ""; }
;

ids:
    name {$$ = $1; }
;

std_output: 
    SHOW COLON ids {$$ = "\ncout << &" + $3 + " <<endl;";}
    |
    SHOW COLON values {$$ = "\ncout << " + $3 + " <<endl;";}
    |
    SHOW COLON DOLLAR name COMMA value {$$ = "\ncout << " + $4 + "[" + $6 + "]<<endl;";}
    |
    SHOW COLON DOLLAR name COMMA SHARP {$$ = "\ncout << sizeof(" + $4 + ") / sizeof(" + $4 + "[0]) <<endl;";}
;

array_load:
    LEFT_BRACKET value operator value COMMA value RIGHT_BRACKET {$$ = "[" + $2 + $3 +$4+ "] = " + $6;}
    |
    LEFT_BRACKET value COMMA value RIGHT_BRACKET {$$ = "[" + $2 + "] = " + $4;}
;

array_access:
    DOLLAR name LEFT_BRACKET value RIGHT_BRACKET {$$ = $2 + "[" + $4 + "]";}
;

data_var:
    DOLLAR ids {$$ = $2;}
;

characters_block:
    CHARACTERS_BLOCK {$$ = std::string(yytext);}
;

expression: 
    name LEFT_BRACKET RIGHT_BRACKET{
        $$ = $1 + "();\n";
    }
    |
     name LEFT_BRACKET value RIGHT_BRACKET{
        $$ = $1 + "("+$3+");\n";
    }
;

int_value:
    INT_VALUE {$$ = std::string(yytext); }
;

decimal_value:
    DEC_VALUE {$$ = std::string(yytext); }
;

bln_value:
    TRUE {$$ = "true";}
    |
    FALSE {$$ = "false";}
;

int_type:
    INT {$$ = std::string(yytext); }
;

dec_type:
    DEC {$$ = std::string(yytext); }
;

bln_type:
    BLN {$$ = std::string(yytext); }
;

str_type:
    STR {$$ = std::string(yytext); }
;

void_type:
    VOID {$$ = std::string(yytext); }
;

name: 
    NAME {
   $$= std::string(yytext);
    }
;


%%


void yyerror(char const *x){
    printf("Error %s\n", x);
    exit(1);
}