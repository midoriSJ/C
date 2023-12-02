/*
두 정수를 입력받아 합과 곱을 출력하는 프로그램을 구조화하여 작성하시오.​
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int x, int y) {
	int res = x + y;
	printf("합 : %d", res);
}

void mul(int x, int y) {
	int res = x * y;
	printf("곱 : %d", res);
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	sum(x, y);
	printf("\n");
	mul(x, y);
}