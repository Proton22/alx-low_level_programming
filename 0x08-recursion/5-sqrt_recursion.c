#include "main.h"
/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: On success 1
 */
int sqrt2(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - Write a function that returns the natural sqrt of a number
 * @n: a character
 * Return: if executed properly
 */
int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}
