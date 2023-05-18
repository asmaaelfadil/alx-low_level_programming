#include "main.h"
/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b: Size of the memory to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
