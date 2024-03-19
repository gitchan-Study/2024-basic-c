#include <stdio.h>

int main() {
    int a;
    printf("a = %d\n", a); // a = 1
    printf("&a = %p\n", &a); // &a = 0x16da1752c

    int *pa; // pa에는 주소가 저장됨!
    pa = &a; // a의 주소를 pa에 저장함!
    *pa = 10;

    printf("*pa = %d\n", *pa); // *pa = 10
    printf("pa = %p\n", pa); // pa = 0x16da1752c
}
