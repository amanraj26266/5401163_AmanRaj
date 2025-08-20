// we will be doing first question of week 2 of 1 month prepration on hackerrank
// sales_by_match.c
// This program counts the number of pairs of socks with matching colors uisng function call.
#include <stdio.h>
#include <stdlib.h>
int sockMerchant(int n, int ar[]) {
    int count[101] = {0}; 
    int pairs = 0;

    for (int i = 0; i < n; i++) {
        count[ar[i]]++;
    }

    for (int i = 0; i < 101; i++) {
        pairs += count[i] / 2;
    }

    return pairs;
}
int main() {
    int n;
    printf("Enter the number of socks: ");
    scanf("%d", &n);
    
    int *ar = (int *)malloc(n * sizeof(int)); 
    if (ar == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; 
    }

    printf("Enter the sock colors: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int result = sockMerchant(n, ar);
    printf("Number of pairs of socks: %d\n", result);

    free(ar); 
    return 0;
}
