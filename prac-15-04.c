# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

double centiTometer(int x) {
	double res = (double) x / 100;
	return res;
}

int main() {
	int h;
	double res;
	printf("키를 cm 단위로 입력하세요 : ");
	scanf("%d", &h);
	res = centiTometer(h);
	printf("결과 : %.2fm", res);
}