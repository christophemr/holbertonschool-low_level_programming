#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index where value is located, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;
	/*check if array is NULL*/
	if (array == NULL)
		return (-1);
	/*initialize left & right boundaries of search*/
	left = 0;
	right = size - 1;
	/*perform binary search*/
	while (right >= left)
	{
		/*print current sub array being searched*/
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		/*calculate the middle index*/
		i = left + (right - left) / 2;
		/*check if value is at middle index*/
		if (array[i] == value)
			return (i);
		/*if value is in the left half, adjust right boundary*/
		if (array[i] > value)
			right = i - 1;
		else
		/*if value is in the right half, adjust left boundary*/
			left = i + 1;
	}
	/* if value is not found*/
	return (-1);

}
