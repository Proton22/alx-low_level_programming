#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - Write a function that returns the sum of all parameters
 * @n: an integer
 * Return: if executed properly
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
unsigned int i;
int sum = 0;
if (n == 0)
return (0);
va_start(arg, n);
for (i = 0; i < n; i++)
sum += va_arg(arg, int);
va_end(arg);
return (sum);
}
