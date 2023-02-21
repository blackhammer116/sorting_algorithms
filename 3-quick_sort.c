#include <stdio.h>
#include "sort.h"


void quickSort(int *arr, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
/**
 *
 */
void quick_sort(int *array, size_t size)
{
    int high = size - 1, low = 0;

    quickSort(array, low, high, size);
    /*
    if (size < 2)
        return;
    pivot = array[high];
    for (i = 0, j = size - 1;; i++, j--) {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i >= j)
            break;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
	print_array(array, size);
    }
    quick_sort(array, i);
    quick_sort(array + i, size - i);
    */
}
/**
 *
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
 *
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
