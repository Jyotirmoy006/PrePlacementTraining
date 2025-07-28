//Find second largest element in array
#include <stdio.h>

int main() {
    int arr[100], n, i, max,max2;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    max2=arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        else if (arr[i]>max2){
            max2=arr[i];}
    }
    printf("The second largest element is: %d\n", max2);

    return 0;
}
