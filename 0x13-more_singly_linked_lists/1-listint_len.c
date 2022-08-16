#include "lists.h"
/**
 * listint_len - Write a function that returns the number of elements
 * @h: a constant character
 * Return: if executed properly
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
