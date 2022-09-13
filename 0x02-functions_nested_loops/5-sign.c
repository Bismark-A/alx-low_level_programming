#include "main.h"

/**
 * print_sign - this prints the sign of the number
 * @n: positive, zero or negative integer
 * Return: 1 if it is positive, 0 if it is zero,and -1 if it is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
