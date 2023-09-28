#include "lists.h"

/**
 * get_nodeint_at_index - returns a certain indexed node in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: Null or pointer to the node we aren't looking for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}

	return (temp ? temp : NULL);
}
