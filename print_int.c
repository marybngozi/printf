#include <stdio.h>
#include "main.h"

/**
 * count_int - prints integers
 * @n: input number
 * Return: number of chatacters
 */

int count_int(int n)
{
	int x = 0;

	if (n < 0)
	{
		x++;
		n = -n;
	}
	x++;
	while (n / 10)
	{
		n = n / 10;
		x++;
	}
	return (x);
}


/**
 * print_num - prints integers
 * @n: input number
 * Return: number of chatacters printed
 */

void print_num(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
		print_num(n1 / 10);
	_putchar(n1 % 10 + '0');
}

/**
 * print_int - prints integers
 * @n: input number
 * Return: number of chatacters printed
 */

int print_int(int n)
{
	print_num(n);
	return (count_int(n));
}

