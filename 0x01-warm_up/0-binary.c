#include "search_algos.h"

/**
 * binary_search - searches an array
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value we are searching for
 * Return: index of matching value; -1 if no match or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int l = 0, r = size - 1, m, i = 0;

	while ((l <= r) && array)
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
