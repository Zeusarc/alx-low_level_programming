#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Short description,
*
* Return: Description of the returned value
 */
int main(void)
{
	int n;
	int f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	f = n % 10;
	if (f > 5)
	{
		printf("Last digit of %d is %d amd is greater than 5", n. f);
	}
	else if (f == 0)
	{
		printf("Last digit of %d is %d and is 0", n, f);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, f);
	}
	return (0);
}
