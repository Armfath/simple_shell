#include "shell.h"

/**
 * read_com - read commande from stdin
 *
 * Return: entire line entered by user without end delimiter
 */

char *read_com(void)
{
	ssize_t entered_len;
	size_t  line = 0;
	char *entered = NULL;

	entered_len = getline(&entered, &line, stdin);
	if (entered_len == -1)
	{
		perror("getline() Error");
		exit(EXIT_FAILURE);
	}
	entered[entered_len - 1] = '\0';

	return (entered);
}
