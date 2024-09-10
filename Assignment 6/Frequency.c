#include <stdio.h>

void calculateFrequency(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;
        if (arr[i] != -1) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;  // Mark duplicate elements
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}

int main() {
    int arr[] = {2, 5, 2, 8, 5, 6, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    calculateFrequency(arr, size);

    return 0;
}
