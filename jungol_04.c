/*
�հ� ���� ���� �����ϴ� �Լ��� �ۼ��� �� �� ������ �Է¹޾� �Լ��� ȣ���Ͽ� �� ���� �հ� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int x, int y) {
	int res = x + y;
	printf("�� ���� �� = %d\n", res);
}

void minus(int x, int y) {

	int res;

	if (x > y) {
		res = x - y;
	}
	else {
		res = y - x;
	}
	printf("�� ���� �� = %d\n", res);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	sum(a, b);
	minus(a, b);
}