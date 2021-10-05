#include "main.h"
#include <stdio.h>

/**
 * _printf- Produces output according to output
 *
 * Return: Number of characters printed
 */


int _printf(const char * const format, ...)
{
va_list characters;
int counter = 0;
char *alpha;

va_start(characters, format);
while (format && format[counter])
{
	switch (format[counter++])
	{
	case 'c':
	printf("%c", va_arg(characters, int));
	break;
	case 'i':
	printf("%d", va_arg(characters, int));
	break;
	case 'f':
	printf("%f", (float)va_arg(characters, double));
	break;
	case 's':
	alpha = va_arg(characters, char *);
	if (!alpha)
	alpha = "(nil)";
	printf("%s", alpha);
	break;
	default:
	continue;
	}
	printf(", ");
}
printf("\n");
va_end(characters);
}
