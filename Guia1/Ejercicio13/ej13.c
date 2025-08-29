#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int dados[6];
    const size_t iteraciones = 6.0e7;

    for (size_t i = 0; i < iteraciones; i++)
    {
        int dice;
        dice = 1 + rand() / ((RAND_MAX + 1u) / 6);

        dados[dice - 1]++;
    }

    for (size_t i = 0; i < 6; i++)
    {
        printf("%d ", dados[i]);
    }
    printf("\n");

    return 0;
}