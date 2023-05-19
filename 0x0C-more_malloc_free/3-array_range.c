#include "main.h"
/**
 * array_range - Write a function that creates an array of integers.
 * @min: the minimum value.
 * @max: the maximum value.
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
