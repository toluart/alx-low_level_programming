#include "main.h"

/**
 * main - Entry point
 *
 * Description print_alphabet_x10: print alphabet 10x
 *
 * Return: x10 a-z
 **/

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
