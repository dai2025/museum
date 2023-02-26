/*
fn main() {
    let array = [1, 2, 3, 4, 5];
    for i in 0..5 {
        println!("{}", array[i]);
    }
}
*/
#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}
