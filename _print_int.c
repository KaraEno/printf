#include "main.h"

/**
 * _print_int - prints an integer
 * @args: the arguments list
 * Return: number of chars printed
 */

int _print_int(va_list args)
{
	int a[10];
	int j, m, n, sum, lenght;
	n = va_arg(args, int);

	lenght = 0;
	m = 1000000000;
	a[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		lenght++;

		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];

		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			lenght++;
		}
	}
	return (lenght);
}
