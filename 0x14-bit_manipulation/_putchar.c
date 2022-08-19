#include <unistd.h>
/**
 * _putchar - write out a function
 * @c: a character
 * Return: if executed properly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
