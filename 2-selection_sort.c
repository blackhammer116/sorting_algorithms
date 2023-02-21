#include "sort.h"

/**
 * selection_sort - function that implements selection
 * sort algorithm in an array
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, small;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		small = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small])
				small = j;
		}
		temp = array[small];
		array[small] = array[i];
		array[i] = temp;

		if (array[small] != array[i])
			print_array(array, size);
	}
}
