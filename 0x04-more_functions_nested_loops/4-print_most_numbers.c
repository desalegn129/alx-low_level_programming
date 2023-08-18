#include"main.h"

/**
 * print_most_numbers - Prints 01356789
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; c++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(i);
	}
	_putchar('\n');
}
