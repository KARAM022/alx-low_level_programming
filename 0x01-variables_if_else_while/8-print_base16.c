#include <stdio.h>

/**
 * main - Determines if a number is positive. negative or zero.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    int d = 48;
    char c = 97;
    while (d < 58)
    {
        putchar(d);
        d++;
    }
    while (c < 103)
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return (0);
}