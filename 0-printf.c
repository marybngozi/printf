#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - prints to the console output
 * @format: the string with the placeholders
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, c = 0, k;
	char cr, *str;
	va_list ds;	

	va_start(ds, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			cr = va_arg(ds, int);
			_putchar(cr);
			i += 2;
			c++;
			continue;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			str = va_arg(ds, char *);
			k = _print_chars(str);
			i += 2;
			c += k;
			continue;
		}
		_putchar(format[i]);
		i++, c++;
	}
	va_end(ds);
	return (c);
}
