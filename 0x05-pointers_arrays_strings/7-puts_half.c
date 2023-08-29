#include <stdio.h>
#include <string.h>

void puts_half(char *str) {
    int length = strlen(str);
    int start_index;

    if (length % 2 == 0) {
        start_index = length / 2;
    } else {
        start_index = (length - 1) / 2;
    }

    for (int i = start_index; i < length; i++) {
        putchar(str[i]);
    }
    putchar('\n');
}

int main(void) {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "OpenAI";

    puts_half(str1);
    puts_half(str2);
    puts_half(str3);

    return 0;
}

