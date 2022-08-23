#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - Create a function that creates a file
 * @filename: a constant character
 * @text_content: a character of string
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	i = strlen(text_content);
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
	if(write(fd, text_content, i) == -1)
	return (-1);
	}
	close(fd);
	return (1);
}
