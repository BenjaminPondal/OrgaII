#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t i8 = -128;
    uint8_t ui8 = 128;
    int16_t i16 = -7000;
    uint16_t ui16 = 9999;
    int32_t i32 = -123456789;
    uint32_t ui32 = 1234567890;
    int64_t i64 = -1234567890123;
    uint64_t ui64 = 123456789012345;

    printf("int8(%lu): %d \n", sizeof(i8), i8);
    printf("uint8(%lu): %d \n", sizeof(ui8), ui8);
    printf("int16(%lu): %d \n", sizeof(i16), i16);
    printf("uint16(%lu): %d \n", sizeof(ui16), ui16);
    printf("int32(%lu): %d \n", sizeof(i32), i32);
    printf("uint32(%lu): %d \n", sizeof(ui32), ui32);
    printf("int64(%lu): %ld \n", sizeof(i64), i64);
    printf("uint64(%lu): %ld \n", sizeof(ui64), ui64);

    return 0;
}