#include "main.h"

/**
 * _strchr - locates the first occurrence of the character c in the string s
 * @s: The string to search
 * @c: The character to find
 *
 * Return: The pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
