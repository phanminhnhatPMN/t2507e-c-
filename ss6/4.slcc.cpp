#include <stdio.h>
int main(){
	int player[5];
	for(int i=0;i<5;i++){
			printf("nhap gia tri cua phan tu %d: \n", i);
		scanf("%d", &player[i]);
	}
	int slcc = 0;
		for(int i=0;i<5;i++){
			 if (player[i] % 2 != 0) {
			 	
            slcc = player[i];
        }
		}
		printf("so le cuoi cung:%d", slcc);
	}
