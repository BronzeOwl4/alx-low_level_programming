#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts words
 * @str: pointer
 *
 * Return: Allocated
 */
int count_words(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == ' ')
			in_word = 0;
	}
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: pointer
 *
 * Return: Allocated
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count = count_words(str);

	if (str == NULL || str[0] == '\0' || word_count == 0)
		return (NULL);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, k = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;
		len = 0;

		while (str[k + len] != ' ' && str[k + len] != '\0')
			len++;
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[i][j] = str[k + j];
		words[i][j] = '\0';
		k += len;
	}
	words[i] = NULL;
	return (words);
}
