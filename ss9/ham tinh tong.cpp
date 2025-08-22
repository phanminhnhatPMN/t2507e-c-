#include<stdio.h>

int tongchuso(int a){
	int tong = 0;

	while(a > 0){
		tong += a % 10;
		a  /= 10;
	}
	return tong;
}
int main(){
	int a;
	printf("nhap 1 so nguyen\n");
	scanf("%d", &a);
	
   printf("tong cac so = %d\n", tongchuso(a));
   
}


