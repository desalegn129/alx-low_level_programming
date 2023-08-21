#include "main.h"
/**
 * swap_int - swaps the values 0f intiger a & b
 *@a: integer a
 *@b: intiger b
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

