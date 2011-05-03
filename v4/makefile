all:
	lex pJava.l;
	yacc -d pJava.y -v;
	gcc -o pJava y.tab.c lex.yy.c insertionFunction.c showTree.c check.c -ll -ly -lm;
