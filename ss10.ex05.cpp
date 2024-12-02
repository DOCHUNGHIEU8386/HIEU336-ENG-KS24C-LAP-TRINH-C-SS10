#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Ho�n d?i hai ph?n t?
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Thu?t to�n t�m ki?m nh? ph�n
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Ki?m tra n?u x n?m ? gi?a
        if (arr[mid] == x) {
            return mid;
        }
        // N?u x l?n hon, b? qua n?a b�n tr�i
        if (arr[mid] < x) {
            left = mid + 1;
        }
        // N?u x nh? hon, b? qua n?a b�n ph?i
        else {
            right = mid - 1;
        }
    }
    // N?u kh�ng t�m th?y
    return -1;
}

// H�m ch�nh d? ki?m tra chuong tr�nh
int main() {
    int n;
    printf("Nh?p v�o s? lu?ng ph?n t? trong m?ng: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nh?p v�o c�c ph?n t? c?a m?ng: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(arr, n);

    printf("M?ng sau khi s?p x?p: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int x;
    printf("Nh?p v�o ph?n t? c?n t�m: ");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n-1, x);

    if (result != -1) {
        printf("Ph?n t? du?c t�m th?y t?i v? tr� %d\n", result);
    } else {
        printf("Ph?n t? kh�ng c� trong m?ng\n");
    }

    return 0;
}

