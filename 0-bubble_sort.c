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
 * bubble_sort - bubble sort algorithm.
 * @array: the array to sort
 * @size: the array's size
 * Return: void
 */


void bubble_sort(int *array, size_t size)
{
	int i, j;
	bool swapped;

	i = 0;
	while (i < size - 1)
	{
		swapped = false;
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
			}
			j++;
		}
		if (swapped == false)
			break;
		i++;
	}
}
