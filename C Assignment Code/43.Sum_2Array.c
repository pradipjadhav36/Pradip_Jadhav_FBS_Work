#include <stdio.h>
int main() {
    int n;

    // Input the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    // Input elements for the first array
    printf("\nEnter elements for first array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("\nEnter elements for second array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    // Add corresponding elements and store in the sum array
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    // Print the result array
    printf("\nSum of corresponding elements:\n");
    for (int i = 0; i < n; i++) {
        printf("sum[%d] = %d\n", i, sum[i]);
    }

    return 0;
}
