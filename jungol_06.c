/*
�� ���� �Է¹޾� �Ʒ� ���� ���� ������ �ٲپ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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

	printf("ù ��° �Լ� ������ x = %d, y = %d\n", x, y);
	int tmp;
	tmp = x;
	x = y;
	y = tmp;

	printf("ù ��° �Լ� ������ a = %d, b = %d\n", x, y);

	printf("�� ��° �Լ� ������ x = %d, y = %d\n", y, x);
	tmp = x;
	x = y;
	y = tmp;
	printf("�� ��° �Լ� ������ a = %d, b = %d\n", x, y);
}

int main() {
	int a, b;
	printf("�� ���� �Է��ϼ���. ");
	scanf("%d %d", &a, &b);
	swap1(a, b);
}