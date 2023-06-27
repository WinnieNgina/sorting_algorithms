#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of ints in ascending order
 * @list: pointer to the head node of list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current; /* Pointer to the current node */
	/*listint_t *sorted;  Pointer to the sorted portion of the list */
	listint_t *temp;    /* Temporary pointer for swapping nodes */

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		/*check if list is empty or contains one element*/
		return;
	/*sorted = *list;       Start with the first node as the sorted portion */
	current = (*list)->next; /* Move to the next node */
	/* Traverse the list */
	while (current != NULL)
	{
		temp = current;   /* Store the current node in a temporary pointer */
		current = current->next; /* Move to the next node */
		/* Find the correct position for the current node in the sorted portion */
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			/* Swap the nodes */
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->next->prev;
			temp->next->prev = temp;
			/* Update the head pointer if the current node becomes the new head */
			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			print_list(*list); /* Print the list after swapping nodes */
		}
	}
}
