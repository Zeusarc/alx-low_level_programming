#include "main.h"
/**
* _isalpha - Short description,
*
* @c:  gggg
* Return: Description of the returned value
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
