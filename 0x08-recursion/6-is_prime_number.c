/**
* is_prime_number - checks if a number is prime
* @n: the number to check
*
* Return: 1 if the number is prime, otherwise 0
*/
int is_prime_number(int n)
{
if (n <= 1) /* 0 and 1 are not prime */
return (0);

return (check_prime(n, 2));
}

/**
* check_prime - checks if a number is prime recursively
* @n: the number to check
* @divisor: the current divisor to check
*
* Return: 1 if the number is prime, otherwise 0
*/
int check_prime(int n, int divisor)
{
if (n % divisor == 0) /* found a divisor, not prime */
return (0);

if (divisor >= n / 2) /* checked all possible divisors, is prime */
return (1);

return (check_prime(n, divisor + 1));
}

