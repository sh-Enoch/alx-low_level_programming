#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: always void
 */
void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
			_putchar('\n');
			i++;
	}
}
