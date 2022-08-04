#include <unistd.h>
/**
 * _putchar - print out functions
 * @c: The character to print
 * Return: if executed properly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
