#include "main.h"
/**
 * _strlen - a string of length
 * @c: a character string
 * Return: length of a string
 */
int _strlen(char *c)
{
	int s = 0;
	while (c[s])
		s++;
	return (s);
}
/**
 * create_file - Create a function that creates a file
 * @filename: a constant character
 * @text_content: a character of string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
	if(write(fd, text_content, _strlen(text_content)) == -1);
	return (-1);
	}
	close(fd);
	return (1);
}
