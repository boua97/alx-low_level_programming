#include "main.h"

/**
 *times_table - function that prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	int i, n, in;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			in = i * n;
			if (in > 9)
				_putchar(in / 10 + '0');
			_putchar(in % 10 + '0');
			if (i < 9)
			{
				in = in + n;
				_putchar(',');
				if (in < 10)
					_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
