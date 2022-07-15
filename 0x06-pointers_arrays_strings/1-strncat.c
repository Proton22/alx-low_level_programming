#include "main.h"
#include <string.h>
/**
 * _strncat - print a concantenate
 * @dest: a string
 * @src: a character
 * @n: a word
 * Return: if properly executed
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
