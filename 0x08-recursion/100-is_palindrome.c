#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 *
 * Return: 1 if string is palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, length - 1));
}

/**
 * is_palindrome_recursive - checks a string
 * @s: string
 * @left: left
 * @right: right
 *
 * Return: 1 or 0
 */
int is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, left + 1, right - 1));
}
