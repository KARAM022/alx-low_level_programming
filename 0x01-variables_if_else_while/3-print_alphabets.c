#include <stdio.h>

/**
 * main - Determines if a number is positive. negative or zero.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'a';
    char C = 'A';
    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    while (C <= 'Z')
    {
        putchar(C);
        C++;
    }
    putchar('\n');
    return (0);
}