#include "function_pointers.h"
#include <stdio.h>
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
if (size <= 0)
return (-1);
if (array != NULL && cmp != NULL)
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
