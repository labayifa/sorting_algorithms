#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t j, len = size;

	int bubbly = 0; 
	
	if (size <= 1)
	{
		return;
	}
	
	
	while(bubbly == 0)
	{
		bubbly = 1;
		
		for (j = 0; j < len ; j++)
		{
			if (array[j] > array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				print_array(array, size);
				bubbly = 0;
			}
		
		}
		
		len --;
	}
}
