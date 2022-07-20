#include "main.h"
/**
 * is_prime_number - Write a function that returns a prime number
 * @n: a character
 */
int is_prime_number(int n)
{
if (n % 2 == 0)
return (0);
if (n % 2 != 0)
return (is_prime_number(1));
}
