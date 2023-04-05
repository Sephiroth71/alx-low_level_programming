#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s:input
 * Return: 0 (success)
 */
void_puts_rcursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_puthar('\n');
}
