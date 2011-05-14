all:
	lex pJava.l;
	yacc -d pJava.y -v;
	gcc -o pJava y.tab.c lex.yy.c insertionFunction.c showTree.c symbolTable.c semantics.c -ll -ly -lm -Wall;
