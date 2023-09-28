#include "main.h"

/**
 *_strpbrk - a function that searches a string for any of a set of bytes
 *@s: function where we are searching
 *@accept: the string that serves as reference
 *Return: a pointer to a character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}
