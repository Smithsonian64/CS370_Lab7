/*
 * symtable.c
 * 
 * pulled from https://forgetcode.com/C/101-Symbol-table
 *
 *	Modified by Michael Smith April 2020
 *
 * This code implements a symbol table through the use of a 
 * linked list and user input
 * 
 * IMPORTANT: The display method displays "address" rather than the offset.
 * Symbols will display address to show the overall position on the stack.
 * The level relative offset can be derived from the displayed address.
 *
 * When Delete is called only symbols for the indicated level are deleted.
 *
 * Search will return 1 if a symbol is exists at the current level or lower
 *
 * As an extra layer of certainty, void cannot be inserted into the table as
 * the type of a symbol unless it is a function in which case it is the return
 * type.
 *
 */

#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>
#include"symtable.h"

int size=0;


void Insert(enum OPERATORS type, char * name, int index, int offset, int level) {
	int n;
	n=Search(name, level);
		if(type == VOIDTYPE && index != -2) {
			printf("cannot insert a void type variable into table");
			exit(1);
		}
		struct SymbTab *p;
		p=malloc(sizeof(struct SymbTab));
		p->name = name;
		p->type = type;
		p->address = offset;
		p->level = level;
		p->index = index;
		p->next=NULL;
		if(size==0) {
			first=p;
			last=p;
		}
		else {
			last->next=p;
			last=p;
		}
		size++;
		printf("Symbol inserted:\"%s\" \"%s\" \"%d\"\n",getTypeName(p->type), p->name, p->address);
	
}

void Display() {
	int i;
	struct SymbTab *p;
	p=first;
	printf("\n%-20s%-20s%-20s%-20s\n","NAME","TYPE","ADDRESS","LEVEL");
	for(i=0;i<size;i++) {
		if(p->index == 0)
		printf("%-20s%-20s%-20d%-20d\n",p->name,getTypeName(p->type),p->address,p->level);
		else if(p->index == -1){
		char a3 [20];
		sprintf(a3, "%s[]", getTypeName(p->type));
		printf("%-20s%-20s%-20d%-20d\n",p->name,a3,p->address,p->level);
		}
		else if(p->index == -2) {
		char a2 [20];
		sprintf(a2, "%s()", p->name);	
		printf("%-20s%-20s%-20d%-20d\n",a2,getTypeName(p->type),p->address,p->level);
		}
		else { 
		
		char a [20];
		sprintf(a, "%s[%d]",getTypeName(p->type), p->index);
		printf("%-20s%-20s%-20d%-20d\n",p->name,a,p->address,p->level);
	
		}
		p=p->next;
	}
	printf("\n");
}

int Search(char * name, int level) {
	int i,flag=0;
	struct SymbTab *p;
	p=first;
	for(i=0;i<size;i++) {
		if(strcmp(p->name,name)==0 && p->level <= level) {
		flag=1;
		}
		p=p->next;
	}	
	return flag;
}

int Delete(int level) {
   

	
	struct SymbTab *p,*f=NULL; // we follow with pointer f
    int count = 0;
    p=first;
    f = p->next;
    
    if(p == NULL) return 0;
    else if(p != NULL && f == NULL && p->level == level) {
	p = NULL;
	size--;
	return 1;
    } else if(p != NULL && p->level == level) {
	first = p->next;
	f = f->next;
	size--;
    }

    while(f != NULL) {

	if(f->level == level) {
			
		count++;

		p->next = f->next;
		f = p->next;
		
		continue;	
	}
	p = p->next;
	f = p->next;

    }
    	last = p;
	size -= count;
    	return count;

}

int getAddress(char * name) {
	struct SymbTab *p;
	p=first;
	for(int i = 0; i < size; i++) {
		if(strcmp(p->name, name)==0) {
			return p->address;
		}
		p=p->next;
	}
	return -1;
}

char * getTypeName(enum OPERATORS type) {

	char * result;

	switch(type) {

		case INTTYPE:
			result = "INT";
			return result;
			break;
		case VOIDTYPE:
			result = "VOID";
			return result;
			break;
		case BOOLTYPE:
			result = "BOOLEAN";
			return result;
			break;
		default:
			//printf("Invalid type");
			result = "BAD";
			return result;

	}

}
