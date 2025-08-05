#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
    float  d, x, x1, x2;

    printf("Nhap a = ");
    scanf("%d", &a);

    printf("Nhap b = ");
    scanf("%d", &b);

    printf("Nhap c = ");
    scanf("%d", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            x = -(float)c / b;
            printf("x = %f", x);
        }
    } else {
        d = b * b - 4 * a * c;
        if (d < 0) {
            printf("Phuong trinh vo nghiem\n");
        } else {
        	if (d == 0){
			
            x = -(float)b / (2 * a);
            printf("x = %f", x);
        } else {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %f va x2 = %f", x1, x2);
        }
    }
}

}
   
