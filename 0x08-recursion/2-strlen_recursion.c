#include "main.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string
 * @s: a character
 * Return: if executed properly
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (_strlen_recursion(s) + 1);
}
