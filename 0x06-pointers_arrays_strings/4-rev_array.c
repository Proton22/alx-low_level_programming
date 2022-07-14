#include "main.h"
#include <string.h>
/**
 * reverse_array - print a reverse
 * @a: a character
 * @n: a character string
 */
void reverse_array(int *a, int n)
{
int i, length1, length2;
length1 = 0;
length2 = 0;
while (s[length1] != '\0')
length1++;
length2 = length1 - 1;
for (i = 0; i < length1 / 2; i++)
{
tmp = s[i];
s[i] = s[length2];
s[length2] = tmp;
length2 -= 1;
}
}
