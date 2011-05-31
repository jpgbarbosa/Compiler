#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdbool.h>
#include "structures.h"

tableElement *insertSymbol(char *str, int offset, tableBasicTypes t, environmentList *environment, is_Expression* exp, bool isMethod);
void showTable();
tableElement *searchSymbolLocal(char *str, environmentList *environment);
tableElement *searchSymbolGlobal(char *str, bool isMethod);
tableElement *searchMethodCall(is_MethodCall *mD);
environmentList *searchEnvironment(char *str);
environmentList *createNewEnvironment(environmentList *parent);
bool searchInMethodScope(char *str, environmentList *environment);


#endif
