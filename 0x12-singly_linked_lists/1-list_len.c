#include "lists.h"
/**
 * list_len - return
 * @h: single list pointer
 * Return: number of elements(node) in the liste
 */
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
