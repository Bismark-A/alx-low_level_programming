#include "main.h"

/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystach
 *
 * @haystack: string to work on
 * @needle: substring to match
 * Return: pointer to thefirst match or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, match;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
				{
					match = 0;
					break;
				}
				match = 1;
			}
			if (match)
				return (haystack + i);
		}
	}
	return (NULL);
}

