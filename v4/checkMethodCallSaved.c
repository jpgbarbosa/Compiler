
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

	while(!element)
	{
		parCounter = 0;
		
		/* Now, we have to check the parameters. */
		for (aux = mC->argumentsList; aux != NULL && parCounter < element->noParameters; aux = aux->next)
		{
			/* If one of the parameters of the function mismatches the type given,
			 * we immediately pass to the next iteration.
			 */
			if (element->parameters[parCounter] != checkExpression(aux->exp, environment))
			{
				printf("HERE!\n");
				element = searchMethod(mC, element);
				continue;
			}
				
			parCounter++;
		}
		
		/* The method call has too many or few arguments. */
		if (aux != NULL || parCounter < element->noParameters)
		{
			printf("THERE!\n");
			element = searchMethod(mC, element);
		}

	};
	
	if (element == NULL)
	{
		printf("Line %d: Method '%s' exists, but there's an incompatibility with the parameters.\n", mC->line, mC->id);
		errorCount++;
		return s_VOID;
	}
	
	/* If everything's ok, we return the type of the method. */
	return element->type;
				
}
