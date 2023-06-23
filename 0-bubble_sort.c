#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - sorts an array of int in ascending order using the Bubble sort
 * @array: Array of integers
 * @size: The size of array of integers
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swap;
	int count = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
		/*Iterate through the entire list*/
	{
		swap = 0;
		for (j = 1; j < (size - count); j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		count++;
		if (swap == 0)
			return;
	}
}
