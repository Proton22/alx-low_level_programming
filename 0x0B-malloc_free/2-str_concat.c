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
int i = 0;
char *s;
s = malloc(i * sizeof(char));
if (s == NULL)
return (NULL);

