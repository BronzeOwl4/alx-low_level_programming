#include <stdio.h>

/**
 * beforemain - function that executes before main
 */
void __attribute__((constructor)) beforemain(void)
{
	char *str1 = "You're beat! and yet, you must allow,\n";
	char *str2 = "I bore my house upon my back!\n";

	while (*str1)
		putchar(*str1++);
	while (*str2)
		putchar(*str2++);
}
