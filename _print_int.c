#include "main.h"

/**
 * print_int - prints an integer.
 * @arg: argument
 * Return: 0
 */

int print_int(va_list arg)
{
	unsigned int divisor = 1, i, result, printChar = 0;
	int n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		printChar++;
		n *= -1;
	}
	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10, printChar++)
	{
		result = n / divisor;
		_putchar('0' + result);
	}
	return (printChar);
}
