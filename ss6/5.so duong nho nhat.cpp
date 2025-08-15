#include <stdio.h>
int main(){
	int player[5];
	for(int i=0;i<5;i++){
			printf("nhap gia tri cua phan tu %d: \n", i);
		scanf("%d", &player[i]);
	}
	int min = player[0];
		for(int i=0;i<5;i++){
			if(player[i]>0 &&player[i]<min ){
				min=player[i];
			}
			
			
		}
		printf("so duong nho nhat:%d \n", min);
	}
	
