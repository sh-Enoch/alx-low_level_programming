#include "main.h"
/**
 * print_most_numbers - Entry point
 * excluding 2 and 4
 */
void print_most_numbers(void)
{
	int r;

	for (r = 0; r <= 9; r++)
	{
		if ((r == 2) || (r == 4))
			continue;
		else
			_putchar(r + '0');
	}
	_putchar('\n');
}
