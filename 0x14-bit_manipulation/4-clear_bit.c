#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long int to modify.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 for a successful operation, -1 for failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	 unsigned long int cover;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	cover = 1UL << index;
	cover = ~cover;

	*n &= cover;

	return (1);
}
