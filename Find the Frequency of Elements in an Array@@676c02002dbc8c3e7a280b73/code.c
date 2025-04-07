#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the number of elements

    int arr[n], freq[n];  // Arrays to store elements and their frequencies

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
        freq[i] = -1;  // Initialize all frequencies to -1
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;  // Mark duplicates
                }
            }
            freq[i] = count;  // Store frequency for unique element
        }
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", arr[i], freq[i]);  // Print unique elements and their frequencies
        }
    }

    return 0;
}
