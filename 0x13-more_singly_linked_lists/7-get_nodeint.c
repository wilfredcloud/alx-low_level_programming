#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to list head
 * @index: index
 *
 * Return: pointer node;
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	/* return NULL if node does not exist*/
	return (NULL);
}
