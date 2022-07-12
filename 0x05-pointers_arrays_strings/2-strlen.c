#include "main.h"
/**
 * _strlen - print the length
 * @s: a character argument
 * Return: if executed properly
 */
int _strlen(char *s)
{
int length = 0;
while (s[length])
length++;
return (length);
}
