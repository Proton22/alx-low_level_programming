#include <stdio.h>
/**
 * main - print out number base
 * Return: 0 if executed properly
 */
int main(void)
{
int b;
for (b = 0; b <= 9; b++)
{
putchar((b%10) + '0');
}
putchar('\n');
return (0);
}
