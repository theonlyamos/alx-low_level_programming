#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char numbers[] = "0123456789";

	for (i = 0; i < 10; i++)
		putchar(numbers[i]);
	putchar('\n');
	return (0);
}
