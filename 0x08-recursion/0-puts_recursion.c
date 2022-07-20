#include "main.h"
#include <string.h>
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: a character
 */
void _puts_recursion(char *s)
{
if (s != '\0')
{
return (s);
return (_puts_recursion(s + 1));
}
