#include "main.h"
/**
 * _strlen - gets length of strin str
 * @s: pointer of the strin length
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

