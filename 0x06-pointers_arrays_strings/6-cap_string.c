#include "main.h"
#include <stdio.h>

/**
 *cap_string - capitalizes most iif the words in a string.
 *@s: analized string.
 *Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
	int i = 0;
	int new_word = 1;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
			|| s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
					s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			new_word = 1;
		}
		else if (new_word == 1)
		{
			s[i] = toupper(s[i]);
			new_word = 0;
		}

		i++;
	}

	return (s);
}
