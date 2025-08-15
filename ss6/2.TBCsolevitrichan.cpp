#include <stdio.h>
int main(){
	int player[5];
	for(int i=0;i<5;i++){
			printf("nhap gia tri cua phan tu %d: \n", i);
		scanf("%d", &player[i]);
	}
	int tong = 0, dem = 0;
    for (int i = 0; i < 5; i++) {
        if (i%2==0 && player[i] % 2 != 0) {
            tong += player[i];
            dem++;
        }
		
	}
	float TBC = tong/dem;
	printf("tong cac so le:%d \n", tong);
	printf("tbc cac so le:%f\n", TBC);	
}
