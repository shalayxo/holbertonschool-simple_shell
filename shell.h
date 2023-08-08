#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
extern char **environ;
int shell(void);
char *_get_line();
int split(char *input, char *argv[]);
int check_builtin_command(char *argv[], char **env);
int _execve(char *path, char *argv[], char **envp);
int _strlen(char *s);
char *search_path(char *command);
char *_getenv(char *name);
/**
 * struct built - Structure of builtin functions
 * @name: command to match
 * @func: Name of the function
 */
typedef struct built
} built_t;
int _cd(char *argv[], char **env);
int _env(char *argv[], char **env);
int _stop(char *argv[], char **env);
#endif /* _SHELL_H_ */
