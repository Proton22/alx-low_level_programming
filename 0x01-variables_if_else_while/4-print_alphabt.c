#include <stdio.h>
/**
 * main - print the function
 * Return: 0 if executed properly
 */
int main(void)
{
char hi;
for (hi = 'a'; hi <= 'z'; hi++)
{
if (hi != 'e' && hi != 'q')
{
putchar(hi);
}
}
putchar('\n');
return (0);
}
