#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    printf("%x \n", a + b * c / d);
    printf("%x \n", a % b);
    printf("%x %x \n", a == b, a != b);
    printf("%x %x \n", a & b, a | b);
    printf("%x \n", ~a);
    printf("%x, %x \n", a && b, a || b);
    printf("%x \n", a << 1);
    printf("%x \n", a >> 1);
    a += b;
    printf("%x \n", a);

    a -= b;
    printf("%x \n", a);

    a *= b;
    printf("%x \n", a);

    a /= b;
    printf("%x \n", a);

    a %= b;
    printf("%x \n", a);

    return 0;
}