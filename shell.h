#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void prompt(void);
char *read_com(void);
char **split_com(char *entered, int *number_of_words);
void execute(char **com);


#endif /*_SHELL_H*/
