tableBasicTypes checkMethodCall(is_MethodCall* mC, environmentList *environment)
{
	is_Expressions_list* aux;
	tableElement* element = searchMethod(mC, NULL);
	int parCounter = 0;
	
	if (!element)
	{
		printf("Line %d: Method '%s' has not been declared.\n", mC->line, mC->id);
		errorCount++;
		
		/* We can't conclude anything about this method. */
		return s_VOID;
	}
	
	/* Now, we have to check the parameters. */
	for (aux = mC->argumentsList; aux != NULL && parCounter < element->noParameters; aux = aux->next)
	{
		/* If one of the parameters of the function mismatches the type given,
		 * we immediately return with an error.
		 */
		if (element->parameters[parCounter] != checkExpression(aux->exp, environment))
		{
			printf("Line %d: Parameter %d of method '%s' has an incorrect type.\n", mC->line, (parCounter + 1), mC->id);
			errorCount++;
			
			return s_VOID;
		}
		parCounter++;
	}
	
	/* The method call has too many arguments. */
	if (aux != NULL)
	{
		printf("Line %d: Too many arguments for method '%s'.\n", mC->line, mC->id);
		errorCount++;
			
		return s_VOID;
	}
	/* The method call has too few arguments. */
	if (parCounter < element->noParameters)
	{
		printf("Line %d: Too few arguments for method '%s'.\n", mC->line, mC->id);
		errorCount++;
			
		return s_VOID;
	}
	
	/* If everything's ok, we return the type of the method. */
	return element->type;
				
}
