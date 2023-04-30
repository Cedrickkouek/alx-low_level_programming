#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list pointer
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		num++;
		h = h->next;
	}
	return (num);
}
