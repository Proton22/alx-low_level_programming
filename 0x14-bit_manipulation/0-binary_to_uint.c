#include "main.h"
/**
 * binary_to_uint - Write a function that converts a binary number
 * @b: a constant character
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
if (!b)
return (0);

while (*b)
{
n <<= 1;
if (*b == '1')
n += 1;
else if (*b != '0')
return (0);
++b;
}
return (n);
}
