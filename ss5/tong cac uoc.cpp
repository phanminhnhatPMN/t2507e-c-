#include <stdio.h>

int main() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1;

    while (i <= n) {
        if (n % i == 0) {
            printf("%d ", i);
            sum = sum + i;
        }
        i++;
    }

    printf("\nTong cac uoc: %d", sum);

    
}

