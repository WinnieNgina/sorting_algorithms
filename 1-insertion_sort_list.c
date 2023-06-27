#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order using the Insertion sort
 * @list: pointer to the head node of list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *slow, *fast, *node;
	listint_t *temp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	/*An empty list or a list with one element is just return*/
	while ((*list)->next != NULL)
	{
		fast = (*list)->next;
		/*We intialize fast one index ahead*/
		node = fast->next;
		slow = fast->prev;
		while (slow != NULL && slow->n > fast->n)
		/*We keep on iterating until we find the right position for the element*/
		{
			temp->next = fast->next;
			temp->prev = fast->prev;
			fast->prev = slow->prev;
			fast->next = temp->prev;
			slow->prev = slow->next;
			slow->next = temp->next;
			slow->next->prev = fast->next;
			fast->prev->next = slow->prev;
			print_list(fast);
		}
		fast = node;
	}
}
