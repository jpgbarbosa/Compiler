all:
	lex pJava.l; yacc -d pJava.y; gcc -o pJava y.tab.c lex.yy.c -ll -ly -lm;
