#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);

    int x = a, y = b;

    while (x != y) {
        if (x > y) {
            x = x - y;
        } else {
            y = y - x;
        }
    }

    int UCLN = x;
    int BCNN = (a * b) / UCLN;

    printf("UCLN = %d\n", UCLN);
    printf("BCNN = %d\n", BCNN);

    
}

