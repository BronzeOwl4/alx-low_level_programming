#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	printf("Size of a char is: %lu byte(s)\n", sizeof(char));
	printf("Size of an int is: %lu byte(s)\n", sizeof(int));
	printf("The sze of a long int is: %lu byte(s)\n", sizeof(long int));
	printf("The size of a long long int is: %lu byte(s)\n", sizeof(long long int));
	printf("The size of a float is: %lu byte(s)\n", sizeof(float));
	return (0);
}
