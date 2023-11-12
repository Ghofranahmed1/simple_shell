#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
int _strlen(char *str);
int cpstr(char *str_cp, char *str);
int exe(char *argv[]);
char * get_command(void);
int main(int argc, char *argv[]);

#endif
