#include <stdio.h>
int main()
{
    float f = 0.1;
    double d = 0.1;

    printf("%f \n", f);
    printf("%f \n", d);

    int fint = (int)f;
    int dint = (int)d;

    printf("%d \n", fint);
    printf("%d \n", dint);
}