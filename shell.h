#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#define BUFFER_SIZE 1024

#define BUF_FLUSH '\0'

void print_hello_world(void);
void command_line_interpreter(int argc, char *argv[]);
void tokenize(char *str, char *argv[]);
int is_command_exist(char *command);
void execute_command(char *command, char *argv[], char *envp[]);
void free_args(char *argv[]);
void process_command(char *user_input, char *envp[]);
void run_exit(int status);
void run_env();
void run_exit_command(char *arg);
void run_ls_command(char *envp[]);
void run_setenv_command(char *args[]);
void run_unsetenv_command(char *arg);


void _eputs(char *str);
int _eputchar(char c);

int custom_strcmp(const char *str1, const char *str2);
char custom_strchr(const char *str, char c);
char custom_strcat(char *dest, const char *src);
char custom_strdup(const char *str);
char custom_strtok(char *str, const char *delim);
void custom_strcpy(char *dest, const char *src);
int custom_atoi(const char *str);


ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream);

#endif 
