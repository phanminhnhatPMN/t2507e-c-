#include <stdio.h>

int main() {
    int n;
    printf("nhap n = ");
    scanf("%d", &n);
        
        
    

    
    if (n <= 1) {
        printf("%d khong phai la so nguyen to\n", n);
      
    }
    if (n == 2) { 
        printf("%d la so nguyen to\n", n);
        
    }
    if (n % 2 == 0) { 
        printf("%d khong phai la so nguyen to\n", n);
       
    }

    int i = 3;
    
    while (i <= n / i) {
        if (n % i == 0) {
           
            printf("%d khong phai la so nguyen to\n", n);
            
        }
        i += 2; 
    }

   
    printf("%d la so nguyen to\n", n);
    return 0;
}

