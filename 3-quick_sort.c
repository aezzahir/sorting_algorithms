#include "sort.h"

/**
 * swap - swaps two integers
 * @n1: pointer to the first integer
 * @n2: pointer to the second integer
 */
void swap(int *n1, int *n2)
{
int temp = *n1;
*n1 = *n2;
*n2 = temp;
}

/**
 * Partition - rearrange the array by choosing the last element
 * as pivot, then put all elements less than the pivot on the left
 * and the elements greater than the pivot on the right of it.
 * @array: the array to divide
 * @start: the beginning of the array
 * @end: the end of the array
 * Return: return the pivot index after the rearrangement
 */
int Partition(int *array, int start, int end, size_t size)
{
int pivot = array[end];
int pIndex = start;
int i;
for (i = start; i < end; i++)
{
if (array[i] <= pivot)
{
swap(&array[i], &array[pIndex]);
if (i != pIndex)
{
print_array(array, size);
}
pIndex++;
}
}
swap(&array[pIndex], &array[end]);
if (pIndex != end)
{
print_array(array, size);
}
return pIndex;
}


/**
 * quick_sort_recursive - recursively sorts an array using quicksort
 * @array: the array to sort
 * @start: the starting index
 * @end: the ending index
 * @size: size of the array
 */
void quick_sort_recursive(int *array, int start, int end, size_t size)
{
if (start < end)
{
int index_pivot = Partition(array, start, end, size);
quick_sort_recursive(array, start, index_pivot - 1, size);
quick_sort_recursive(array, index_pivot + 1, end, size);
}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: the array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick_sort_recursive(array, 0, size - 1, size);
}
