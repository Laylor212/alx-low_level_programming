#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string in which the list is stored in.
 * Return: adress of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	site_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; ncha++);

	new->len =nchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		(*head = new;
	}
	else
	{
	while (temp->next != NULL);
	temp = temp->next;
	temp-> = new;
	}
	return (*head);
	}

