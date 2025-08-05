#include <stdio.h>
int main(){
	int a;
	float tien;
	 printf("Nhap so kWh tieu thu: ");
	scanf("%d", &a);
	
	if(a < 0){
		printf("so kwh khong hop le");
		
	}else{
		
		if(a < 50){
			tien = a * 1678;
		printf("tien dien = %f dong", tien);
		}else{
			if(a < 100){
			tien = a * 1734;
			printf("tien dien = %f dong", tien);	
			}else{
				if(a < 200){
			tien = a * 2014;
			printf("tien dien = %f dong", tien);
			}
			
			
		}
		
		}
		
}
}


	
