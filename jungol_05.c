/*
����� ���ϴ� �Լ��� �ۼ��� �� �������� ������ �Է¹޾� ����� ���Ͽ� �Ҽ� ��°�ڸ����� �ݿø��Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void avg(int x, int y, int z) {
	float res = (x + y + z) / 3;
	printf("��� : %.2f", round(res));
}

int main() {
	int a, b, c;
	printf("�� ������ ������ �Է��ϼ��� >>> ");
	scanf("%d %d %d", &a, &b, &c);
	avg(a, b, c);
}