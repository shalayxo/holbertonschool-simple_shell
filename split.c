#include "shell.h"
/**
 * split - split user input into separate arguments
 *
 * @input: str, user input
 * @argv: str array, list of separated arguments
 *
 * Return: int, number of tokens, -1 if none
 */
int split(char *input, char *argv[])
{
	int i = 0;
	char *arg;
	if (input == NULL)
	{ return (-1); }
	arg = strtok(input, " \t\n\r");
	while (arg != NULL)
	{
		argv[i] = arg;
		i++;
		arg = strtok(NULL, " \t\n\r");
	}
	argv[i] = 0;
	return (i);
} 
