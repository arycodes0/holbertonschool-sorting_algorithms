#include "sort.h"

/**
 * bubble_sort - Func that sorts an array of integers in ascending order using Bubble sort
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t count = 0;
	int temp;

	if (!array || size < 2)
		return;

	/*Below we are sorting the array with the bubble method*/
	for (i = 0; i < size -1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			/*Switching and ensuring that every element that are out of order are swapped,
			 * bubbling the largest element to the end of the array*/
			if (array[j] = array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				count++;
				print_array(array, size);
			}
		}
		if (count == 0)
			break;
	}
}
