#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char c;
    for (i = 0; i < 26; i++)
    {
        c = 'a' + i;
        putchar(c);
    }
    for (i = 0; i < 26; i++)
    {
        c = 'A' + i;
        putchar(c);
    }
    putchar('\n');
    return (0);
}

