#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Nhap gia tri mua hang (VND): ");
    scanf("%d", &a);

    if (a >= 500000) {
        b = a - (a * 10 / 100); 
    } else if (a >= 200000) {
        b = a - (a * 5 / 100);  
    } else {
        b = a; 
    }

    printf("So tien phai tra: %d VND\n", b);

    return 0;
}

