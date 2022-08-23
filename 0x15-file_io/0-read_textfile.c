#include "main.h"
/**
 * read_textfile - Write a function that reads a text file and prints it
 * @filename: a constant character
 * @letters: a size of an integer
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, rd;
char *buff = malloc(sizeof(char *) * letters);
if (filename == NULL)
{
return (0);
}
if (buff == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY, 0600);
if (fd == -1)
{
return (0);
}
rd = read(fd, buff, letters);
write(STDOUT_FILENO, buff, rd);
free(buff);
close(fd);
return (rd);
}
