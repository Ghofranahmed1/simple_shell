#include "main.h"
/**
 *get_path - a function that find path var in env and instract it's value.
 *@env: all the enviroment variable
 *Return: a pointer to the path valu
 */

char * get_path(char **env)
{
	size_t index = 0, count = 5, var = 0;
	char *path = NULL;

	for(index = 0; strncmp(env[index], "PATH=", 5); index++)
		;
	if (env[index] == NULL)
		return (NULL);
	for (count = 5; env[index][count]; var++, count++)
		;
	path = malloc(sizeof(char) * (count + 1));
	if(path == NULL)
		return (NULL);
	for (var = 5, count = 0; env[index][var]; var++, count++)
		path[count] = env[index][var];
	path[count] = '\0';
	return (path);
}
