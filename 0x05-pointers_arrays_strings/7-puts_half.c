/**
 * function that prints half a string
 *followed by a new line
 *
 */

#include "main.h"

/*function created as puts_half
 *variable is stored as str
 */
void puts_half(char *str) 
{
	int length = 0, i, n;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;
	for (i = n; i < length; i++) 
		_putchar(str[i]);

	_putchar('\n');
}
