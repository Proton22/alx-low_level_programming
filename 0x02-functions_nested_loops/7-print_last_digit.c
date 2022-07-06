#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: a character
 * Return: if executed properly
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
n = -n;
x = n % 10;
if (x < 0)
x = -x;
_putchar(x + '0');
return (x);
}
