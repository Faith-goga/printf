#include "main.h"
#include <stdio.h>

/**
 * _printf- Produces output according to output
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int d = 0, noch = 0;

	va_start(ap, format);
	while (format && format[d])
	{
		switch (format[d++])
		{
			case c:
			write(1, va_arg(ap, int), 1);
			noch = noch + ((sizeof(va_arg(ap, int))) - 1);
			case s:
			write(1, va_arg(ap, char *), 8);
			noch = noch + ((sizeof(va_arg(ap, char*))) - 1);
			case c:
			write(1, va_arg(ap, int), 1);
			noch = noch + ((sizeof(va_arg(ap, int))) - 1);
			default:
			continue;
		}
	}
	return (noch);
}
