#include "main.h"
#include <string.h> 
/**
 * puts_half - print half
 * @str: a character
 */
void puts_half(char *str)
{
int mid, len;
len = strlen(str);
mid = len / 2;
for (mid = 0; mid < len; mid++)
{
_putchar(str[mid]);
}
_putchar('\n');
}
