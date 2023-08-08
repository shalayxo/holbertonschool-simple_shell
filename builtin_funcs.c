#include "shell.h"
/**
 * * _cd - the cd (change directory) command
 * *
 * * @argv: str array, list holding the command and args
 * * ^should have singular arg which is the absolute current path
 * * @env: environment var, unused
 * *
 * * Return: int, 0 on success, -1 on failure
 * */
int _cd(char *argv[], char **env)
{
	char cwd[128];
	(void) env;
	if (argv[1][0] != '/')
	{
		getcwd(cwd, sizeof(cwd));
		strcat(cwd, "/");
		strcat(cwd, argv[1]);
		chdir(cwd);
	}
	else
	{ chdir(argv[1]); }
	return (0);
}
/**
 * * _env - prints environment variables
 * *
 * * @argv: str array, unused
 * * @env: envirnoment var
 * *
 * * Return: int, 0 on success, -1 on failure
 * */
int _env(char *argv[], char **env)
{
	int i = 0;
	(void) argv;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
/**
 * _stop - frees argv[] and calls the function that's actually real
 *
 * @argv: str array, unused
 * @env: environment var, unused
 *
 * Return: int, always 0
 */
int _stop(char *argv[], char **env)
{
	(void) env;
	free(argv[0]);
	exit(0);
	return (0);
}
