#include "shell.h"

/**
 * main - Test
 *
 * Return: 0 On success
 */

int main(void)
{
	int nwords = 0;
	char **arr;

	do {
		prompt();
		arr = split_com(read_com(), &nwords);
		execute(arr);
	} while (1);

	return (0);

}
