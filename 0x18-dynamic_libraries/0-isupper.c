#include "main.h"
/**
 * _isupper - check if a letter is upper
 * @n: the number to be checked
 * Return: 1 for upper letter or 0 for  any else
 */
int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return (1);
	}
	return (0);
}
