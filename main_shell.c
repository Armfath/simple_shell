#include "shell.h"

int main(void)
{
    char *line;
    
    prompt();
    line = read_com();
    printf("%s",line);


    return (0);
}
