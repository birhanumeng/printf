#include "main.h"

/**
 * print_binary - Print number in to binary number
 * @n: Variable va_list
 *
 * Return: count of bytes printed
 */
int print_binary(va_list n)
{
	long int number;
	int counter = 0, index = 0, i;
	char *tmp = malloc(sizeof(char) * 32);

	number = va_arg(n, int);
	if (number < 0)
		number *= -1;

	while (number >= 0)
	{
		tmp[index++] = number % 2;
		number /= 2;
		if (number == 0)
			break;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(tmp[i] + 48);
		counter++;
	}
	free(tmp);

	return(counter);
}
