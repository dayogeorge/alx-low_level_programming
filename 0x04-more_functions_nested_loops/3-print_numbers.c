#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_numbers - ouputs 0 - 9
*
* Return: Always 0 (Success)
*
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
