#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: arrau to sort
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t index, j;
	int tmp;


	for (j = 0; j < size - 1; j++)
	{
		for (index = 0; index < size - j - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				tmp = array[index + 1];
				array[index + 1] = array[index];
				array[index] = tmp;
				print_array(array, size);
			}
		}
	}
}
