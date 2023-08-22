#include "main.h"

/**
* _atoi - Converts a string to an integer.
*@s: The string to be converted.
* Return: The integer value of the converted string.
*/

int _atoi(char *s)
{
int sign = 1;
unsigned int N = 0;

do {
if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
N = (N * 10) + (*s - '0');

else if (N > 0)
break;

} while (*s++);

return (N *sign);
}
