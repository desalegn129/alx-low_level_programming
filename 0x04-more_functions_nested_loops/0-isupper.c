#include "main.h"
/**
 * _isupper - checks if the char is uppercase
 * @c: char to check
 * Return: 1 success, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
