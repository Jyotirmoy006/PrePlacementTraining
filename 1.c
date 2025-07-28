//insert an element in a an array
#include <stdio.h>

int main() {
    int arr[100];        // fixed-size array
    int size = 5;        // current number of elements
    int i, element;


   arr={1,2,3,4,5};

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter element to insert at end: ");
    scanf("%d", &element);

    arr[size] = element;
    size++;

    printf("Updated array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

