#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "symbolTable.h"

extern tableElement* symtab;

/* Insert a new identifier at the tail of symbols linked list. */
tableElement *insertSymbol(char *str, tableBasicTypes t)
{
	tableElement *newSymbol = (tableElement*) malloc (sizeof(tableElement));
	tableElement *aux;
	tableElement* previous;

	strcpy(newSymbol->name, str);
	newSymbol->type = t;
	newSymbol->next = NULL;	

	/* If the table has already some elements. */
	if(symtab)
	{	
		/* Look for an element and verifies if it already exists (NOTE: it's assumed a global symbol table!) */
		for(aux = symtab; aux; previous = aux, aux = aux->next)
			if(strcmp(aux->name, str) == 0)
			{
				/* We have to deallocate the previously reserved space. */
				free(newSymbol);
				return NULL;
			}
		
		/* Adds the element to the end of the list. */
		previous->next=newSymbol;
	}
	/* It's the first symbol. */
	else
		symtab = newSymbol;		
	
	return newSymbol; 
}

void showTable()
{
	tableElement *aux;
	printf("\n");
	
	/* Prints all the elements in the table. */
	for(aux = symtab; aux; aux = aux->next)
		printf("symbol %s, type %d\n", aux->name, aux->type);
		
}

//TODO: nao deviamos passar a tabela como argumento? penso que vamos ter diferentes tabelas dependendo do contexto
/* Looks for a given identifier. Returns 0 if it already exists. */
tableElement *searchSymbol(char *str)
{
	tableElement *aux;

	for(aux = symtab; aux; aux = aux->next)
		if(strcmp(aux->name, str) == 0)
			return aux;

	return NULL;
}

environmentList* createEnvironment(is_MethodDeclaration *method){

	environmentList *env = (environmentList*)malloc(sizeof(environmentList));
	strcpy(env->name,method->methodDeclarator->id);
	//env->returnType = method->typeSpecifier->typeName->type; TODO: we must build some translation unit from primitiveType to tableBasicTypes
	env->type = Func; //TODO: CHECK THIS, declared in symbolTable.h
	env->next = NULL;

	return env;
}

environmentList* lookupEnvironment(environmentList* list, char *str){

	environmentList *aux;

	for(aux=list; aux; aux=aux->next)
		if(strcmp(aux->name, str)==0)
			return aux;

	return NULL;
}



