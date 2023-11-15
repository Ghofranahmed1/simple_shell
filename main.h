#ifndef _MAIN_H_
#define _MAIN_H_
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
void exit_command(char **token_array, char *get_line, int status);
int _strlen(char *str);
int cpstr(char *str_cp, char *str);
int exe(char *argv[]);
char * get_command(void);
int main(int argc, char *argv[]);
char **tokenizing(char *prompt);
char * get_path(char **env);
void get_env(char *env[]);
int all_path(char **command, char **env);
#endif
