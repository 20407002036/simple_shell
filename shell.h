#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>


void print_hello_world(void);
void command_line_interpreter(int argc, char *argv[]);
void tokenize(char *str, char *argv[]);
int is_command_exist(char *command);
void execute_command(const char *command, char *argv[]);
void free_args(char *argv[]);
void process_command(char *user_input);
void run_exit();
void run_env();


#endif 
