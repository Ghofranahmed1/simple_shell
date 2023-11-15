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
	int n = 0, path_num = 0, _exit = 0;

	while(1) 
	{
		get_line = get_command();
		if (get_line != NULL)
		{
			path_num++;
			tokens = tokenizing(get_line);
			if (tokens == NULL)
			{
				free(get_line);
				continue;
			}
			if (!strcmp(tokens[0], "exit"))
				exit(tokens, get_line, exit_satus);
			if (!strcmp(token[0], "env"))
				get_env(env);
			else
			{
				n = all_path(&argv[0], env);
			}
		}
	}
}







	}
	return (0);
}

