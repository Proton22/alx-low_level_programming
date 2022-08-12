#include "lists.h"
/**
 * print_list - Write a function that prints all the elements of a list_t list
 * @h: a constant character
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t cont = 0;
while (h != NULL)  
{
if (h->str != NULL)
printf("[%d] %s\n", h->len, h->str);
else
printf("[%d] (nil)\n", h->len);
cont++;
h = h->next;
cont++;
}
return (cont);
}
