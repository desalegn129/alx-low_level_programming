#include "main.h"
/**
* _sqrt_recursion - returns the squar root of a given number
* @n: number to compute squar root of
*Return: the squar root of a given number
*/
int _sqrt_recursion(int n)
{
int i;
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_recursion(n, i + 1));
}
