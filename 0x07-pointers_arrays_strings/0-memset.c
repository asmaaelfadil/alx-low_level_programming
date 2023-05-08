#include "main.h"

/**
 *  _memset - A function that fills memory with a constant byte.
 *
 * @s: starting address of memory
 * @b: constant
 * @n: bytes of the memory area
 * Return : a pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
{
	s[i] = b;
}
	return (s);
	}
