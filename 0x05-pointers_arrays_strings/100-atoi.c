#include "main.h"

/**
 * _atoi - cchjewjkhv
 * @s: ewkjhwqjkeve
 * Return: ;wmkelvh
 */

int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int jumbo = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			jumbo *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	jumbo *= -1;
	return (n * jumbo);
}
