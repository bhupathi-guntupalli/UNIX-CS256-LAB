#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {  // corrected loop condition
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void access_null_pointer() {
    int *ptr = NULL;
    *ptr = 10;  // Segmentation fault: dereferencing null pointer
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    print_array(arr, 5);  // Function call with incorrect array size

    access_null_pointer();  // Function call causing segmentation fault

    return 0;
}
