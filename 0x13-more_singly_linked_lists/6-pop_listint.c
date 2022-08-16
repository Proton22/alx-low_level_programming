#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node
 * @head: a list of variable
 * Return: if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *root;
int n = 0;
if (*head != NULL)
{
root = (*head)->next;
n = (*head)->n;
free(*head);
*head = root;
}
return (n);
}
