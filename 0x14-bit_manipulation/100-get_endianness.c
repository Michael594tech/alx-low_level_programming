#include "main.h"

/**
 * get_endianness - Checks the size of the system.
 *
 * Return: Returns 0 if big endian, 1 if small endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	return (*byte == 1);
}
