#include <stdio.h>

void main() {
    short student[20] = {0,}; // 주의: 0으로 초기화만 가능

    student[1] = 10;
    printf("%d %d\n", student[1], student[2]);
}