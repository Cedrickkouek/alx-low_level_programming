#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _islower - returns lower case letters of the alphabet
 * @c: is the initial letter
 * Return: the ascii  value of the letter
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

