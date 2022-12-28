#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;
	long int i, j, k;

	i = 0;
	j = 1;
	k = i + j;
	for (n = 1; n <= 50; n++)
	{
		printf("%ld", k);
		i = j;
		j = k;
		k = i + j;
		if (n == 50)
			continue;
		printf(", ");
	}
	return (0);
}
