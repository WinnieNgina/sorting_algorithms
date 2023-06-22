#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 * array: Array of integers
 * size: The size of array of integers
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int loop = 0;

	for (i = 0; i < size; i++)
	/* Iterate through the entire list*/
	{
		for (j = 1; j < (size); j++)
		/*It gets us the next element to compare array[0] with*/ 
		{
			loop++;
			if (array[j-1] > array[j])
			{
				temp = array[j-1];
				array[j-1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	printf("%d\n", loop);	
}
