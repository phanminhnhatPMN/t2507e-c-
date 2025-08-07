#include <stdio.h>

int main() {
    int a, b;
    int kcA, kcB;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    
    if (a >= 10)
        kcA = a - 10;
    else
        kcA = 10 - a;

    if (b >= 10)
        kcB = b - 10;
    else
        kcB = 10 - b;


    if (kcA < kcB) {
        printf("%d gan 10 hon.\n", a);
    } else if (kcB < kcA) {
        printf("%d gan 10 hon.\n", b);
    } else {
        printf("Bang nhau.\n");
    }

    
}

