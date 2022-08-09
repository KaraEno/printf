#include "main.h"
/**
* _puts - prints a string
* @str - the string
* Return: number of characters printed
*/
int _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	return (i);
}
int _print_string(va_list args)
{
	return (_puts(va_arg(args, char*)));
}
