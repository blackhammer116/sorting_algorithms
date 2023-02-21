#include "sort.h"

/**
 *
 */
void swap(int* a,int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/**
 *
 */
int partition(int array[], int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}
/**
 *
 *
 */
void quickSort(int *array, int low, int high, size_t size)
{
	
	if (low < high)
	{
		int pi = partition(array, low, high, size);

		quickSort(array, low, pi - 1, size);
		quickSort(array, pi + 1, high, size);
	}
}

/**
 *
 */
void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	quickSort(array, low, high, size);
}
