#include "main.h"
/** 
 * main - a simple shell program
 * @argv: 
 * @argc: 
 * return: 0 for sucess 
 */

int main (int argc, char *argv[], char *env[])
{
	char * get_line, **tokens;
	int exit_status = 0;
	while(1) 
	{
		get_line = get_command();
		if (get_line != NULL)
		{
			tokens = tokenizing(get_line);
			if (tokens == NULL)
			{
				free(get_line);
				continue;
			}
			if (!strcmp(tokens[0], "exit"))
				exit(tokens, get_line, exit_satus);
			if (!strcmp(token[0], "env"))
				getenv(env);
			else
			{







	}
	return (0);
}

