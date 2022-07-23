#include "sort.h"


/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, len = size;

	int bubbly = 0;

	if (size < 2)
	{
		return;
	}

	while (bubbly == 0)
	{
		bubbly = 1;

		for (j = 0; j < len - 1 ; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				bubbly = 0;
			}

		}

		len--;
	}
}

