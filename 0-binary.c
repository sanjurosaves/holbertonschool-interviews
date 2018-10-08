#include "search_algos.h"

/**
 * binary_search - searches for values in sorted array of integers
 * @array: pointer to first element in array we are searching for\
 * @size: number of elements in array
 * @value: value we are searching for
 * Return: array index of matching value, -1 if array is
 * null or value does not exist in array
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int m, l = 0, r = size - 1, i = 0;

	while ((l <= r) && (array))
	{
		m = (l + r) / 2;

		printf("Searching in array: ");
		i = l;
		while (i <= r)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
			else
				printf("\n");
			i++;
		}

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m;
		else
			return (m);
	}
	return (-1);
}
