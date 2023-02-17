#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %d byte(s)", (unsigned long)sizeof(a));
printf("Size of an int: %d byte(S)", (unsigned long)sizeof(b));
printf("Size of a long int: %d byte(S)", (unsigned long)sizeof(c));
printf("Size of a long long int: %d byte(s)", (unsigned long)sizeof(d));
printf("Size of a float: %d byte(s)", (unsigned long)sizeof(f));
return (0);
}
