#include "main.h"
/**
 * _strlen - returns a string's length
 * @s: the string for which the length is counted
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c = c + 1;
	}
	return (c);
}
