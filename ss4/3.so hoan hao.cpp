#include <stdio.h>
int main (){
	int n, i=1, tong = 0;
	printf("nhap n=");
	scanf("%d", &n);
	
	while(i <= n/2){
		if(n%1== 0){
			tong += i;
			
		}
	i++;
	
}
if (tong ==n && n > 0){
	printf("day la so hoan hao %d", n);
	
}else{
	printf("day khong phai la so hoan hao %d", n);
	
}
}

