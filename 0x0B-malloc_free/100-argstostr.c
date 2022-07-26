#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Write a function that concatenates all the arguments
 * @ac: an integer
 * @av: a character
 * Return: if executed properly
 */
char *argstostr(int ac, char **av)
{
int k = 0, i = ac, j, sum = 0, l = 0;
char *s = NULL;
if (ac == 0 || av == NULL)
return (NULL);
while (ac--)
sum += (len(av[ac]) + 1);
s = (char *) malloc(sum + 1);
if (s != NULL)
{
while (k < i)
{
for (j = 0; av[k][j] != '\0'; j++)
s[j + l] = av[k][j];
s[l + j] = '\n';
l += (j + 1);
k++;
}
s[l] = '\0';
}
else
{
return (NULL);
}
return (s);
}
/**
 * len - returns length of string
 * @str: string counted
 * Return: returns the length
 */
int len(char *str)
{
int len = 0;
if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
