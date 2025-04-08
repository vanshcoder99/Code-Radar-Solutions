#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        int isVisited = 0;

        // Check if this element is already counted
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isVisited = 1;
                break;
            }
        }

        if (isVisited == 0) {
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            printf("%d %d\n", arr[i], count);
        }
    }

    return 0;
}
