#include <stdlib.h>
#include <stdio.h>

/**
 * main - program to printout the alphabelts
 * in lower cases and then in upper cases
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char lowercases[] = "abcdefghijklmnopqrstuvwxyz";
	char uppercases[] = "ABCDEFGHIJKLMN0PQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
		putchar(lowercases[i]);
	for (i = 0; i < 26; i++)
		putchar(uppercases[i]);
	putchar('\n');
	return (0);
}
