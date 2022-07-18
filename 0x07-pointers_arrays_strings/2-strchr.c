#include "main.h"
#include <string.h>
/**
 * _strchr -  locates a character in a string
 * @s: first character
 * @c: second character
 * Return: if executed properly
 */
char *_strchr(char *s, char c)
{
int i, pt;
i = strlen(s);
while (i == '\0')
pt = strchr(i, c);
return (pt);
}
