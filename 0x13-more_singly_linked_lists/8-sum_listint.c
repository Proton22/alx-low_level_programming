#include "lists.h"
/**
 * sum_listint - Write a function that returns the sum of all the data
 * @head: a list of variable
 * Return: 0, if the list is empty
 */
int sum_listint(listint_t *head)
{
int amt = 0;
if (head)
{
while (head)
{
amt += head->n;
head = head->next;
}
}
return (amt);
}
