#include "sort.h"



/**
 * swap - swap to integers
 * @n1: first integer
 * @n2: second integer
 * Return: void
 */

void swap(int *n1, int *n2)
{
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

/**
 * selection_sort - selection sort algorithm.
 * @array: the array to sort
 * @size: the array's size
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
			j++;
		}
		if (min_idx != i)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
		i++;
	}
}
