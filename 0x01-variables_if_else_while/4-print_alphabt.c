#include <stdio.h>
#include <stdlib.h>


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
        if (c != 'q' && c != 'e')
        {
            putchar(c);
        }
    }
    putchar('\n');
    return (0);
}

