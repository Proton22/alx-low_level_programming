#include "main.h"
/**
 * string_toupper - print character
 * @z: a character
 * Return: a character
 */
char *string_toupper(char *x)
{
int i;
i = 0;
while (x[i])
{
if (x[i] >= 97 && x[i] <= 122; i++)
{
x[i] = x[i] - 32;
}
}
return (x);
}
