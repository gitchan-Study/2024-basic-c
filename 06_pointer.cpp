#include <stdio.h>

void Test(int *p);

int main() {
    // p. 332 Q3
    int tips = 0;
    Test(&tips);
    printf("%d", tips);
}

void Test(int *ptr) {
    *ptr = 5;
}