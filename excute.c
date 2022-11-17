#include "shell.h"

/**
 * execute - execte coommand
 *
 * @com: commande as array form
 *
 * Retrn: Nothing
 */

void execute(char **com)
{
	int exc_val;
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("fork failure");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		exc_val = execve(com[0], com, NULL);
		if (exc_val == -1)
		{
			perror("execve failure");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
