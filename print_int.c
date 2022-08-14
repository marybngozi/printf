#include "main.h"
/**
 * print_int - prints integers
 * @n: input number
 * Return: number of chatacters printed
 */

int print_int(int n)
{
	int y = 0;

	if (n < 0)
	{
		_putchar('-');
		y++;
		n = -n;
	}
	while (n / 10)
	{
		_putchar(n % 10 + '0');
		n = n / 10;
		y++;
	}
	return (y);
}