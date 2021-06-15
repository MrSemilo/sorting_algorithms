#include "sort.h"

/**
 * insertion_sort_list - Prints a list of integers
 *
 * @list: The list to be printed
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux2 = NULL, *_prev = NULL, *_next = NULL, *tmp = NULL;
	int i = 0;

	tmp = *list;
	while (tmp)
	{
	if (tmp->prev != NULL)
	{
	aux2 = tmp;
	i = 0;

	while (aux2 && aux2->prev->n > aux2->n)
	{
		_next = aux2->next; /**min=next;*/
		_prev = aux2->prev;

		if (_prev->prev)
			_prev->prev->next = aux2;
		else
		{
			*list = aux2;
			i = 1;
		}
		if (_next)
			_next->prev = _prev;
		aux2->prev = _prev->prev;
		aux2->next = _prev;
		_prev->prev = aux2;
		_prev->next = _next;
		print_list(*list);
		if (i)
			break;
	}
	}
	tmp = tmp->next;
}
}
