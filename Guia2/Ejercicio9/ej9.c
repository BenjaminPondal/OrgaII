#include <stdio.h>
#include <stdint.h>

void uppercase(char* string) {
    char diff = 'A' - 'a';

    while (*string != '\0') {
        if (*string > 'Z' && *string < 'z') {
            *string += diff;
        }

        string++;
    }

}

int main() {
    char str1[] = "Hola mundo!";

    uppercase(str1);

    printf("Uppercase string: %s\n", str1);
}