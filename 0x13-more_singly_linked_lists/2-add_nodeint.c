#include "lists.h"
/**
 * add_nodeint - Write a function that adds a new node at the beginning
 * @head: a list of variable
 * @n: a constant integer
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *tep;
tep = malloc(sizeof(listint_t));
if (tep == NULL)
{
return (NULL);
}
if (head == NULL)
{
*head = tep;
}
else
{
tep->n = n;
tep->next = *head;
*head = tep;
}
return (tep);
}
