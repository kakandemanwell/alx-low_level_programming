#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: the header pointer/ pointer to the first node of the list
 * Return: the number of elements in the list.
 */

size_t listint_len(const listint *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
