#include "shell.h"

/**
 * prompt - display the prompt showing it's time to type command
 *
 * Return: Nothing
 */

void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "$ ", 3);
	}
}
