#include "main.h"
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars
 * @size: first character
 * @c: first character
 * @s: second character
 * @i: second integer
 * Return: if executed properly
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;
	if (size == 0)
		return (NULL);
	s = (char*)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; 1 < size; i++)
		s[i] = c;
	return (s);
}
