#include "main.h"

/**
 * print_square - prints the square.
 * @size: integer.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				for (c = 0; c < size; c++)
					if (i == j)
					{
						_putchar(35);
					}
				_putchar('\n');
			}
		}
	}
