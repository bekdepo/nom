#ifndef CLEXER_H
#define CLEXER_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "nerr.h"

enum TOKEN_TYPES
{
	IF,
	IFELSE,
	ELSE,
	ELSEIF,
	ELSEIFELSE,
	FOR,
	END,
	WHILE,
	RETURN,
	FUNCTION,
	EQUAL,
	IS_EQUAL,
	NOT_EQUAL,
	GREATER,
	GREATER_OR_EQ,
	LESS,
	LESS_OR_EQ,
	RPAREN,
	LPAREN,
	RBRACK,
	LBRACK,
	RCBRACK,
	LCBRACK,
	QUOTATION,
	FLOAT,
	INT,
	STRING,
	COLON,
	COMMA,
	PLUS,
	MINUS,
	DIVIDE,
	MULT,
	INC,
	DEC,
	UNARY_NEG,
	BAND,
	BOR,
	BXOR,
	LAND,
	LNAND,
	LOR,
	LNOR,
	IDENTIFIER,
	NEWLINE,
	COMMENT,
	FUNC_CALL
};

typedef struct token
{
	char * tok;
	int len;
	int type;
	//For Errors
	int col, row;
} token;

//Splits string into tokens
token * tokenize(char * file, int * num_tok);
//Returns a TOKEN_TYPE
int token_type(char * tok, int * len);
//Is this token an operator
int is_operator(token tok);
//Is this token a conditional 
int is_conditional(token tok);
//Returns number of operator precedence. 
int token_precedence(token tok);
//Is left associative or is it right associative
int token_associative(token tok);
//Returns number of idxs (eg: binary, unary, etc)
int token_idxs(token tok);

#endif