#include "main.h"
/**
 * _strspn -  produces the length of a prefix substring
 * @s: string to return bytes from
 * @accept: the bytes to include
 * Return: the number of bytes of @s that are also in @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					c++;
				}
			}
		}
		else
		{
			return (c);
		}
	}
	return (c);
}
