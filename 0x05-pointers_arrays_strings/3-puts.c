#include "main.h"
/**
 * _puts - print the number
 * @str: a character
 */
void _puts(char *str)
{
for (*str ='\0'; str++;)
{
_putchar(*str);
}
_putchar('\n');
}
