#include "main.h"

/**
*print_rev - prints a string in a eversed arrengement, followed by a new line.
*@s: string to be printed.
*return: 0
*/

void print_rev(char *s)
{
int len = 0, index;
char *k;

while (*s++)
len++;

for (index = len - 1; index >= 0; index--)
{
k = (s + index);
_putchar(*k);
}

_putchar('\n');
}
