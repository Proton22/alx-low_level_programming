#include "main.h"
/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: a character
 * Return: if executed properly
 */
void *malloc_checked(unsigned int b)
{
void *block;
block = malloc(b);
if (block == NULL)
exit(98);
return (block);
}
