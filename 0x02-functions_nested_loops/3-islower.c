#include "main.h"

/**
 * main - check the code.
 * _islower - compare
 * @c: contains files
 * Return: 0 Always.
 *
 **/

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
