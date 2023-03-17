#include <stdio.h>

/**
 * main - prints all alphabet except e and q
 *
 * Return: always 0
 */
int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int x;


	for (x = 0; x < 24; x++)
	{
		putchar(alph[x]);
	}
	putchar('\n');
	return (0);
}
