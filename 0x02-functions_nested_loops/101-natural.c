#include <stdio.h>
/**
 * main - print number
 * Return: 0 if executed properly
 */
int main(void)
{
unsigned long int sum3, sum5, sum;
int i;
sum3 = 0;
sum5 = 0;
sum = 0;
for (i = 0; i < 1024; ++i)
{
if ((i % 3) == 0)
{
sum3 = sum3 + i;
} 
else if ((i % 5) == 0)
{
sum5 = sum5 + i;
}
}
sum = sum3 + sum5;
printf("%lu\n", sum);
return (0);
}
