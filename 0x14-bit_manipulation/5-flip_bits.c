#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits
 * @n: the first integer
 * @m: the second integer
 * Return: if executed properly
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= m;
	m = 0;
	while (n)
	{
		m += 1 & n;
		n >>= 1;
	}
	return (m);
}
