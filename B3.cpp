#include <stdio.h>

int main(){
	printf("Moi nhap vao 2 so bat ki : ");
	int a,b;	scanf("%d%d", &a,&b);
	int tong = a+b,hieu= a-b,tich= a*b;
	float thuong = 1.0*a/b;
	printf("Tong %d\nHieu %d\nTich %d\nThuong %.2f",tong,hieu,tich,thuong);
}
