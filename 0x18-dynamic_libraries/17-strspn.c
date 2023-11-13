#include "main.h"

/**
 *_strspn - calculates the length of the initial segment of s
 *@s: The string to search
 *@accept: The string of accepted characters
 *
 *Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
		}

		if (found == 0)
			break;

		s++;
	}

	return (count);
}
