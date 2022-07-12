#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
<<<<<<< HEAD
 * Return: on success 1
 * on error , -1 and err no is set appropriately
=======
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
>>>>>>> 33c675ca039075f1abb06939d8f1d3e1958f38a1
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
/**
 * _puts - prints a string to stdout
 * @str: pointer ot the string to print
=======
/*
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
>>>>>>> 33c675ca039075f1abb06939d8f1d3e1958f38a1
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	return (i);
}
