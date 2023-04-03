#include "lists.h"
/**
 * list_len - return the number of elements in the list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t nelem;
	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[%d]%s\n". h->len, 0, h->str);
		else
			printf("[%d[%s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
}
