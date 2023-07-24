#include "main.h"

/**
 * _puts - Main function
 * @str: Pointer
 * Return: String and new line
 */

void _puts(char *str)
{
	i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
