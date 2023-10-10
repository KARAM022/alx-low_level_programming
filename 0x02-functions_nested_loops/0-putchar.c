#include <stdio.h>
#include "main.h"

/***/

int main(void)
{
    char charlist[] = "_putchar\n";
    int i;

    for (i = 0; i < 9; i++)
    {
        _putchar(charlist[i]);
    }
    return (0);
}
