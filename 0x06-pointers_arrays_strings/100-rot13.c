#include "main.h"

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = s;

	while (*s)

	{
		for (i = 0; i < 52; i++)
		{
			if (*s  == data1[i])
			{
				*s = datarot[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
