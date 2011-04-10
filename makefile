all:
	lex mycalc.l; yacc -d mycalc.y; gcc -o mycalc y.tab.c lex.yy.c -ll -ly -lm;
