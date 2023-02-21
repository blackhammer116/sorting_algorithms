#include "sort.h"

/**
 * list_size - function that determines the size
 * of the linked list
 * @list: pointer to the head of the list
 * Return: the total node in the list
 */
int list_size(listint_t **list)
{
	listint_t *head = *list;
	int i = 0;

	if(!head)
		return (NULL);

	while (head)
	{
		i++;
		head = head->next;
	}

	return (i);
}
