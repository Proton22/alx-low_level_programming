#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;

	return (*(char *)(&n) == 1);
}
