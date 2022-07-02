#include <stdio.h>
/**
 * main - print upper and lower
 * Return: 0 if executed properly
 */
int main(void)
{
char c;
char C;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (C = 'A'; C <= 'Z'; C++)
putchar(C);
putchar('\n');
return (0);
}
