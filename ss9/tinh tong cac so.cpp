#include <stdio.h>

int tongchuso(int n) {
    int tong = 0;
    while (n > 0) {
        tong += n % 10;  
        n /= 10;         
   
}
 return tong;
}

int main() {
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    
        printf("Tong cac chu so cua %d = %d\n", n, tongchuso(n));
    }

    


