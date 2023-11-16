#include "main.h"
/**
 * get_command - show prompt and get commmand from the user.
 * Return: return pointer to the command.
 */

char *get_command(void)
{
	char *command_line = NULL;
	size_t n;

	/**
	 * check if the input from the terminal(will return 1)
	 * not redirect from another file will return (0)
	 * */

	if (isatty(STDIN_FILENO))
		write (STDOUT_FILENO, "($) ", 4);

	if (getline(&command_line, &n, stdin) == -1)
	{
		free (command_line);
		perror("ERROR");
		return (NULL);
	}
	return (command_line);
}
