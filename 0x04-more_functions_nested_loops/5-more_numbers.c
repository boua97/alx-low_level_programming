#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int x, i, n;

	for (x = 0; x < 10; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			i = n;

			if (n > 9)
			{
				i = n % 10;

				_putchar('1');
			}
			_putchar('0' + i);
		}
		_putchar('\n');
	}
}
