#include <stdio.h>
/**
 * main - print letters alphabetically
 * Return: 0 if executed properly
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
