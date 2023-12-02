/*
합과 차를 각각 리턴하는 함수를 작성한 후 두 정수를 입력받아 함수를 호출하여 두 수의 합과 차를 출력하는 프로그램을 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int x, int y) {
	int res = x + y;
	printf("두 수의 합 = %d\n", res);
}

void minus(int x, int y) {

	int res;

	if (x > y) {
		res = x - y;
	}
	else {
		res = y - x;
	}
	printf("두 수의 차 = %d\n", res);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	sum(a, b);
	minus(a, b);
}