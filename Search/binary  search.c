#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {12, 23, 34, 45, 67};
    int n = 5;
    int key = 45;

    int pos = binarySearch(arr, n, key);

    if (pos != -1)
        printf("Found at index %d\n", pos);
    else
        printf("Not Found\n");

    return 0;
}
