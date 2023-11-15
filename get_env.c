#include"main.h"
/**
 * get_env: function that print all env var.
 * @env: a all enviromen variable
 * Return: nothing
 */

void get_env(char *env[])
{
	int i = 0;

	for(i = 0; env[i] != NULL; i++)
		printf("%s\n", env[i]);
}
