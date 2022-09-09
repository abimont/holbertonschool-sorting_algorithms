#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t index, j, min, tmp;

	if (array == NULL)
		return;

	for (index = 0; index < size - 1; index++)
	{
		min = index;
		for (j = index + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;

		}

		if (min != index)
		{
			tmp = array[min];
			array[min] = array[index];
			array[index] = tmp;

			print_array(array, size);
		}
	}
}

