#include "main.h"

/**
 * prinhhex - prints a short decimal in hexadecimal.
 * @arguments: input string.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer.
 * Return: number of chars to be printed.
 */
int prinhhex(va_list arguments, char *buf, unsigned int ibuf)
{
	short int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(arguments, int);
	isnegative = 0;
	
}
