#include "main.h"
#include <stdio.h>

/**
*print_array - prints n number of elements of an array of integers,
*followed by a new line.
*@a: pointer to array of integers.
*@n: number of elements to be printed.
* Return: void
*/

void print_array(int *a, int n)
{
int index = 0;

for (index = 0; index < n; index++)
{
printf("%d", a[index]);

if (index == n - 1)
continue;

printf(", ");
}
printf("\n");
}

