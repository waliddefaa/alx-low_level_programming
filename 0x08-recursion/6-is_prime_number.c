#include "main.h"

/**
 * _prime - checking for prime number
 * @n: input
 * @i: input
 * Return: result
 */


int _prime(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (_prime(n, i + 1));
}






/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: input
 * Return: result
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (_prime(n, 2));
}

