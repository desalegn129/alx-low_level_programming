#include "main.h"
/**
 * _isdigit - chakes if c is digit
 * @c: char to be checked
 * Return: 1 success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
