#include <stdio.h>

//
#pragma pack(4)

struct ExampleStruct {
    char c1;
    int i1;
    char c2;
};

int main() {
    printf("Size of ExampleStruct: %lu bytes\n", sizeof(struct ExampleStruct));
    return 0;
}
