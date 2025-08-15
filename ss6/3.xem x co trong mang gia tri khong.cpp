#include <stdio.h>
int main(){
	int player[7];
	for(int i=0;i<7;i++){
			printf("nhap gia tri cua phan tu %d: \n", i);
		scanf("%d", &player[i]);
	}
	int x;
	printf("nhap gia tri can tim: ");
	scanf("d", &x);
	
	int tim = 0;
	for(int i=0;i<7;i++){
		if(player[i] == x){
			tim = 1;
			break;
			printf("gia tri %d co trong mang");
		}else{
			printf("gia tri %d khong co trong mang");
		}
	}
	
		
	}
