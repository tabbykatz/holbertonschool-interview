#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
* insert_node - insert a number into a sorted linked list
* @head: points to list
* @number: the number to insert
* Return:  new node or NULL
*/
listint_t *insert_node(listint_t **head, int number)
{
	/* declarations */
	listint_t *location = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = number;
	new->next = NULL;

	if (!location || new->n < location->n)
	{
		new->next = location;
		*head = new;
		return (*head);
	}
	while (location)
	{
		if (!location->next || new->n < location->next->n)
		{
			new->next = location->next;
			location->next = new;
			return (location);
		}
		location = location->next;
	}
	return (NULL);
}
