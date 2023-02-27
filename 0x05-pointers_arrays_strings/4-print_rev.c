#include "main.h"
/**
 * print_rev - prints passed string in reverse to stdout.
 *
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int i = 0;
	char c = s[0];

	while (c != '\0')
	{
		i++;
		c = s[i];
	}

	i--;

	while (i > -1)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
