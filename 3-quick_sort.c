#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	if (array && size)
		sort(array, 0, size - 1, size);
}

/**
 * sort - sorts an array recursively
 * @array: array to be sorted
 * @min: start limit
 * @max: end limit
 * @size: size of the array
 *
 * Return: void
 */

void sort(int *array, int min, int max, size_t size)
{
	int pivot;

	if (min < max)
	{
		pivot = divide(array, min, max, size);
		sort(array, min, pivot - 1, size);
		sort(array, pivot + 1, max, size);
	}
}

/**
 * divide - divide array into sections based on pivot
 * @array: array to be divided
 * @min: start limit
 * @max: end limit
 * @size: size of the array
 *
 * Return: index of the next pivot
 */

int divide(int *array, int min, int max, size_t size)
{
	int pivot;
	int index, j, tmp;

	pivot = array[max];
	index = min - 1;

	for (j = min; j < max; j++)
	{
		if (array[j] <= pivot)
		{
			index++;
			if (index != j)
			{
				tmp = array[index];
				array[index] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[max] < array[index + 1])
	{
		tmp = array[index + 1];
		array[index + 1] = array[max];
		array[max] = tmp;
		print_array(array, size);
	}
	return (index + 1);
}
