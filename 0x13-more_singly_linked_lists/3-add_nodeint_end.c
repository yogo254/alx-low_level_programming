#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: head of linked list
 * @n: integer
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tempNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	tempNode = *head;
	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
	}
	tempNode->next = newNode;
	return (newNode);
}
