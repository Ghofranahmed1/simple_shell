#include "main.h"

/**
 * tokenizing - function to create an array of tokens
 *@prompt: a pointer to a string
 *Return: return the array of tokens.
 */

char **tokenizing(char *prompt)
{
	int i = 0;
	size_t j = 0, num = 0;
	char *token = NULL, **tokens_array = NULL;

	if (prompt == NULL)
	{
		perror("ERROR:");
		return (NULL);
	}
	for ( j = 0; prompt[j]; j++)
	{
		if (prompt[j] == ' ')
			num++;
	}
	if ((num + 1) == strlen(prompt))
		return (NULL);
	tokens_array = malloc(sizeof(char *) * (num + 2));
	if (tokens_array == NULL)
	{
		perror("ERROR:");
			return (NULL);
	}
	token = strtok (prompt, " \n\t\r");
	for (i = 0; token != NULL; i++)
	{
		tokens_array[i] = token;
		token = strtok(NULL, " \n\t\r");
	}
	tokens_array[i] = '\0';
	return (tokens_array);
}
