#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at specific index
 *  * @head: head of linked list
 * @index: index of the node
 * Return: node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node = head;
	i = 0;
	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
