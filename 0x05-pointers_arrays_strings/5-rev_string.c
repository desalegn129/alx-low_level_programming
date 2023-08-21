#include "main.h"

/**
*rev_string - reverses a string.
*@s: string to be reversed
*/

void rev_string(char *s)
{
int len = 0, index = 0;
char d;

while (s[index++])
len++;

for (index = 0; index < len / 2; index++)
{
d = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = d;
}
}
