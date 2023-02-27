#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int i = 0;
	char c = str[0];

	while (c != '\0')
	{
		_putchar(c);
		i++;
		c = str[i];
	}

	_putchar('\n');
}
