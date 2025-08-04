#include <stdio.h>
int main(){
	int A;
	int B;
	printf("nhap A=\n");
	scanf("%d",&A);

	printf("nhap B=\n");
	scanf("%d",&B);
	
	printf("%dx + %d = 0\n",A,B);
	
	if(A == 0){
		if(B == 0){
			printf("vo so nghiem");
			
		}else{
			printf("vo nghiem");
			
		}
		}else{
			double x = -B / A;
			printf("nghiem la x = %.2lf\n", x);
		}
	}
