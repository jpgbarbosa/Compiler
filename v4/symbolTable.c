#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "symbolTable.h"

extern progEnv *pEnv;

/* Insert a new identifier at the tail of symbols linked list. */
tableElement *insertSymbol(char *str, tableBasicTypes t, environmentList *environment)
{
	tableElement *newSymbol = (tableElement*) malloc (sizeof(tableElement));
	tableElement *aux;
	tableElement* previous;

	strcpy(newSymbol->name, str);
	newSymbol->type = t;
	newSymbol->next = NULL;	

	/* If the table has already some elements. */
	if(environment->locals)
	{	
		/* Look for an element and verifies if it already exists (NOTE: it's assumed a global symbol table!) */
		for(aux = environment->locals; aux; previous = aux, aux = aux->next)
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
		environment->locals = newSymbol;		
	/* If we are inserting a method, we have to create its corresponding
	 * environment.
	 */
	if (t == s_METHOD)
	{
		environmentList *env = malloc(sizeof(environmentList));
		
		strcpy(env->name, str);
		env->locals = NULL;
		env->next = NULL;
		env->parent = NULL;
		
		/* It's the first method. */
		if (pEnv->methods == NULL)
			pEnv->methods = env;
		else
		{
			/* Inserts at the tail of the list. */
			environmentList *aux;
			for (aux = pEnv->methods; aux->next != NULL; aux = aux->next);
			aux->next = env;
		}
	}
	
	return newSymbol; 
}

//TODO: nao deviamos passar a tabela como argumento? penso que vamos ter diferentes tabelas dependendo do contexto
/* Looks for a given identifier. Returns 0 if it already exists. */
tableElement *searchSymbolLocal(char *str, environmentList *environment)
{
	tableElement *aux;

	/* Finds the last element of the list. */
	for(aux = environment->locals; aux; aux = aux->next);

	return NULL;
}

/* Looks for a symbol in the global list. */
tableElement *searchSymbolGlobal(char *str)
{
	tableElement *aux;

	for(aux = pEnv->globalTable->locals; aux; aux = aux->next)
		if(strcmp(aux->name, str) == 0)
			return aux;

	return NULL;
}

/* Given a name of a method, returns its environment. */
environmentList *searchEnvironment(char *str)
{
	environmentList *aux;

	for(aux = pEnv->methods; aux; aux = aux->next)
		if(strcmp(aux->name, str) == 0)
			return aux;

	return NULL;
}

environmentList *createNewEnvironment(environmentList *parent)
{
	environmentList *env = malloc(sizeof(environmentList));
	env->locals = NULL;
	env->parent = parent;
	
	return env;
}


