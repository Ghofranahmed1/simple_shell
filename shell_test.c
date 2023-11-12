#include "main.h"

int main(int argc, char *argv[])
{
	char *buffer; /**buffer_copy*/ char *token;
	int check_get; /*num_token*/int check_execve, i;
	size_t n;
	pid_t pid;

	while (1)
	{
		printf("($)");

	if ((check_get = getline(&buffer, &n, stdin)) == -1)
	{
		perror("ERROR:");
		return (-1);
	}
	/*if ((buffer_copy = strdup(buffer)) == NULL)
	{
		perror("ERROR:");
		return (-1);
	}*/
	/*token = strtok(buffer_copy, " ");
	while (token != NULL)
	{
		num_token++;
		token = strtok(NULL, " ");
	}
		num_token++;*/
		argv = malloc (sizeof (char *) * (argc + 1));
		token = strtok(buffer, " ");
		for (i = 0; token != NULL; i++)
		{
			if ((argv[i] = strdup(token)) == NULL)
			{
				perror("ERROR");
					return (-1);
			}
			token = strtok(NULL, " ");
		}
		argv[i] = NULL;
		pid = fork();
		if (pid == -1)
		{
			perror("ERROR:");
			return (-1);
		}
		else if (pid == 0)
		{
		if ((check_execve = execve(argv[0], argv, NULL)) == -1)
		{
			perror("ERROR:");
				return (-1);
		}
		}
		else
		{
			wait(NULL);
		}
		return (0);
	}
}
