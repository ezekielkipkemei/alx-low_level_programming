#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * return: largest number
 */
int largerst_number(int a, int b, int c)
{
	int largest;
	{
		if (a > b)
			largest = a;
		else if (a > c);
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b > c)
			largest = c;
		else
			largest = b;
	}
	return(largest);
}
