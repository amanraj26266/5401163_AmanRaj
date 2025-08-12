// Min-max sum: Given 5 elements, find the min and max sum of 4 elements and print them
#include <stdio.h>

void min_max_sum(int arr[], int n) {
    long total = 0;
    int min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++) {
        total += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    long min_sum = total - max;
    long max_sum = total - min;
    printf("Min sum: %ld\nMax sum: %ld\n", min_sum, max_sum);
}

int main() {
    int n = 5;
    int arr[5];
    printf("Enter 5 elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min_max_sum(arr, n);
    return 0;
}

