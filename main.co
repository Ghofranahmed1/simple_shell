#include "main.h"
/** 
 * main - a simple shell program
 * @argv: 
 * @argc: 
 * return: 0 for sucess 
 */

int main(int ac, char *argv[], char *env[])
{
	char * get_line = NULL, **tokens = NULL;
	int exit_status = 0;
	int n = 0, path_num = 0, _exit = 0;
	(void)ac;

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
			if (!strcmp(tokens[0], "exit") && tokens[1] == NULL)
				exit_command(tokens, get_line, exit_status);
			if (!strcmp(tokens[0], "env"))
				get_env(env);
			else
			{
				n = all_path(&argv[0], env);
				_exit = command_execution(tokens, argv, env, get_line, path_num, n);
				if (n == 0)
					free(tokens[0]);
			}
			free(tokens);
		}
		else
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			exit(_exit);
		}
		free(get_line);
	}
	return (_exit);
}
