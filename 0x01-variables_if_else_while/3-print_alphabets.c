#include <stdio.h>
/**
 * main - lower then upper
 *
 * Return: always 0
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;


	for (x = 0; x < 52; x++)
	{
		putchar(alph[x]);
	}
	putchar('\n');
	return (0);

}

