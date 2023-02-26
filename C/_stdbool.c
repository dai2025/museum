#include <stdbool.h>
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    bool equal = x == y; // false
    if (equal) {
        printf("x and y are equal\n");
    } else {
        printf("x and y are not equal\n");
    }
    return 0;
}
