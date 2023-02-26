#include <stddef.h>
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t arr_len = sizeof(arr) / sizeof(arr[0]);
    printf("The array has %zu elements.\n", arr_len);
    return 0;
}
