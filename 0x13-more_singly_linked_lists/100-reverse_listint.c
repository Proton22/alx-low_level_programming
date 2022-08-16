#include "lists.h"
/**
 * reverse_listint - Write a function that reverses an element
 * @head: a list of variable
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL;
if (head)
{
while (*head)
{
next = *head;
*head = (*head)->next;
next->next = prev;
prev = next;
}
*head = prev;
return (*head);
}
return (NULL);
}
