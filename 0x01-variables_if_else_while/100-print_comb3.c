#include <stdio.h>
/**
 *  main - Writes 00 - 9
 *  @void: Empty parameter list for main.
 *  Description: Writes all unique combinations
 *  of 2 numbers
 *  Return: 0 for success
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 10)
	{
		j = i % 10;
		k = i / 10;
		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
