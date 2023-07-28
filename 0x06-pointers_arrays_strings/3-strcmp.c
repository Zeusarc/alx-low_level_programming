#include "main.h"
/**
*_strcmp - compares two strings.
*@s1: 1st string.
*@s2: 2nd string.
*Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
