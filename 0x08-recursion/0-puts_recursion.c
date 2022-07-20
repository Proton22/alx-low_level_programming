#include "main.h"
#include <string.h>
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: a character
 */
void _puts_recursion(char *s)
{
int a;
a = strlen(s);
_putchar(a);
_putchar('\n');
}
