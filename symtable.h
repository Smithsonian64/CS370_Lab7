/*
 * symtable.c
 * 
 * Modified by Michael Smith February 2020
 * 
 * pulled from https://forgetcode.com/C/101-Symbol-table
 *
 * This code implements a symbol table through the use of a 
 * linked list and user input
 * 
 * modifications made:
 * -properly indented code
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include "ast.h"
 * -created a .h file and moved funciton prototypes there
 * -added comments
 */

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include "ast.h"

//int size=0;

struct SymbTab {
	int level;
	char * name;
	int index;
	enum OPERATORS type;
	int address;
	struct ASTNode * paramList;
	struct SymbTab * next;
};

struct SymbTab *first,*last;

void Insert(enum OPERATORS type, char * name, int index, int offset, int level);

void Display();

int Search(char * name, int level);

void Modify();

int Delete(int level);

int getData(char * name);

char * getTypeName(enum OPERATORS type);
