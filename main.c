#include "shell.h"
/*extern char **environ;*/
/**
 * shell - Prompt into user input
 *
 * Return: 0 on success and -1 if fails
 */
int shell(void)
{
	char *buff;
	int call = 0;
	int argc;
	char *argv[128];
	while (1)
	{
		buff = _get_line();
		if (buff == NULL)
		{ return (-1); }
		if (_strlen(buff) > 128)
		{
			free(buff);
			continue;
		}
		argc = split(buff, argv);
		if (argc <= 0)
		{
			free(buff);
			continue;
		}
		call = check_builtin_command(argv, environ);
		if (call == -1)
		{ _execve(argv[0], argv, environ); }
		free(buff);
	}
	return (0);
}
/**
 * main - starting point
 * Return: Always 0
 */
int main(void)
{
	shell();
	return (0);
} 
