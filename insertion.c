#include "sort.h"

/**
 *
 *
 *
void insertion_sort(listint_t **list)
{
	listint_t *head = *list;
}
*/
void insertion(listint_t **list)
{
	listint_t *temp, *tmp = *list, *head = *list;
	int size = list_size(list), i, j;

	for (i = 1; i < size; i++; head->next)
	{
		temp = head;
		for (j = i; j > 0 && tmp != NULL && temp < head->prev; j-- tmp->prev)
		{
			head = head->prev;
			head->prev = temp;
		}
	}
}
