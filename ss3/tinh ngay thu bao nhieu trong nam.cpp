#include <stdio.h>



int main() {
    int a, b, c,ct;
    int ngayThu = 0;

    // Nh?p ngày/tháng/nam
    printf("Nhap a (ngay): ");
    scanf("%d", &a);
    printf("Nhap b (thang): ");
    scanf("%d", &b);
    printf("Nhap c (nam): ");
    scanf("%d", &c);

    
    if(b==2){
		if(c%400==0 || (c%4==0 && c%100 != 0)){
			ct = 29;
		}else{
			ct = 28;
		}
	}

    
    if (b > 1) ngayThu = ngayThu + 31;
    if (b > 2) ngayThu = ngayThu + ct;
    if (b > 3) ngayThu = ngayThu + 31;
    if (b > 4) ngayThu = ngayThu + 30;
    if (b > 5) ngayThu = ngayThu + 31;
    if (b > 6) ngayThu = ngayThu + 30;
    if (b > 7) ngayThu = ngayThu + 31;
    if (b > 8) ngayThu = ngayThu + 31;
    if (b > 9) ngayThu = ngayThu + 30;
    if (b > 10) ngayThu = ngayThu + 31;
    if (b > 11) ngayThu = ngayThu + 30;

    
    ngayThu = ngayThu + a;

    
    printf("=> Do la ngay thu %d trong nam %d.\n", ngayThu, c);

   
}

