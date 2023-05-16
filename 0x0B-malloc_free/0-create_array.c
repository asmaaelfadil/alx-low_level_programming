#include "main.h"
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: character
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}
