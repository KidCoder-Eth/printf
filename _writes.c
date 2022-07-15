#include "main.h"
#include <unistd.h>
/**
 * _writes - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _writes(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
}
