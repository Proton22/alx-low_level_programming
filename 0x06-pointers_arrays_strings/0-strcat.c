#include "main.h"
/**
 * _strcat - print concantenate of two strings
 * @dest: a character
 * @src: a character
 * Return: if executed properly
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i])
i++;
for (j = 0, src[j] != 0; j++)
{
dest[i] = src[j];
}
dest[i] = '\0';
i += 1;
_putchar(dest[i]);
return (dest);
}
