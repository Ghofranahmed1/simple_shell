#include "main.h"
int main(void)
{
    char *argv[] = {"/usr/bin/ls", "-l",NULL};
    printf("before execve\n");
    if (execve(argv[0], argv, NULL) == -1)
    {
	    perror("error:");
    }
    printf("after execv\n");
    return (0);
}
