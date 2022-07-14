#include <unistd.h>
/**
 * main - print the character
 * @c: a character
 * Return: if executed properly
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
