#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @base: string with concatenation
 * @word: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *base, char *word, int n)
{
	int lengthb, lengthw;

	lengthb = 0;
	lengthw = 0;
	while (*(base + lengthb) != '\0')
	{
		lengthb++;
	}
	while (*(word + lengthw) != '\0' && lengthb < 97 && lengthw < n)
	{
		*(base + lengthb) = *(word + lengthw);
		lengthb++;
		lengthw++;
	}
	*(base + lengthb) = '\0';
	return (base);
}

