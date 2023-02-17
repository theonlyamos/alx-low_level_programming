#include <stdlib.h>
#include <stdio.h>

/**
 * main - program to printout the alphabelts
 * in lower cases
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char alphabets[27];
	*alphabets = 'abcdefghijklmnopqrstuvwxyz';
	for (i = 0; i < 27; i++)
		putchar(alphabets[i]);
	return 0;
}
