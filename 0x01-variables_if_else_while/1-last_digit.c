#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print positive and negative number
 * Return: 0 if executed properly
 */
int main(void)
{
int n;
int lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
if (lastd > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, lastd);
}
else if (lastd == 0)
{
printf("Last digit of %i is %i and is 0\n", n, lastd);
}
else if (lastd < 6 && n != 0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastd);
}
return (0);
}
