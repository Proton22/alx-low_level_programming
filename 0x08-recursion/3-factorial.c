#include "main.h"
/**
 * factorial - Write a function that returns the factorial of a given number
 * @n: a character
 * Return: if executed properly
 */
int factorial(int n)
{
while (n < 0)
{
return (-1);
if (n == 0 || n == 1)
return 1;
return n * factorial(n - 1);
}
}
