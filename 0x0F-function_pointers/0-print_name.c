#include <stdio.h>
#include "main.h"

/***/

void print_name(char *name, void (*f)(char *))
{
    f(name);
}

int main(void) {
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}