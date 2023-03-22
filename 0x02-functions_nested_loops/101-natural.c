#include <stdio.h>
#include "main.h"

/**
 * main - Lists all numbers below 1024 ,excluded
 *        that are multiples of 3 or 5.
 *
 * Return: 0 if success
 */

int main(void) {
    int sum = 0;
    for (int i = 0; i < 1024; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
