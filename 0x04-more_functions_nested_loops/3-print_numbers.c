#include "main.h"
/**
 * print_numbers - prints the numbers from 0 - 9
 * Return: 0 - 9 , followed by new line
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		_putchar(x + '0');
	_putchar('\n');
}
