#include "main.h"
/**
 * _memcpy - returns a pointer to the copie of another pointer
 * @src: the pointer to be copied
 * @dest: the copied pointer
 * @n: number of bytes to be copied
 * Return: The copied pointer dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
