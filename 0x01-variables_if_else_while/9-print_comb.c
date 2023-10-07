#include <stdio.h>
int main(void)
{
    int d = 48;
    int fasila = 44;
    int space = 32;
    while (d < 58)
    {
        putchar(d);
        if (d != 57)
        {
            putchar(fasila);
            putchar(space);
        }
        d++;
    }
    putchar('\n');
    return (0);
}