#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	
	for (i = 0; str[i] != '\0'; i++)
	{
		switch(str[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case '\n':
			case '\t':
			case ' ':
				if (str[i + 1] > 96 && str[i + 1] < 123)
				{
					str[i + 1] = str[i + 1] - 32;
				}
		}
	}
	return (str);
}
		
