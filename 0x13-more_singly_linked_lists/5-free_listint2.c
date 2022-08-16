#include "lists.h"
/**
 * free_listint2 - Write a function that frees a listint_t list
 * @head: a list of variables
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (*head != NULL)
{
while (*head)
{
temp = *head;
temp = (*head)->next;
free(*head);
}
}
else
{
	return;
}
free(*head);
head = 0;
}
