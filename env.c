#include <stdio.h>
/*
 * main - testing env var
 * return: zero
 */
int main (int argc, char * argv[], char *env[])
{
	int i = 0;

	for ( i = 0; env[i] != NULL; i++)
	{
		printf("%d - %s\n", i, env[i]);
	}
	return (0);
}
