#include <stdio.h>
#include "main.h"
/**
*print_to_98 - Short description,
*
*@n: stater
*
* Return: Description of the returned value
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("\n");
	}
	else
	{
		while (n < 9)
			printf("%d, ", n++);
		printf("\n");
	}
}
