#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for (int i = 0; text[i] != '\0'; i++) {
		putchar(text[i]);
	}
	putchar('\n');
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
