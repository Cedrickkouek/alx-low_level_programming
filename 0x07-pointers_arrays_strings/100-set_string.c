#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: string 1
 * @to: string 2
 * Return: nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
