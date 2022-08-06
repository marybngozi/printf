#include "main.h"
/**
 * _print_chars - prints characters using putchar
 * @str: characters to print
 * Return: number of characters
 */
int _print_chars(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	return (j);
}
