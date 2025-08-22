#include <stdio.h>

int uocchunglonnhat(int a, int b){
	while (a != b){
		if(a > b){
			a = a - b;
			
		}else{
			b = b- a;
		}
	}
	return a;
}
int main(){
	int x, y;
	printf("nhap hai so: ");
	scanf("%d %d", &x,&y);
	
	printf("uoc chung lon nhat = %d ", uocchunglonnhat(x, y));
}

