#include "sort.h"
/**
 * swap - swaps two elements
 * @array: array to be swapped
 * @index1: element one index
 * @index2: element two index
 */
void swap(int arr[], int index1, int index2, size_t size)
{
	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
	print_array(arr, size);
}
/**
 * partition - Partition the array using the last element as the pivot
 * @array: array to be sorted
 * @low: lowest index of the array
 * @high: last element in the array 
 * Return: sorted index of the pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low;
	int j;

	for (j = low; j < high ; j++)
	{
		/*check if current element is smaller than the pivot*/
		if (array[j] < pivot)
		{	
			swap(array, i,j, size);
			/*Increment index of smaller element*/
			i++;
		}
	}
	swap(array, i, high, size);
	return (i);
}
/**
 * quick_sort_helper - Recursive helper function for Quick sort
 * @array: The array to be sorted
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 */
void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int partition_index;
	
	if (low < high)
	{
	partition_index = partition(array, low, high, size);
	quick_sort_helper(array, low, partition_index - 1, size);
	quick_sort_helper(array, partition_index + 1, high, size);
	}
}
/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_helper(array, 0, size - 1, size);
}
