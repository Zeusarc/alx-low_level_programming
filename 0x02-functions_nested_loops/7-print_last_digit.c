#include "main.h"
/**
* print_last_digit - Short description,
*
* @n:  gggg
* Return: Description of the returned value
*/
int print_last_digit(int n)
{
	int l;
	 l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	_putchar('\n');
}
