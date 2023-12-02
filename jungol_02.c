/*
정수의 연산식을 입력받아 연산을 위한 함수를 호출하여 사칙연산의 결과를 출력하는 프로그램을 작성하시오. 

('/'의 경우는 정수 부분만 출력하고 사칙연산 이외의 연산 결과는 0으로 한다.)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculate(int x, char c, int y) {
	int res = 0;

	switch (c) {
		case '+':
			res = x + y;
			printf("%d %c %d = %d", x, c, y, res);
			break;
		case '-':
			res = x - y;
			printf("%d %c %d = %d", x, c, y, res);
			break;
		case '*':
			res = x * y;
			printf("%d %c %d = %d", x, c, y, res);
			break;
		case '/':
			res = round(x / y);
			printf("%d %c %d = %d", x, c, y, res);
			break;
		default:
			res = 0;
			break;
	}

}

int main() {
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	calculate(a, c, b);
}