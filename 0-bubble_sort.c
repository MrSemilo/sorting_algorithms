#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 *  bubble_sort - function that sorts
 *
 * @array: The array
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{

	size_t i, j; /**Variables contadoras del ciclo.*/
	size_t temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++) /**es menor y no menor igual*/
		{
			if (array[j] > array[j + 1])/**Condicion mayor-menor*/
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
