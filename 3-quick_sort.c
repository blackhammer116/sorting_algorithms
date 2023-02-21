#include "sort.h"

/**
 * quick_sort - function that uses quick sort algorithm
 * to sort an array
 * @array: pointer to an array
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
    int high = size - 1, low = 0;

    quickSort(array, low, high, size);
}
/**
 * quickSort - function that implements and defines the
 * algorithm
 * @arr: pointer to an array
 * @low: lower bound of the array
 * @high: upper bound of the array
 * @size: size of the array
 */
void quickSort(int *arr, int low, int high, size_t size)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high, size);

        /* Separately sort elements before
         partition and after partition */
        quickSort(arr, low, pi - 1, size);
        quickSort(arr, pi + 1, high, size);
    }
}
/**
 * partition - function that defines and uses the Lomuto
 * partition scheme
 * @array: pointer to an array
 * @low: lower bound of the array
 * @high: upper bound of the array
 * @size: size of the array
 *
 * Return: an increment of the index
 */
int partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high], temp;
    int i = (low - 1), j;
 
    for (j = low; j <= high- 1; j++)
    {
        /* If current element is smaller than or
         equal to pivot*/
        if (array[j] <= pivot)
        {
            i++;    /* increment index of smaller element swap(arr[i], arr[j]); */
	    temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
        }
    }
    temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;
    print_array(array, size);

    return (i + 1);
}
