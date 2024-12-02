#include <stdio.h>

int main() {
    // Kh?i t?o m?ng và gán giá tr? cho m?ng
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // S? lu?ng ph?n t? trong m?ng

    // Yêu c?u ngu?i dùng nh?p vào ph?n t? b?t k?
    int x;
    printf("Nh?p vào ph?n t? c?n tìm: ");
    scanf("%d", &x);

    // Ki?m tra xem ph?n t? có t?n t?i trong m?ng không
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Ph?n t? %d du?c tìm th?y ? v? trí %d\n", x, i);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Ph?n t? %d không t?n t?i trong m?ng\n", x);
    }

    return 0;
}

