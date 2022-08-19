#include "main.h"

/**
 * clear_bit - write a function
 * @n: a character
 * @index: the index of the bit to turn on
 * Return: -1 if n is NULL or the index is invalid, otherwise 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(*n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
