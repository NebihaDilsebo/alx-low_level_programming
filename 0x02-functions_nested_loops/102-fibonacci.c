#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;
       long unsigned int i, j, k;
	
	i = 0;
	j = 1;
	k = i + j;
	for (n = 0; n <= 50; n++)
	{
		printf("%lu\n, k");
		i = j;
		j = k;
		k = i + j;
	}
	return (0);
}
