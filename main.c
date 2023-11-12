#include "main.h"
/** 
 * main - a simple shell program
 * @argv: 
 * @argc: 
 * return: 0 for sucess 
 */

int main (int argc, char *argv[])
{
	char * get_line, *tokens[];
	while(1) 
	{
		get_line = get_command();
		if (get_line == NULL)
		{
			perror("ERROR:");
			return (-1);
		}
		tokens = tokenizing(get_line);


	}
	return (0);
}

