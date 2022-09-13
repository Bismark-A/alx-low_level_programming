#include "main.h"

/**
 * main - a program that prints _putchar
 * Return : Always 0(Success)
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
