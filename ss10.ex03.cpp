#include <stdio.h>

// H�m s?p x?p ch�n
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Di chuy?n c�c ph?n t? c?a arr[0..i-1], l?n hon key, d?n v? tr� sau m?t v? tr� so v?i v? tr� hi?n t?i c?a ch�ng
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// H�m ch�nh
int main() {
    // Kh?i t?o m?ng s? nguy�n b?t k?
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // G?i h�m s?p x?p ch�n
    insertionSort(arr, n);

    printf("Mang sau khi sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

