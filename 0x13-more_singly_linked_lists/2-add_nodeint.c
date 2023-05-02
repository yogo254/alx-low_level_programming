#include "lists.h"

/**
 * add_nodeint - adds a new node as the head
 * @head: head of linked list
 * @n: integer
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead;

	newHead = malloc(sizeof(listint_t));
	if (newHead == NULL)
		return (NULL);
	newHead->n = n;
	newHead->next = *head;
	*head = newHead;

	return (newHead);
}
