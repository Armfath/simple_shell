#include "shell.h"

/**
 * split_com - slpit comm
 *
 * @enter: com
 * @number_of_words: nwords
 *
 * Return: array of com
 */

char **split_com(char *enter, int *number_of_words)
{
	char *tok, **com = NULL, *enter_cpy = NULL, *delm = " ";
	int i = 0;

	if (*enter == '\0')
	{
		prompt();

	}
	enter_cpy = strdup(enter);
	tok = strtok(enter_cpy, delm);
	while (tok)
	{
		(*number_of_words)++;
		tok = strtok(NULL, delm);
	}

	com = malloc(sizeof(char *) * (*number_of_words));
	tok = strtok(enter, delm);
	for (i = 0; tok; i++)
	{
		com[i] = malloc(sizeof(char) * (strlen(tok) + 1));
		strcpy(com[i], tok);
		tok = strtok(NULL, delm);
	}
	com[i] = NULL;

	if (enter_cpy)
		free(enter_cpy);

	return (com);
}
