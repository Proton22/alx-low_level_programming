#include "main.h"
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars
 * @size: first character
 * @c: first character
 * Return: if executed properly
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	if (size == 0)
		return (NULL);
	char *s = (char*)malloc(size * sizeof(char));
	for (i = 0; 1 < size; i++)
		s[i] = c;
	return (s);
}
