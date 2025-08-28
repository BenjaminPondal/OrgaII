#include <stdio.h>

int main()
{
    printf("Using i++ \n");
    for (int i = 0; i < 5;)
    {
        printf("%d \n", i++);
    }

    printf("Using ++i \n");
    for (int i = 0; i < 5;)
    {
        printf("%d \n", ++i);
    }
}