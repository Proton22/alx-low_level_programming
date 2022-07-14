#include "main.h"
/**
 * _strcat - print concantenate of two strings
 * @dest: a character
 * @src: a character
 * Return: if executed properly
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j;
while (dest[i])
i++;
for (j = 0, src[j] != 0; j++)
{
dest[i] = src[j];
i += 1;
}
dest[i] = '\0';
return (dest);
}
