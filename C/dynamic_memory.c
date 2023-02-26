/*
fn main() {
    let mut v = vec![1, 2, 3];
    let r1 = &mut v;
    foo(&v); //
}

fn foo(v: &Vec<i32>) {
    println!("{:?}", v);
}

fn main() {
    let mut v = vec![1, 2, 3];
    let r1 = &mut v;
    foo(&*v); // OK
}

fn foo(v: &Vec<i32>) {
    println!("{:?}", v);
}
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array = malloc(5 * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "Failed to allocate memory\n");
        return 1;
    }

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", array[i]);
    }

    free(array);
    return 0;
}
