#include "sort.h"

/**
 * selection_sort - Prints a list of integers
 *
 * @list: The list to be printed
 */

void selection_sort(int *array, size_t size)
{
    size_t i, j, x;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		x = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[x])
				x = j;
		}
        if (x != i)
		{
			temp = array[x];
			array[x] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
    }
}
