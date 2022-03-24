#inlcude "main.h"

/**
 *  * print_number - print an int using only _putchar
 * @number: int to be printed by function
 *
 *Return : nothing
 **/

void print_number(int number)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	x = n;
	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
