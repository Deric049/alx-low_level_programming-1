#include <stdio.h>
# define true 1
# define false 0

/**
 * main - Program entry point
 *
 * Return: 0 indicates success
 */

int main(void)
{
	int num, i, j, k;
	int done = false;

	for (num = 0; num < 10; num++)
	{
		if (done)
			break;
		for (i = 0; i < 10; i++)
		{
			if (done)
				break;
			for (j = num; j < 10; j++)
			{
				if (done)
					break;
				for (j > 0 ? (k = 0) : (k = i + 1); k < 10; k++)
				{
					putchar(num + '0');
					putchar(i + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(k + '0');
					if (num == 9 && i == 8 && j == 9 && k == 9)
					{
						done = true;
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
