#include "sort.h"

/**
 * insertion_sort - function that implements insertion
 * sort on linked list
 * @list: pointer to the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list;
	listint_t *tmp, *tmp2 = head->next;
	size_t i, j;
	int temp, n1, n2;
	size_t size = list_size(&head);

	for (i = 1; i < size; i++, tmp->next, tmp->next)
	{
		temp = tmp->n;
		for (j = i; j > 0 && temp < tmp2->prev->n; j--)
		{
			n1 = tmp->n;
			n2 = tmp2->prev->n;
			n1 = n2;
			n2 = temp;
			tmp->n = n1;
			tmp2->prev->n = n2;
			print_list(head);
		}
	}
}
