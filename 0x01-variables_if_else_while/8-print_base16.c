#include <stdio.h>
/**
 * main - print hexadecimal
 * Return: 0 if executed properly
 */
int main(void)
{
int b;
char t;
for (b = 0; b <= 9; b++)
{
putchar((b % 10) + '0');
}
for (t = 'a'; t <= 'f'; t++)
{
putchar(t);
}
putchar('\n');
return (0);
}
