#include <stdio.h>

int main(){
	const float Pi = 3.14;
	printf("moi nhap vao ban kinh hinh tron ");
	float r;	scanf("%f", &r);
	float C = 2*Pi*r,	S = r*r*Pi;
	printf("Chu vi hinh tron %.2f\nDien tich hinh tron %.2f",C, S);
}
