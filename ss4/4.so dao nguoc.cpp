#include <stdio.h>
int main (){
    int a;
	printf("nhap so=");
	scanf("%d", &a);
	
	int nd = 0;
	
	while(a!=0){
		int dv = a%10;
		nd = nd * 10 + dv;
		a /= 10;
	}
	printf("so dao nguoc: %d", nd);
}
