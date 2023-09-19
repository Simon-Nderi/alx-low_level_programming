#include "main.h"

/**
 * print_numbers - function checks for a digit (0 through 9).
 *
 * Return:Always 0.
 */

void print_numbers(void)
{
	int pr;

	for (pr = 48; pr < 58; pr++)
	{
		_putchar(pr);
	}
	_putchar('\n');
}
