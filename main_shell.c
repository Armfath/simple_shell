#include "shell.h"

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	char *line;

	prompt();
	line = read_com();
	printf("%s", line);


	return (0);
}
