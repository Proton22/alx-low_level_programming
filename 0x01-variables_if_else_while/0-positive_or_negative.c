#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if number is positve or negative
 *
 * Return: 0 if command exist
 */
int main(void)
{
iint n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else 
{
printf("%d is negative\n", n);
}
return (0);
}
