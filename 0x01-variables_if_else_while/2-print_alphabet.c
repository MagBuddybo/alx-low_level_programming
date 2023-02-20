#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *Description: prints the alphabet in lowercase\n
 * Return : 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int ch ='A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;

	}
	putchar('\n');
	return (0);
}
