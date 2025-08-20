#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int m = 0;
    for (int i = 0; i < n; i++) {
        int trung = 0;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                trung = 1; 
                break;
            }
        }
        if (!trung) {
            b[m++] = a[i]; 
        }
    }

   
    printf("Mang sau khi loai bo trung lap: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }

}

