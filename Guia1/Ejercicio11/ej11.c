#include <stdio.h>
#include <stdint.h>

int main()
{
#define N 4
    int16_t array[] = {1, 2, 3, 4};

    for (size_t i = 0; i < N; i++)
    {
        array[i] = i % N;
    }

    return 0;
}