#include "sort.h"

/**
 * insertion_sort - function that implements insertion
 * sort on linked list
 * @list: pointer to the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head_ref = *list, *current = *list, *temp = *list->next, *tmp;

	if (current->n >= temp->n)
	{
		tmp = current;
		current->next = temp->next;
		current->prev = temp;
		temp->next = current;
		temp->prev = NULL
	}

	else
	{
		while (current->n <= temp->n && current->next != NULL)
			current = current->next;
		
	}
}
