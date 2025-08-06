#include <stdio.h>

int main() {
    int sotien;
    int to500 =0, to200 =0, to100 =0, to50 =0, to20 =0, to10 =0;

    printf("Nhap so tien can rut (boi so cua 10.000): ");
    scanf("%d", &sotien);

    if (sotien % 10000 != 0) {
        printf("So tien phai la boi so cua 10.000\n");
    } else {
        if (sotien >= 500000) {
            to500 = sotien / 500000;
            sotien = sotien % 500000;
        }

        if (sotien >= 200000) {
            to200 = sotien / 200000;
            sotien = sotien % 200000;
        }

        if (sotien >= 100000) {
            to100 = sotien / 100000;
            sotien = sotien % 100000;
        }

        if (sotien >= 50000) {
            to50 = sotien / 50000;
            sotien = sotien % 50000;
        }

        if (sotien >= 20000) {
            to20 = sotien / 20000;
            sotien = sotien % 20000;
        }

        if (sotien >= 10000) {
            to10 = sotien / 10000;
            sotien = sotien % 10000;
        }

        printf("So to 500k: %d\n", to500);
        printf("So to 200k: %d\n", to200);
        printf("So to 100k: %d\n", to100);
        printf("So to 50k: %d\n", to50);
        printf("So to 20k: %d\n", to20);
        printf("So to 10k: %d\n", to10);
    }

    
}
