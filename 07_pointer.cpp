#include <stdio.h>

int main() {
    int content;
    int *ptr;
    ptr = &content;
    printf("%p\n", &ptr); // eg. 200
    ptr++;
    printf("%p\n", &ptr); // eg. 204
}
