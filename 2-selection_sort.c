#include "sort.h"
/**
*selection_sort - sorts an array of integer using Selection sort algorithm
*@array: array to sort
*@size: size of array
*
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;



	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}

		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}


	}
}
