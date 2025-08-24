#include <stdio.h>

int main()
{
    char c = 100;
    unsigned char uc = 80;
    short s = -8712;
    unsigned short us = 6780;
    int i = 123456;
    unsigned u = 92345;
    long l = 1234567890;
    unsigned long ul = 12345678912345;

    printf("char(%lu): %d \n", sizeof(c), c);
    printf("unsigned char(%lu): %d \n", sizeof(uc), uc);
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("unsigned short(%lu): %d \n", sizeof(us), us);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("unsigned(%lu): %d \n", sizeof(u), u);
    printf("long(%lu): %ld \n", sizeof(l), l);
    printf("unsigned long(%lu): %ld \n", sizeof(ul), ul);

    return 0;
}