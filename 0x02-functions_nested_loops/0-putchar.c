#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar, followed by a new line.
 *
 * Return: 0=success
 */

int main(void)
{
	char ch[] = "_putchar";
	int n;

	for (n = 0; n <= 7; n++)
		_putchar(ch[n]);
	_putchar('\n');

return (0);
}

