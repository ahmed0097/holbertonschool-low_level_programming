#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
{
	for (i = 0; i <= 14; i++)
{
	if ( i > 9)
	_putchar((i / 10) + 48);
	_putchar((i % 10) + 48);
}
	_putchar('\n');
}
}
