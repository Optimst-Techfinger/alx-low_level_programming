#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks for alphabetic character
 *
 * @c: return char type
 *
 * Return: return 0 on success and 1 on fail
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)

		return (1);

	else

		return (0);

}
