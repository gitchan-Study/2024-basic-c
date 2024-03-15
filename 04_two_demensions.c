#include <stdio.h>
#include <string.h>

short countLength(const char data[]);

void printTwoDimension(const short two_dimension[]);

void main() {
    short one_dimension[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
    short two_dimension[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            two_dimension[i][j] = one_dimension[3 * i + j];
        }
    }

    printTwoDimension(two_dimension);

}

void printTwoDimension(const short two_dimension[]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            short data = two_dimension[i][j];
            printf("%d, %d: %d\n", i, j, data);
        }
    }
}

