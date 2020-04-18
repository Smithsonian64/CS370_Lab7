#Lab7
#Michael Smith
#April 2020
#Lab7 parses by an input file and prints the abstract syntax tree according to
#ALGOL-C grammar and return the line number of the first error
#input: input file
#output: Abstract syntax tree and the first of, if any, errors plus symbol table#data
#

all:	lab7

lab7:	y.tab.c
	gcc lex.yy.c y.tab.c ast.c symtable.c -o lab7

y.tab.c:clean
	yacc -d lab7.y
	lex lab7.l

clean:
	rm -f y.tab.c y.tab.h




