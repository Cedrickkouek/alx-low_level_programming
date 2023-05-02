#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked list
 * @h: A pointer to the head of the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t ele = 0;

	while (h)
	{
		ele++;
		h = h->next;
	}
	return (ele);
}
