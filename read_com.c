#include "shell.h"

/**
 * read_com - read commande from stdin
 *
 * Return: entire line entered by user without end delimiter
 */

char *read_com(void)
{
	ssize_t is_get_l;
	size_t  line = 0, line_len = 0;
	char *line_entered;

	is_get_l = getline(&line_entered, &line, stdin);
	if (is_get_l == -1)
	{
		perror("getline() Error");
		exit(EXIT_FAILURE);
	}
	line_len = strlen(line_entered);
	printf("enterlength = %lu\n", line_len);

	line_entered[line_len - 1] = '\0';

	return (line_entered);
}
