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

int boichungnhonhat(int a, int b) {
    return (a * b) / uocchunglonnhat(a, b);
}

int main() {
    int x, y;
    printf("Nhap hai so: ");
    scanf("%d %d", &x, &y);

    printf("BCNN = %d\n", boichungnhonhat(x, y));

    return 0;
}

