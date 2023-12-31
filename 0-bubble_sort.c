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
	int swap = 0;

	if (size < 2 || array == NULL)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	/* Iterate through the entire list*/
	{
		for (j = 1; j < (size - i); j++)
		/*It gets us the next element to compare array[0] with*/
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
		if (swap == 0)
		{
			return;
		}
	}
}
