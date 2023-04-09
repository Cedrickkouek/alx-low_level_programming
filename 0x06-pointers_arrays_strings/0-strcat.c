#include "main.h"
/**
 * _strcat - joins two strings.
 * @base: string with concatenation
 * @word: string to be concatenated/joined
 * Return: Always 0.
 */
char *_strcat(char *base, char *word)
{
	int lengthb, lengthw;

	lengthb = 0;
	lengthw = 0;
	while (*(base + lengthb) != '\0')
	{
		lengthb++;
	}
	while (*(word + lengthw) != '\0' && lengthb < 97)
	{
		*(base + lengthb) = *(word + lengthw);
		lengthb++;
		lengthw++;
	}
	*(base + lengthb) = '\0';
	return (base);
}
