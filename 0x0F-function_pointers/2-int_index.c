#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer
 * @array: an array
 * @size: an integer
 * @cmp: second integer
 * Return: if executed properly
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL)
for (i = 0; i < size; i++);
{
cmp(array[i]);
}
if (cmp(array[i]) == NULL )
return (-1);	
if (size <= 0)
return (-1);
}
