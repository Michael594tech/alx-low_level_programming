#include "main.h"

/**
 * get_bit - Returns the value of a bit at an index in decimal number.
 * @n: The unsigned long int to search (from which to get the bit).
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: Returns the value of the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int cover;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	cover = 1UL << index;

	if (n & cover)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
