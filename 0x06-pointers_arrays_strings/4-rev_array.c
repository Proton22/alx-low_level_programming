#include "main.h"
/**
 * reverse_array - print a reverse
 * @a: a character
 * @n: a character string
 */
void reverse_array(int *a, int n)
{
char tmp;
int i, length1;
length1 = 0;
n = 0;
while (a[length1] != '\0')
length1++;
n = length1 - 1;
for (i = 0; i < length1 / 2; i++)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
n -= 1;
}
}
