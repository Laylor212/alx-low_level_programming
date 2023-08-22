#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint(listint_t **h, const int n)
{
        listint_t *node;

        node = (listint_t *) malloc(sizeof(listint_t));
        node->n = n;
        node->next = (*h);
        (*h) = node;

        return node;
}
