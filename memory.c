#include "shell.h"

/**
 * bfree - freer
 * @ptr: address
 *
 * Return: 1 or 0
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

