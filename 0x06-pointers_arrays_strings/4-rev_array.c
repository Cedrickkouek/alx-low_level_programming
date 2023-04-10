#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int chg, beg, end;

	beg = 0;
	end = n - 1;
	while (beg < end)
	{
		chg = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = chg;
		beg++;
		end--;
	}
}
