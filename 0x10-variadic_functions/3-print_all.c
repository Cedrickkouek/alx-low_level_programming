#include "variadic_functions.h"
/**
 * print_all - Prints all of the arguments of differents types
 * when they are entered
 * @format: specifies the necessary operations
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	int check;
	char *p;

	va_list valist;

	va_start(valist, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				check = 0;
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				check = 0;
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				check = 0;
				break;
			case 's':
				p = va_arg(valist, char*);
				if (p == NULL)
				{
					p = "(nil)";
				}
				printf("%s", p);
				check = 0;
				break;
			default:
				check = 1;
				break;

		}
		if (format[i + 1] != '\0' && check == 0)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
