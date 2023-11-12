#include "main.h"
/**
 *exe - function that execte an executable file
 *@arg: an array og tokens ended by null
 *Return: nothing
 */

int exe(char *argv[])
{
	char *command = NULL;

	if (argv != NULL && argv[0] != NULL)
	{
	command = argv[0];
	execv(command, argv);
	}
	return (0);
}
