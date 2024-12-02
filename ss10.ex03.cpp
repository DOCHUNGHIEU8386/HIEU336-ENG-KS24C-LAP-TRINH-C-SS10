#include <stdio.h>

// Hàm s?p x?p chèn
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Di chuy?n các ph?n t? c?a arr[0..i-1], l?n hon key, d?n v? trí sau m?t v? trí so v?i v? trí hi?n t?i c?a chúng
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Hàm chính
int main() {
    // Kh?i t?o m?ng s? nguyên b?t k?
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // G?i hàm s?p x?p chèn
    insertionSort(arr, n);

    printf("Mang sau khi sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

