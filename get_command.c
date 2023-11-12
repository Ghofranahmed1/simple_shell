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

	if (isatty(0))
		write (1, "($) ", 4);


	if (getline(&command_line, &n, stdin) == -1)
	{
		free (command_line);
		perror("ERROR:");
		return (NULL);
	}
	free (command_line);
	return (command_line);
}
