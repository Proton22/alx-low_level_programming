#include <unistd.h>
/**
 * _putchar - Task on 0x15. C - File I/O
 * @c: a character variable
 * Return: if executed properly
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
