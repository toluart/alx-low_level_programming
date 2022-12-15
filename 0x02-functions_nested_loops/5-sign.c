#include "main.h"

/**
 * print_sign - returns 0 letter not lowercase, 1 letter lowercase
 * @n: number to check
 * Return: 0, 1 or -1
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
