#include "main.h"

/**
 * _memset - fills memory with empty byte
 *
 * @s: pointer to string
 * @b: constant byte
 * @n: first bytes to change
 * Return: poimter to modifies string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
