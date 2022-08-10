#include "main.h"
/**
* _puts - prints a string
* @str: the string
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
/**
* _print_string - print string
* @args: argument
* Return: number of string to be printed
*/
int _print_string(va_list args)
{
	return (_puts(va_arg(args, char*)));
}
