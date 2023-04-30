#include "lists.h"
/*by div-styl*/
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the list.
 * @idx: index of the list where the new node is added.
 * @n: integer element.
 * Return: the address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tempo = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint_end(head, n));
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	for (i = 0; i < idx - 1 && tempo != NULL; i++)
		tempo = tempo->next;
	if (tempo == NULL)
	{
		free(newNode);
		return  (NULL);
	}
	newNode->next = tempo->next;
	tempo->next = newNode;
	return (newNode);
}