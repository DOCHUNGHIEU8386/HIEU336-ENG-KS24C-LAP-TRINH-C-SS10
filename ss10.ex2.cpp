#include <stdio.h>

// H�m ho�n d?i gi� tr? c?a hai bi?n
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// H�m s?p x?p n?i b?t
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) { 
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// H�m in m?ng
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Kh?i t?o m?ng v� g�n gi� tr? cho m?ng
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("M?ng ban d?u: \n");
    printArray(arr, n);

    // S?p x?p m?ng s? d?ng thu?t to�n s?p x?p n?i b?t
    bubbleSort(arr, n);

    printf("M?ng sau khi s?p x?p: \n");
    printArray(arr, n);

    return 0;
}

