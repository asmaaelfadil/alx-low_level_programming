#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: char
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}
	char *duplicate = strdup(str);

	return (duplicate);
	}
