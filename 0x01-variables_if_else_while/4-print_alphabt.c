#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * description: get a random alphabet check
 * Return:Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}


