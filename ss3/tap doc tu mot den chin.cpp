#include <stdio.h>

int main() {
    int a;

    printf("Nhap so (0_9): ");
    scanf("%d", &a);

    if (a < 0 || a > 9) {
        printf("Khong phai so hop le.\n");
    } else {
        if (a == 0) printf("Khong\n");
        else if (a == 1) printf("Mot\n");
        else if (a == 2) printf("Hai\n");
        else if (a == 3) printf("Ba\n");
        else if (a == 4) printf("Bon\n");
        else if (a == 5) printf("Nam\n");
        else if (a == 6) printf("Sau\n");
        else if (a == 7) printf("Bay\n");
        else if (a == 8) printf("Tam\n");
        else if (a == 9) printf("Chin\n");
    }

    //end
}

