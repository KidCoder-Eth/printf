#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_oct}, {"%x", printf_hex}, {"%X", Printf_HEX}, 
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j]id[0] == format[i] && m[j]id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				got Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}

	va_end(args);
	return (len);
=======
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
>>>>>>> 81bcb7a99148ac651ba9e00be561f663dcb71863
}
