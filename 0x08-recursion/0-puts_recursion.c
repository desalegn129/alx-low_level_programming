#include "main.h"
/**
* _puts_recursion - is function that prints strings recursivly
*@s: is input
* Return: 0
*/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
