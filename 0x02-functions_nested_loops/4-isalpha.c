#include "main.h"
/**
 * _isalpha -> print the alphabet
 * @c: a character
 * Return: 1 if lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
