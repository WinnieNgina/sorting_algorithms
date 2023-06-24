#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order - Selection
 * @array: array of integers to be sorted
 * @size: size of the array of the array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	int smallest_int;
	size_t index, i, j;
	int swap = 0;
	int temp;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		smallest_int = array[i];
		index = i;
		for (j = i; j < size; j++)
		{
			if (smallest_int >  array[j])
			{
				smallest_int = array[j];
				index = j;
				swap = 1;
			}
		}
		if (swap == 1)
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			swap = 0;
			print_array(array, size);
		}
	}
}
