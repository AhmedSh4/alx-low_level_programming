#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int row, col, res;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (col = 1; col <= 9; col++)
		{
			res = row * col;

			if (res <= 9)
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

