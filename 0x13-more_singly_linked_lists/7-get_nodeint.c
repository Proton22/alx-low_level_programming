#include "lists.h"
/**
 * get_nodeint_at_index - Write a function that returns the nth node
 * @index: an unsigned integer
 * @head: a list of integer
 * Return: if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
if (head != NULL)
{
while (head)
{
if (count == index)
return (head);
head = head->next;
count++;
}
}
return (NULL);
}
