#include <stdio.h>
/**
 * main - print combination of numbers
 * Return: 0 if executed properly
 */
int main(void)
{
int g;
for (g = 0; g <= 9; g++)
{
putchar((g % 10) + '0');
if (g <= 8)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
