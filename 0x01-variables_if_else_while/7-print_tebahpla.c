#include <stdio.h>
/**
 * main - print the alphabet in reverse
 * Return: 0 if executed properly
 */
int main(void)
{
char rv;
for (rv = 'z'; rv >= 'a'; rv--)
{
putchar(rv);
}
putchar('\n');
return (0);
}
