#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdbool.h>
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
	/* Only for variables. */
	
	bool isMethod;
	int offset;
	/* Only for methods. We limit the number of parameters to 32. */
	tableBasicTypes parameters[32];
	int noParameters;

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

tableElement *insertSymbol(char *str, int offset, tableBasicTypes t, environmentList *environment, is_Expression* exp, bool isMethod);
void showTable();
tableElement *searchSymbolLocal(char *str, environmentList *environment);
tableElement *searchSymbolGlobal(char *str, bool isMethod);
tableElement *searchMethodCall(is_MethodCall *mD);
environmentList *searchEnvironment(char *str);
environmentList *createNewEnvironment(environmentList *parent);
bool searchInMethodScope(char *str, environmentList *environment);


#endif
