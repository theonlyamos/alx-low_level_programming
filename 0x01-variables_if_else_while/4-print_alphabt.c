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
char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

for (i = 0; i < 26; i++)
{
    if ((alphabets[i] != 'e') && (alphabets[i] != 'q'))
        putchar(alphabets[i]);
}
putchar('\n');
return (0);
}
