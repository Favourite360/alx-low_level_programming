#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c : character check
 * Return:0 or 1  if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
