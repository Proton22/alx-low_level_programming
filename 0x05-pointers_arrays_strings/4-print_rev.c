#include "main.h"
/**
 * print_rev - print in reverse
 * @s: a character 
 */
void print_rev(char *s)
{
for (; *s = '\0'; --s)
{
_putchar(*s);
}
_putchar('\n');
}
