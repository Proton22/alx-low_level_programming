#include "lists.h"
/**
 * free_listint - Write a function that frees a listint_t list
 * @head: a list of variables
 * Return: if executed properly
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
