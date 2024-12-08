#include <stdio.h>

int main(){
	printf("Moi nhap chieu dai ");
	int a;	scanf("%d", &a);
	printf("Moi nhap chieu rong ");
	int b;	scanf("%d", &b);
	int S=a*b, P=(a+b)*2;
	printf("Dien tich hinh chu nhat %d\nChu vi hinh chu nhat %d",S,P);
}
