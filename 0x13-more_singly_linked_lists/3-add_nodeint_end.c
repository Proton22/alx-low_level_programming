#include "lists.h"
/**
 * add_nodeint_end - Write a function that adds a new node at the end
 * @head: a list of variable
 * @n: a constant
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *p = *head;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
return (NULL);
}
temp->next = NULL;
if (p)
{
while (p->next)
p = p->next;
p->next = temp;
}
else
*head = temp;
return (temp);
}
