#include <stdio.h>

int main() {
    int arr[] = {1, 4, 5, 7, 8};
    int n = 5;
    int sum = 9;

    printf("Pairs with sum %d:\n", sum);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}