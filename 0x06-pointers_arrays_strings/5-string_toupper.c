#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @ch: imput string
 *
 * Return: string to uppercase.
 */

char *string_toupper(char *ch)
{
	int v;

	for (v = 0; ch[v] != '\0'; v++)
	{
		if (ch[v] >= 97 && ch[v] <= 122)
		{
			ch[v] -= 32;
		}
	}
	return (ch);
}
