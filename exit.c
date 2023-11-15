#include "main.h"
/**
 *exit_commad - a buit in function to exit the program
 *@token_array: array contain all the argument
 *@get_line: the command that the user enter it
 *@status: the exit status
 *Return: nothing
 */
void exit_command(char **token_array, char *get_line, int status)
{
	int new_status; 

	if (token_array[1] == NULL)
	{
		free(token_array);
		free(get_line);
		exit(status);
	}
	else
	{
		new_status = atoi(token_array[1]);
		free(token_array);
		free(get_line);
		exit (new_status);
	}
}
