#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Write a function that concatenates two strings
 * @s1: first character
 * @s2: second character
 * Return: if executed properly
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, l = 0, k = 0;
char *s;
if (s1 == NULL)
return " ";
if (s2 == NULL)
return " ";
while (s1[i])
i++;
while (s2[j])
j++;
l = i + j;
s = malloc(l * sizeof(char) + 1);
j = 0;
while (k < l)
{
if (k <= i)
s[k] = s1[k];
if (k > 1)
{
s[k] = s2[j];
j++;
}
k++;
}
s[k] = '\0';
return (s);
}
