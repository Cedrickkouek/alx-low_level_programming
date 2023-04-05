#include "main.h"
/**
 * rev-string - print reverse characters.
 * @s: validate the character
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, a, ayo;

	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		ayo = s[i];
		s[i--] = s[a];
		s[a++] = ayo;
	}
}
