#include "main.h"
/**
 *all_path - function to creat all pathes in indivisual and add the command at end of it.
 *@commad: user enterd command
 *@env: all enviroment variable
 *Return: an intger 0 for sucess
 */
int all_path(char **command, char **env)
{
	char *whole_path = NULL, *token = NULL, *one_path = NULL;
	size_t command_len;
	/*size_t command_len;*/
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
	command_len = strlen(*command);
	while (token)
	{
		one_path = malloc(sizeof(char) * (strlen(token) + command_len + 2));
		if (one_path == NULL)
		{
			free(whole_path);
			return (-1);
		}
		one_path = strcpy(one_path, token);
		strcat(one_path, "/");
		strcat(one_path, *command);
		if (stat(one_path, &lineptr) == 0){
			/** mean file exist */
			*command = one_path;
			free(whole_path);
			return(0);
		}
		free(one_path);
		token = strtok(NULL, ":");
	}
	free(whole_path);
	return (-1);
}
