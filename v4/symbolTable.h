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
	int offset;

} /* tableElement */;


struct _t4{
	tableElement *locals;
	environmentList *parent;
	/* Only for methods. */
	char name[256];
	tableBasicTypes returnType;
	environmentList *next;
} /* environmentList */;

struct _t5{
	environmentList* globalTable;
	environmentList* methods;
} /* progEnv */;

tableElement *insertSymbol(char *str, tableBasicTypes t, environmentList *environment);
void showTable();
tableElement *searchSymbolLocal(char *str, environmentList *environment);
tableElement *searchSymbolGlobal(char *str);
environmentList *searchEnvironment(char *str);
environmentList *createNewEnvironment(environmentList *parent);



#endif
