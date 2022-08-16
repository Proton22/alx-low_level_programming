#include "lists.h"
/**
 * free_listint2 - Write a function that frees a listint_t list
 * @head: a list of variables
 * Return: if executed properly
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head)
{
while (*head)
{
temp = *head;
temp = (*head)->next;
free(temp);
}
}
else
{
	return;
}
free(*head);
head = 0;
}
