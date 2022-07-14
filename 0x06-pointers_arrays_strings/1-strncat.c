#include "main.h"
/**
 * _strncat - print a concantenate
 * @dest: a string
 * @src: a character
 * @n: a word
 * Return: if properly executed
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
i = 0;
while (dest[i])
i++;
for (n = 0; src[n] < n; n++)
{
dest[i] = src[n];
i++;
}
return (dest);
}
