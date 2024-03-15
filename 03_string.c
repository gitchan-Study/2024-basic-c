#include <stdio.h>
#include <string.h>

short countLength(const char data[]);

void main() {
    char data[10] = {'a', 'b', 'c', 0};
    char result[16];

    strcpy(result, data);
    strcpy(result, "def");

    printf("%s %s", data, result);
}

