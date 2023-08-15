#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @ch: input string.
 *
 * Return: string.
 */

char *cap_string(char *ch)
{
	int v;

	for (v = 0; ch[v] != '\0'; v++)
	{
		if (ch[v] >= 97 && ch[v] <= 122)
		{
			if (v == 0)
				ch[v] -= 32;
			else
			{
				if (ch[v - 1] == ' ' || ch[v - 1] == '\n' || ch[v - 1] == '\t' || ch[v - 1] == ',' || ch[v - 1] == ';' || ch[v - 1] == '.' || ch[v - 1] == '!' || ch[v - 1] == '?' || ch[v - 1] == '\"' || ch[v - 1] == '(' || ch[v - 1] == ')' || ch[v - 1] == '{' || ch[v - 1] == '}')
				{
					ch[v] -= 32;
				}
			}
		}
	}
	return (ch);
}
