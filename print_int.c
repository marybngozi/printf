#include <stdio.h>
#include <stdlib.h>

/**
 * print_int - prints integers
 * @num: input number
 *
 * Return: number of chatacters printed
 */

void print_int(int num)
{
	int x;
	int y;

	if (num < 0)
	{
		num = num * -1;
		putchar('-');
	}
	x = num % 10;
	num = num - x;
	if (num >= 10)
	{
		y = num / 10;
		print_int(y);
	}
	putchar(x + '0');
}
