#include "lists.h"
/**
 * add_nodeint_end - Write a function that adds a new node at the end
 * @head: a list of variable
 * @n: a constant
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *p;
p = malloc(sizeof(listint_t));
temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
return (NULL);
}
if (head == NULL)
{
*head = temp;
}
else
{
p = *head;
while (p->next != NULL)
{
p = p->next;
}
p->next = temp;
*head = temp;
}
return (temp);
}
