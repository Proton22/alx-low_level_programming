#include "main.h"
#include <string.h>
/**
 * puts2 - print series of numbers
 * @str: a character
 */
void puts2(char *str)
{
int i, len;
len = strlen(str);
for (i = len; i < len && i >= 0; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
