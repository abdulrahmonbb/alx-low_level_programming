#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts each word
 * @str: string
 *
 * Return: count
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * get_nextWord - gets the next word
 * @str: double pointer
 *
 * Return: next word
 */
char *get_nextWord(char **str)
{
	char *start;
	char *word;
	int len;

	while (**str && **str == ' ')
		(*str)++;

	start = *str;
	while (**str && **str != ' ')
		(*str)++;

	len = *str - start;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);

	strncpy(word, start, len);
	word[len] = '\0';

	return (word);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: splitted words
 */
char **strtow(char *str)
{
	int word_count;
	int i;
	char *word;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);

	i = 0;
	while (*str && i < word_count)
	{
		word = get_nextWord(&str);
		if (word)
			words[i++] = word;
		else
		{
			while (i > 0)
				free(words[--i]);
			free(words);
			return (NULL);
		}
	}
	words[word_count] = NULL;
	return (words);
}
