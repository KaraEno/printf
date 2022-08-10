#include "main.h"
/**
* _printf - print out values
* @format: format
* @...: variables
* Return: returns the length
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int length = 0;
	va_list args;

	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		for (; format[i] == '%'; i++)
		{
			if (format[i + 1] == 'c')
			{
				length = length + _print_char(args);
				i = i + 1;
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				length++;
				i = i + 1;
			}
			else if (format[i + 1] == 's')
			{
				length = length + _print_string(args);
				i = i + 1;
			}
			else
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				length++;
				i = i + 1;
			}
		}
		if (format[i])
		{
			_putchar(format[i]);
			length++;
		}
	}
	return (length);
}
