#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;
    int sum = 0;

    for(int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    printf("Missing Number = %d\n", missing);

    return 0;
}