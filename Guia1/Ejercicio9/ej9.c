#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t word = 0xF000000F;
    uint32_t lowMask = 0x7;
    uint32_t topMask = 0xE0000000;

    uint32_t maskedLow = word & lowMask;
    uint32_t maskedTop = word & topMask;

    printf("%d \n", maskedLow == (maskedTop >> 29));
}