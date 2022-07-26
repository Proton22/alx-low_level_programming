#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Write a function that returns a pointer to a newly allocated space
 * @str: a character
 * Return: if executed properly
 */
char *_strdup(char *str)
{
int i = 1, j = 0;
char *s;
if (str == NULL)
return (NULL);
s = malloc(i * sizeof(char) + 1);
if (s == NULL)
return (NULL);
while (j < i)
{
s[j] = str[j];
j++;
}
s[j] = '\0';
return (s);
}
