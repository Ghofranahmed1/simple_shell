#include "main.h"
/**
 *get_path - a function that find path var in env and instract it's value.
 *@env: all the enviroment variable
 *Return: a pointer to the path valu
 */

char * get_path(char **env)
{
	size_t index = 0, count = 0, count_new = 0;
	char *path = NULL;

	for(index = 0; strncmp(env[index], "PATH=", 5); index++)
		;
	if (env[index] == NULL)
		return (NULL);
	for (count = 5; env[index][count]; count++)
		count_new++;
	path = malloc(sizeof(char) * (count_new + 1));
	for (count_new = 0, count = 5; env[index][count]; count++, count_new++)
		path[count_new] = env[index][count];
	path[count_new] = '\0';
	return (path);
}
