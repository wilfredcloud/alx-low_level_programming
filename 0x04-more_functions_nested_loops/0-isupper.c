#include <stdio.h>
#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: character
*
* Return: Always (0) false and 1 true
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
