//Count frequency of array elements
#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // mark all frequencies as uncounted initially
    }

    // Count frequency
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            count = 1;
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;  // mark as counted
                }
            }
            freq[i] = count;
        }
    }

    // Print frequency
    printf("\nFrequency of elements:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
