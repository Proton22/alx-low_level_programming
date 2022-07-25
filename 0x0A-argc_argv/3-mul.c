#include "main.h"
#include <stdio.h>
/**
 * main - Write a program that multiplies two numbers
 * @argc: a character
 * @argv: a character
 * Return: if executed properly
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
sum = sum * argv[i];
return (0);
}
