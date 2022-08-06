#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	/**
	* unsigned int ui;
	* void *addr;
	*/

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length1:[%d, %i]\n", len, len);
	printf("Length2:[%d, %i]\n", len2, len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Length1:[%d, %i]\n", len, len);
	printf("Length2:[%d, %i]\n", len2, len2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Length1:[%d, %i]\n", len, len);
	printf("Length2:[%d, %i]\n", len2, len2);
	return (0);
}
