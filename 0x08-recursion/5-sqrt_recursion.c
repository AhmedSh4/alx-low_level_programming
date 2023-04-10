#include "main.h"
/**
* _sqrt_recursion - Computes the natural square root of a number.
*
* @n: The number to compute the square root of.
*
* Return: The natural square root of `n`, or -1 if `n` does not have a natural
* square root.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_helper(n, 1, n));
}

/**
* _sqrt_helper - Computes the natural square root of a number using recursion.
*
* @n: The number to compute the square root of.
* @low: The lower bound of the search interval.
* @high: The upper bound of the search interval.
*
* Return: The natural square root of `n`, or -1 if `n` does not have a natural
* square root.
*/
int _sqrt_helper(int n, int low, int high)
{
int mid = (low + high) / 2;

if (mid * mid == n)
return (mid);
if (low >= high)
return (-1);
if (mid * mid < n)
return (_sqrt_helper(n, mid + 1, high));
return (_sqrt_helper(n, low, mid - 1));
}

