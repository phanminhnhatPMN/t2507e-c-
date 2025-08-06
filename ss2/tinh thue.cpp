#include <stdio.h>

int main() {
    int thuNhap;
    float thunhaptinhthue;
    float thue = 0;

    printf("nhap thu nhap (trieu VND/thang):\n");
    scanf("%d", &thuNhap);

    if (thuNhap <= 11) {
        printf("khong phai dong thue\n");
    } 
    else {
        thunhaptinhthue = thuNhap - 11;

        if (thunhaptinhthue <= 5) {
            thue = thunhaptinhthue * (5 / 100); 
        } 
        else {
            if (thunhaptinhthue <= 10) {
                thue = thunhaptinhthue * (10 / 100);
            } 
            else {
                if (thunhaptinhthue <= 18) {
                    thue = thunhaptinhthue * (15 / 100); 
                } 
                else {
                    if (thunhaptinhthue <= 32) {
                        thue = thunhaptinhthue * (20 / 100); 
                    } 
                    else {
                        if (thunhaptinhthue <= 52) {
                            thue = thunhaptinhthue * (25 / 100); 
                        } 
                        else {
                            if (thunhaptinhthue <= 80) {
                                thue = thunhaptinhthue * (30/ 100); 
                            } 
                            else {
                                thue = thunhaptinhthue * (35 / 100); 
                            }
                        }
                    }
                }
            }
        }

        printf("thunhaptinhthue: %f trieu\n", thunhaptinhthue);
        printf("tien thue phai nop: %f trieu\n", thue);
    }

}

