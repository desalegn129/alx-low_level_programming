#include "main.h"

/**
 * print_line - prints straight line on a terminal
 * @n:nember of char _ to be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');

	}
		_putchar('\n');
}
