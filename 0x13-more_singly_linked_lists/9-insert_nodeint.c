#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *node, *tmp;
        unsigned int i = 0;
        unsigned int size = listint_len((*head));

        node = (listint_t *) malloc(sizeof(listint_t));
        tmp = *head;

        if (node == NULL)
        {
                free(NULL);
        }

        if (idx > size)
        {
                return NULL;
        }
        else
        {
                while ( i < idx)
                {
                        tmp = tmp->next;
                        i++;
                }

                node->n = n;
                node->next = tmp->next;
                tmp->next = node;

                return node;
        }

}
