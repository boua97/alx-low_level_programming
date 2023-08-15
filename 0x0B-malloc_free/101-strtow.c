/*
 * File: 101-strtow.c
 * Auth: sam tech
 */

#include "main.h"
#include <stdlib.h>

int w_len(char *str);
int c_words(char *str);
char **strtow(char *str);

/**
 * w_len - Locates the ind marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The ind marking the end of the initial word pointed to by str.
 */
int w_len(char *str)
{
	int ind = 0, len = 0;

	while (*(str + ind) && *(str + ind) != ' ')
	{
		len++;
		ind++;
	}

	return (len);
}

/**
 * c_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int c_words(char *str)
{
	int ind = 0, words = 0, len = 0;

	for (ind = 0; *(str + ind); ind++)
		len++;

	for (ind = 0; ind < len; ind++)
	{
		if (*(str + ind) != ' ')
		{
			words++;
			ind += w_len(str + ind);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int ind = 0, words, w, let, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = c_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[ind] == ' ')
			ind++;

		let = w_len(str + ind);

		strings[w] = malloc(sizeof(char) * (let + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < let; l++)
			strings[w][l] = str[ind++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
