#include "main.h"
/**
 * _strcat - print concantenate of two strings
 * @dest: a character
 * @src: a character
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while ( dest[i] != '\0')
i++;
for (j = 0, src[j] != '\0'; ++j; ++i)
{
dest[i] = src[j];
}
dest[i] = '\0';
_putchar(dest[i]);
return (dest);
}
