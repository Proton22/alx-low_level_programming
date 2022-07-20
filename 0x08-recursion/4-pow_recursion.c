#include "main.h"
/**
 * _pow_recursion - Write a function that returns the value of x & y
 * @x: first character
 * @y: second character
 * Return: if executed properly
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
