#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Write a function that prints a name
 * @name: a character
 * @f: integer
 * Return: if executed properly
 */
void print_name(char *name, void (*f)(char *));
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
