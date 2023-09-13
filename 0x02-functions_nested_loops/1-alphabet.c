#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
* print_alphabet - Prints the lowercase alphabet
*/
void print_alphabet(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }

    putchar('\n');
}

int main()
{
    print_alphabet();
    return 0;
}
