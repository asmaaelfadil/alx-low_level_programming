#include "main.h"
/**
 * _strstr - Function that locates a substring.
 * @haystack: input
 * @needle: input
 *
 * Return : Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
	}
	return (0);
}
