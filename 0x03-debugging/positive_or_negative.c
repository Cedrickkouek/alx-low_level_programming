#include "main.h"
/* more headers goes there */
/* Main - entry point*/
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is a negative number\n", i);
	}
	else if (i > 0)
	{
		printf("%d is a positive number\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
