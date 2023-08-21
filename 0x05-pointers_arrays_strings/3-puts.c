#include "main.h"

/**
*_puts - prnts string follwed by a new line
*@str: string to be printed
* retun: 0
*/

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
