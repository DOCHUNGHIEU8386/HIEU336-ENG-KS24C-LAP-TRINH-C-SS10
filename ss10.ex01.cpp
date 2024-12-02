#include <stdio.h>

int main() {
    // Kh?i t?o m?ng v� g�n gi� tr? cho m?ng
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // S? lu?ng ph?n t? trong m?ng

    // Y�u c?u ngu?i d�ng nh?p v�o ph?n t? b?t k?
    int x;
    printf("Nh?p v�o ph?n t? c?n t�m: ");
    scanf("%d", &x);

    // Ki?m tra xem ph?n t? c� t?n t?i trong m?ng kh�ng
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Ph?n t? %d du?c t�m th?y ? v? tr� %d\n", x, i);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Ph?n t? %d kh�ng t?n t?i trong m?ng\n", x);
    }

    return 0;
}

