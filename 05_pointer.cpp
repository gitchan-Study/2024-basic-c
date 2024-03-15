#include <stdio.h>

int main() {
    int data = 0x12345678;
    short *const ptr = (short *) &data;
    printf("%p", *ptr);
    printf("%p\n", *(ptr + 1));
    *ptr = 0x0412;
    printf("%p", *ptr);
    printf("%p\n", *(ptr + 1));
}
