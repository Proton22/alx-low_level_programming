#include "main.h"
/**
 * _strlen - a string of length
 * @c: a character string
 * Return: length of a string
 */
int _strlen(char *c)
{
int s = 0;
if (c[s])
s++;
return (s);
}
/**
 * create_file - Create a function that creates a file
 * @filename: a constant character
 * @text_content: a character of string
 * Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
if (text_content)
write(fd, text_content, _strlen(text_content));
close(fd);
return (1);
}
