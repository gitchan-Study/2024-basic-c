#include <stdio.h>

short countLength(const char data[]);

void main() {
    // 3가지 모두 같은 의미
    char data1[6] = {'h', 'a', 'p', 'p', 'y', 0};
    char data2[6] = "happy";
    char data3[] = "happy";

    short count1 = countLength(data1);
    short count2 = countLength(data2);
    short count3 = countLength(data3);

    printf("%d %d %d", count1, count2, count3);
}

short countLength(const char data[]) {
    short count;
    while (data[count] != 0) {
        count++;
    }
    return count;
}
