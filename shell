#include "main.h"
/**
* main - simple shell
*@ac: num of arguments
*@argv: pointer to the arguments
* Return: 0 success or -1 for fail
**/
int main(int ac, char *argv[])
{
	char *buffer = NULL, *token, *buffer_cp = NULL;
	size_t n;
	ssize_t num_get_read;
	int i = 0, num_token = 0;
	(void)ac;

	while (1)
	{
		printf("(&) ");
		num_get_read = getline(&buffer, &n, stdin);
		if (num_get_read == -1)
			return (-1);
		/*write(1, buffer, num_get_read);*/
		buffer_cp = malloc (sizeof(char) * (num_get_read + 1));
		if (buffer_cp == NULL)
			return (-1);
		cpstr(buffer_cp, buffer);
		token = strtok(buffer_cp, " ");
		while (token)
		{
			num_token++;
			token = strtok(NULL, " ");
		}
		num_token++;
	argv = malloc(sizeof(char *) * (num_token + 1));
	token = strtok(buffer, " ");
	for (i = 0; token != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * _strlen(token));
		cpstr(argv[i], token);
		token = strtok(NULL, " ");
	}
	argv[i] = NULL;
	fork();
	execv(argv[0],argv);
	}
	free(buffer);
	free(buffer_cp);
	return (0);
}
