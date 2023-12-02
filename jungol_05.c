/*
평균을 구하는 함수를 작성한 후 세과목의 점수를 입력받아 평균을 구하여 소수 둘째자리까지 반올림하여 출력하는 프로그램을 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void avg(int x, int y, int z) {
	float res = (x + y + z) / 3;
	printf("평균 : %.2f", round(res));
}

int main() {
	int a, b, c;
	printf("세 과목의 점수를 입력하세요 >>> ");
	scanf("%d %d %d", &a, &b, &c);
	avg(a, b, c);
}