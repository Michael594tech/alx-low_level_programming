#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The unsigned long int to be printed in binary.
 *
 * Return: No return value (void).
 */

void print_binary(unsigned long int n)
{
	unsigned long int x;
	unsigned long int cover;
	int top_zero;
	unsigned int number_bits;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	cover = 1UL << (sizeof(unsigned long int) * 8 - 1);
	top_zero = 0;


	while ((cover & n) == 0)
	{
		cover >>= 1;
		top_zero++;
	}

	number_bits = sizeof(unsigned long int) * 8 - top_zero;
	for (x = 0; x < number_bits; x++)
	{
		if (n & cover)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		cover >>= 1;
	}
}
