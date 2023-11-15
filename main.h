#ifndef _MAIN_H_
#define _MAIN_H_
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

void exit_command(char **token_array, char *get_line, int status);
int command_execution(char **array_token, char **argv, char **env, char *lineptr, int path_value, int path_fun_return);
char * get_command(void);
char **tokenizing(char *prompt);
char * get_path(char **env);
void get_env(char *env[]);
int all_path(char **command, char **env);
#endif
