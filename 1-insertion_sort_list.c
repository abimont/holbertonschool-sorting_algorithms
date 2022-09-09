#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of int in ascending order
 * @list: doubly linked list to sort
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *before, *temp, *after;

	if (list == NULL)
		return;

	temp = (*list)->next;
	while (temp != NULL)
	{
		if (temp->prev != NULL)
		{
			if (temp->n < temp->prev->n)
			{
				before = temp->prev;
				after = temp->next;
				temp->prev = before->prev;
				temp->next = before;

				if (temp->prev != NULL)
					temp->prev->next = temp;
				if (temp->prev == NULL)
					*list = temp;

				before->prev = temp;
				before->next = after;

				if (after != NULL)
					after->prev = before;

				print_list(*list);
			}
			else
				temp = temp->next;
		}
		else
			temp = temp->next;
	}
}
