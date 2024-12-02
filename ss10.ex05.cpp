#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Hoán d?i hai ph?n t?
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Thu?t toán tìm ki?m nh? phân
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Ki?m tra n?u x n?m ? gi?a
        if (arr[mid] == x) {
            return mid;
        }
        // N?u x l?n hon, b? qua n?a bên trái
        if (arr[mid] < x) {
            left = mid + 1;
        }
        // N?u x nh? hon, b? qua n?a bên ph?i
        else {
            right = mid - 1;
        }
    }
    // N?u không tìm th?y
    return -1;
}

// Hàm chính d? ki?m tra chuong trình
int main() {
    int n;
    printf("Nh?p vào s? lu?ng ph?n t? trong m?ng: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nh?p vào các ph?n t? c?a m?ng: \n");
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
    printf("Nh?p vào ph?n t? c?n tìm: ");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n-1, x);

    if (result != -1) {
        printf("Ph?n t? du?c tìm th?y t?i v? trí %d\n", result);
    } else {
        printf("Ph?n t? không có trong m?ng\n");
    }

    return 0;
}

