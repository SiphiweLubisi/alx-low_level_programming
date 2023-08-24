#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the coded linked list
 * @head: list_t list to be free
 * Return: head
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
