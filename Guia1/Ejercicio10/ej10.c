#include <stdio.h>
#include <stdint.h>

int main()
{
    int i = 10;
    while (i--)
    {
        printf("i = %d\n", i);
    }

    printf("Con for: \n");
    for (int i = 9; i >= 0; i--)
    {
        printf("i = %d\n", i);
    }
}