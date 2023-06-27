#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of ints in ascending order
 * @list: pointer to the head node of list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current; /* Pointer to the current node */
	listint_t *temp;    /* Temporary pointer for swapping nodes */

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		/*check if list is empty or contains one element*/
		return;
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
				/* ensure there is a node after the current node temp*/
				temp->next->prev = temp->prev;
			/*update the prev pointer of the next node.*/
			temp->prev->next = temp->next;
			/*update next pointer of the previous node.*/
			temp->next = temp->prev;
			/*update the next pointer of temp to point to the node before temp.*/
			temp->prev = temp->next->prev;
			/*update the prev of temp to point to the node before temp*/
			temp->next->prev = temp;
			/*update the prev pointer of temp->next to point back to temp.*/

			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			/* Update the head pointer if the current node becomes the new head */
			print_list(*list);
		}
	}
}
