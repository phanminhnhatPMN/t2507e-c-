#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("nhap a=\n");
	scanf("%d", &a);
	
	printf("nhap b=\n");
	scanf("%d", &b);
	
	printf("nhap c=\n");
	scanf("%d", &c);
	
	if(a < 0 && b < 0 && c < 0 ){
		printf("canh tam giac khong the la so am");
	}else{
		if(a + b > c && a + c > b && b + c > a){
			printf("ba canh tren la tam giac");
		}else{
			printf("ba canh tren khong phai tam");
			
		}
		
	}
	
	
	
	
}
