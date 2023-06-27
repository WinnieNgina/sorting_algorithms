#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order using the Insertion sort
 * @list: pointer to the head node of list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp_head = *list;
	int i = 0;
	int value;
	int index;
	int j;
	int key;

	if (tmp_head == NULL || tmp_head->next == NULL)
		return;
	/*An empty list is just return*/

	while (tmp_head->next != NULL)
	{
		tmp_head = tmp_head->next;
		i++;
	}
	for(index = 0; index < i; index++)
	{
		key = tmp_head->next->n;
		j = index - 1;
		while(j >= 0 && key < tmp_head->n)
		{
			tmp_head->next->n = tmp_head->n;
			j--;
		}
		arr[ j+ 1] = key;
		print_array(arr, i);
	}
}
