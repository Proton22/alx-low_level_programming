#include "main.h"
/**
 * more_numbers - print function
 */
void more_numbers(void)
{
int a;
int b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 15; b++)
{
_putchar(b + '0');
}
_putchar('\n');
}
}
