#include"main.h"
/*
 * command_execution - function thae execute the command
 *@array_token: arraay if token that arrat_token[0] has been change.
 *@argve: the commad the the user enter it.
 *@env: enviroment variable
 *linepte: command the get_line it from the user
 *
 */

int command_execution(char **array_token, char **argv, char **env, char *lineptr, int path_value, int path_fun_return)
{
	pid child;
	char *format = "%s: %d: %s: not found\n";
	int buffer;

	child = fork();
	/*
	 * for childern
	 */
	if (child = 0)
	{
		if (execve(argv[0], argv, env) == -1)
		{
			fprintf(stderr, format,argv[0], path_value, array_token[0]);
			if (!path_fun_return)
				free(array_token[0]);
			free(array_token);
			free(lineptr);
			exit(errno);
		}
	}
	else
	{
		waitpid(&buffer);
		if(WIFEXITED(status) && WEXITSTATUS(status) != 0)
				return (WEXITSTATUS(status));
	}
				return (0);
}
