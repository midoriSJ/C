/*
두 수를 입력받아 아래 예와 같이 순서를 바꾸어 출력하는 프로그램을 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap1(int x, int y) {
	
	if (x > y) {
		int tmp;
		tmp = x;
		x = y;
		y = tmp;
	}

	printf("첫 번째 함수 실행중 x = %d, y = %d\n", x, y);
	int tmp;
	tmp = x;
	x = y;
	y = tmp;

	printf("첫 번째 함수 실행후 a = %d, b = %d\n", x, y);

	printf("두 번째 함수 실행중 x = %d, y = %d\n", y, x);
	tmp = x;
	x = y;
	y = tmp;
	printf("두 번째 함수 실행후 a = %d, b = %d\n", x, y);
}

int main() {
	int a, b;
	printf("두 수를 입력하세요. ");
	scanf("%d %d", &a, &b);
	swap1(a, b);
}