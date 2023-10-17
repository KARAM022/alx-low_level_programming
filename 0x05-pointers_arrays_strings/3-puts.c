#include <stdio.h>
#include "main.h"

/***/

void _puts(char *str)
{
    int i;
    
    for (i = 0; *str != '\0'; str++)
    {
        putchar(*str);
    }
    putchar('\n');
}