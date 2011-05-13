#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include "structures.h"

typedef enum {s_BOOLEAN, s_CHAR, s_BYTE, s_SHORT, s_INT, s_LONG, s_FLOAT, s_DOUBLE, s_VOID,
				s_STRING, s_STRING_ARRAY, s_METHOD} tableBasicTypes;

typedef struct _t1 tableElement;
typedef struct _t4 environmentList;
typedef struct _t5 progEnv;

struct _t1
{
	char name[256];
	tableBasicTypes type;
	tableElement* next;

} /* tableElement */;


typedef enum {Func, WhileCycle, forCycle,  doCyle, ifElse, Global} environmentType;

struct _t4{
	char *name;
	tableElement *locals;
	environmentType type;

	environmentList *father;
	environmentList *localEnvironment;

	tableBasicTypes returnType;
	environmentList *next;
} /* environmentList */;


struct _t5{
	tableElement* globalTable;
	environmentList* procs;
} /* progEnv */;

tableElement *insertSymbol(char *str, tableBasicTypes t);
void showTable();
tableElement *searchSymbol(char *str);
environmentList* createEnvironment(is_MethodDeclaration *method);
environmentList* lookupEnvironment(environmentList* list, char *str);


#endif
