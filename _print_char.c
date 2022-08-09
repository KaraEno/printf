#include "main.h"
/**
* _printt_char - prints character
* @args: argument recieved
* Return: 1
*/
int _print_char(va_list args)
{
		_putchar(va_arg(args, int));
		return (1);
}
