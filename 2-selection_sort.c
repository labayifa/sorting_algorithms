#include "sort.h"

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, len = size;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < len; i++)
	{
		int temp = array[i];
		int min_index = i;

		for (j = i + 1; j < len; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		if (array[i] != array[min_index])
		{
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
