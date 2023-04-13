#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space with a copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 */
char *_strdup(char *str)
{
	char *r;
	int i, j;
	int count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count = count + 1;
	}
	r = malloc(sizeof(char) * count + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		r[j] = str[j];
	}
	r[j] = '\0';
	return (r);
}
