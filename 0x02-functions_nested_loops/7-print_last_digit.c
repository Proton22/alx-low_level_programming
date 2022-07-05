#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: a character
 * Return: 0 if executed properly
 */
int print_last_digit(int n)
{
if (n < 0)
n = -n;
return (n % 10);
}
