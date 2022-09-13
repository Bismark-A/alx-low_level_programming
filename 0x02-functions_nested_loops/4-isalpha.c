#include "main.h"

/**
 * _isalpha - checks wether a character is an alphabetor not
 * @c: the ascii value
 * Return: 1 if it is a lowercase and 0 if it is otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
