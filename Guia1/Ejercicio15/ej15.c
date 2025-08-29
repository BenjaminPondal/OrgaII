#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

unsigned long int factorial(unsigned int n);

int main()
{
    unsigned int n;
    scanf("%u", &n);

    printf("Result: %ld\n", factorial(n));
    return 0;
}

unsigned long int factorial(unsigned int n)
{
    unsigned long res = 1;

    for (size_t i = 1; i <= n; i++)
    {
        res *= i;
    }

    return res;
}