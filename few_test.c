#include "main.h"

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int one, i = 0;
	pid_t re;

	for (i = 0; i < 5; i++)
	{
		re = fork();
		if (re == -1)
			perror("Error:");
		return (1);
	}
	if (re == 0)
	{
		if (execve(argv[0], argv, NULL) == -1) 
		{
                perror("execve");
                return (1);
		}
	}
	else 
	{
		waitpid(re,&one, 0);
	}
	return (0);

}
