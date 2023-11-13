#include "main.h"
/**
 *
 *
 *
 *
 *
 */

void exit(char **token_array, char *get_line, int status)
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

