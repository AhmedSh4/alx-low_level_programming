#include <stdio.h>

/**
 * main - Computes and prints the sum of the even-valued
 *        terms in the Fibonacci sequence whose values do
 *        not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
    int term1 = 1, term2 = 2, next_term, sum = 0;

    while (term1 <= 4000000)
    {
        if (term1 % 2 == 0)
        {
            sum += term1;
        }

        next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
    }

    printf("%d\n", sum);

    return (0);
}
