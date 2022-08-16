#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Write a function that prints all the elements
 * @h: a constant value
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
