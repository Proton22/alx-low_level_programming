#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: a character
 * Return: 0 if executed properly
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (x);
}
