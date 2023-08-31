#include "main.h"
/**
* _strlen_recursion - returns the length of givn strin
* @s: the string whose length is to be measured
*Return: the lenth of the string
*/

int _strlen_recursion(char *s)
{
int StrLent = 0;

if (*s)
{
StrLent++;
StrLent += _strlen_recursion(s + 1);
}
return (StrLent);
}
