#include "main.h"
/**
 *all_path - function to creat all pathes in indivisual and add the command at end of it.
 *@commad: user enterd command
 *@env: all enviroment variable
 *Return: an intger 0 for sucess
 */
int all_path(char **command, char **env)
{
	char *whole_path = NULL, *token = NULL, one_path = NULL;
	size_t command_len;
	struct stat lineptr;

	/** 
	 * this in case the user enter the whole path name
	 */
	if (stat(*command, &lineptr) == 0)
		return (-1);

	whole_path = get_path(env);
	if (whole_path == NULL)
		return (-1);
	token = strtok(whole_path, ":");
	while (token)
	{
		one_path = malloc(sizeof(char) * (strlen(token) + strlen(*command) + 1));
		if (one_path == NULL)
		{
			free(whole_path);
			return (-1);
		}
		strcpy(one_path, token);
		strcat(one_path, '/');
		strcat(one_path, *comman);
		if (stat(one_path, &lineptr) == 0){
			/** mean file exist */
			*command == one_path;
			free(whole_path);
			return(0);
		}
		free(one_path);
		token = (NULL, ":");
	}
	free(whole_path);
	return (-1);
}