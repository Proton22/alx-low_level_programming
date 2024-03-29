#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - contain the function that selects the correct function
 * @s: a character
 * Return: if executed properly
 */
int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (*s == *ops[i].op)
return (ops[i].f);
i++;
}
return (NULL);
}
