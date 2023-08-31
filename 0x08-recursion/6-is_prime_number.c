#include "main.h"
int actual_prime(int n, int i);
/**
* is_prime_number - validates if a number is prime or not
* @n: number to be validated
*Return: 1 if n is a prime number,  0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}
