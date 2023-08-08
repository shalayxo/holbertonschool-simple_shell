#include "shell.h"
/**
 * check_builtin_command - checks and executes the corresponding func
 *
 * @argv: str array, user input, command with args
 * @env: environment var
 *
 * Return: int, obtained by running a func, -1 otherwise
 */
int check_builtin_command(char *argv[], char **env)
{
	int i = 0;
	built_t f[] = {
		{ "cd", _cd },
		{ "env", _env },
		{ "exit", _stop },
		{ NULL, NULL }
	};
	while (f[i].func != NULL)
	{
		if (strcmp(argv[0], f[i].name) == 0)
		{ return (f[i].func(argv, env)); }
		i++;
	}
	return (-1);
} 
