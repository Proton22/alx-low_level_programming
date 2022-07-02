#include <stdio.h>
/**
 * main - print upper and lower
 * Return: 0 if executed properly
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar ('\n');
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar ('\n');
return (0);
}
