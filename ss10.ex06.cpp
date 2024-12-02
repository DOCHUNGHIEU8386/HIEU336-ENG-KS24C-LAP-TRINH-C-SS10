#include <stdio.h>

// H�m t�m ki?m tuy?n t�nh tr? v? c�c v? tr� t�m du?c
void linearSearch(int arr[], int n, int x, int positions[], int *posCount) {
    *posCount = 0;  // �?m s? lu?ng v? tr� t�m th?y
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[*posCount] = i;
            (*posCount)++;
        }
    }
}

int main() {
    int n;
    printf("Nh?p v�o s? lu?ng ph?n t? trong m?ng: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nh?p v�o c�c ph?n t? c?a m?ng: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nh?p v�o ph?n t? c?n t�m: ");
    scanf("%d", &x);

    int positions[n];  // M?ng luu c�c v? tr� t�m th?y
    int posCount;      // S? lu?ng v? tr� t�m th?y

    linearSearch(arr, n, x, positions, &posCount);

    if (posCount > 0) {
        printf("Ph?n t? %d du?c t�m th?y t?i c�c v? tr�: ", x);
        for (int i = 0; i < posCount; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Ph?n t? %d kh�ng c� trong m?ng\n", x);
    }

    return 0;
}

