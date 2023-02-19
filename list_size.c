#include "sort.h"

/**
 * list_size - function that determines the
 * the size of a linked list
 * @list: pointer to the head of the linked list
 * Return: the size of the linked list, NULL if failure
 */
int list_size(listint_t **list)
{
	listint_t *head = *list;
	size_t *size = 0;

	if(!head)
		return (NULL);
	while(head)
	{
		size += 1;
		head = head->next;
	}

	return (size);
}
