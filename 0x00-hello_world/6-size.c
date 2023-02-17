#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

printf("size of char : %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int :%lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int :%lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a float :%lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
