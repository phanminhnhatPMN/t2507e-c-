#include <stdio.h>

int main() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);

    int sum = 0;

    while (n != 0) {
        int sd = n % 10;   
        sum = sum + sd;    
        n = n / 10;           
    }

    printf("Tong cac chu so = %d", sum);

   
}

