#include "function_pointers.h"
/**
 * array_iterator - Write a function that executes a function
 * @array: an array
 * @size: a size
 * @action: an action
 * Return: if executed properly
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
