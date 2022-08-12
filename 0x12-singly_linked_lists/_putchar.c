#include <unistd.h>
/**
 * _putchar - print out character
 * @c: first character
 * Return: if executed properly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
