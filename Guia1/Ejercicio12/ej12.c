#include <stdio.h>
#include <stdint.h>

int main()
{
#define N 4
    int16_t array[] = {1, 2, 3, 4};

    size_t rotaciones;
    scanf("%zx", &rotaciones);

    if (N < 2)
        return 1;

    for (size_t i = 0; i < rotaciones; i++)
    {
        int16_t first = array[0];

        for (size_t i = 1; i < N; i++)
        {
            int16_t temp = array[i];
            array[i - 1] = temp;
        }

        array[N - 1] = first;
    }

    for (size_t i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}