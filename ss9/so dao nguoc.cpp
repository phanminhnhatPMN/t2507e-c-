#include <stdio.h>

int daonguoc(int n) {
    int sodao = 0;
    while (n != 0) {
        int dv = n % 10;        
        sodao = sodao * 10 + dv; 
        n /= 10;                
    }
    return sodao;
}

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    printf("So dao nguoc: %d\n", daonguoc(n));

   
}

