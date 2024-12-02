#include <stdio.h>

// Hàm tìm ki?m tuy?n tính tr? v? các v? trí tìm du?c
void linearSearch(int arr[], int n, int x, int positions[], int *posCount) {
    *posCount = 0;  // Ð?m s? lu?ng v? trí tìm th?y
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[*posCount] = i;
            (*posCount)++;
        }
    }
}

int main() {
    int n;
    printf("Nh?p vào s? lu?ng ph?n t? trong m?ng: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nh?p vào các ph?n t? c?a m?ng: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nh?p vào ph?n t? c?n tìm: ");
    scanf("%d", &x);

    int positions[n];  // M?ng luu các v? trí tìm th?y
    int posCount;      // S? lu?ng v? trí tìm th?y

    linearSearch(arr, n, x, positions, &posCount);

    if (posCount > 0) {
        printf("Ph?n t? %d du?c tìm th?y t?i các v? trí: ", x);
        for (int i = 0; i < posCount; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Ph?n t? %d không có trong m?ng\n", x);
    }

    return 0;
}

