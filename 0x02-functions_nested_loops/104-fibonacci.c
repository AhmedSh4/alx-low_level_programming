#include <stdio.h>

int main(void)
{
    int i, carry, term1, term2;
    term1 = 1;
    term2 = 2;
    printf("%d, %d", term1, term2);

    for (i = 3; i <= 98; i++)
    {
        carry = term1 + term2;
        printf(", %d", carry);
        term1 = term2;
        term2 = carry;
    }
    printf("\n");

    return 0;
}

