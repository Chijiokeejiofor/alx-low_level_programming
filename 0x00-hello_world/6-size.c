#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %ld byte(s)\n",(unsigned long)sizeof(char));
	printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n",(unsigned long) sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
