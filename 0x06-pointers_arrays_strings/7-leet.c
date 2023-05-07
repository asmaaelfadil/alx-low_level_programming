#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 *
 * @n: input value
 *
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char sc[] = "aAeEoOtTiL";
	char sn[] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
	for (j = 0; sc[j] != '\0'; j++)
	{
		if (n[i] == sc[j])
		{
			n[i] = sn[j];
		}
	}
}
return (n);
}
