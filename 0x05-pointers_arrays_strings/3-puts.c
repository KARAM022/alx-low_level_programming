#include <stdio.h>
#include "main.h"

/***/

void _puts(char *str)
{
    for (int i = 0; *str != '\0'; str++)
    {
        putchar(*str);
    }
    putchar('\n');
}