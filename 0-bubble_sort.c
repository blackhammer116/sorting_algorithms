#include "sort.h"

/**
 * bubble_sort - is a function that uses bubble
 * sorting algorithms to sort an arrays
 * @array: pointer to an array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
			print_array(array, size);
		}
	}
}
