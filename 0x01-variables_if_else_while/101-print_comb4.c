#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Return: (0)
 */

int main(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				if (k != j && j != i && i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);

					if (k + j + i != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
