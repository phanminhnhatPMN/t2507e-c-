#include <stdio.h>

int main() {
    int sotien;

    printf("nhap so tien can rut (boi so cua 10000):\n");
    scanf("%d", &sotien);

    if (sotien % 10000 != 0) {
        printf("so tien phai la boi so cua 10000");
    } 
    else {
        int to500 = sotien / 500000;
        sotien = sotien % 500000;

        int to200 = sotien / 200000;
        sotien = sotien % 200000;

        int to100 = sotien / 100000;
        sotien = sotien % 100000;

        int to50 = sotien / 50000;
        sotien = sotien % 50000;

        int to20 = sotien / 20000;
        sotien = sotien % 20000;

        int to10 = sotien / 10000;

        printf("so to 500k: %d\n", to500);
        printf("so to 200k: %d\n", to200);
        printf("so to 100k: %d\n", to100);
        printf("so to 50k: %d\n", to50);
        printf("so to 20k: %d\n", to20);
        printf("so to 10k: %d\n", to10);
    }

    
}

