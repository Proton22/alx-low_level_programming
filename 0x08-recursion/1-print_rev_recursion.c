#include "main.h"
/**
 * _print_rev_recursion -  prints a string in reverse
 * @s: a character
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s--;
_print_rev_recursion(s);
}
