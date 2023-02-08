## bubble Sort

Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The process is repeated until the list is sorted in the desired order. It is called bubble sort because the smaller elements "bubble" to the top of the list as the algorithm runs.

## Insertion Sort

Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. Insertion sort works by taking elements from the list one by one and inserting them in their correct position into a new, sorted list. The algorithm iterates through the input list and removes one element per iteration, finds the location it belongs within the sorted list, and inserts it there. The algorithm repeats until no input elements remain.

## Selection Sort

Selection sort is a simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted part of the list and putting it at the beginning. The algorithm divides the input list into two parts: the sorted part at the left end and the unsorted part to the right. Initially, the sorted part is empty and the unsorted part is the entire list. The algorithm repeatedly selects the minimum element from the unsorted part and swaps it with the leftmost unsorted element, moving the boundary of the sorted part one element to the right. This continues until all elements have been sorted and moved into the sorted part of the list.

## Here's a simple program in C that performs matrix multiplication:

```ruby
#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int m, n, p, q, i, j, k;
    int first[MAX_SIZE][MAX_SIZE], second[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d", &p, &q);
    printf("Enter the elements of the second matrix: \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    if (n != p) {
        printf("The matrices cannot be multiplied.\n");
    } else {
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                result[i][j] = 0;
                for (k = 0; k < n; k++) {
                    result[i][j] += first[i][k] * second[k][j];
                }
            }
        }

        printf("The product of the matrices is: \n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
```

This program performs matrix multiplication for two matrices with integer elements. It first takes the inputs for the two matrices, checks if the number of columns of the first matrix is equal to the number of rows of the second matrix (which is a necessary condition for multiplication), and then performs the multiplication using nested loops. Finally, it prints the resulting matrix.
