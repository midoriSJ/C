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
	printf("Ű�� cm ������ �Է��ϼ��� : ");
	scanf("%d", &h);
	res = centiTometer(h);
	printf("��� : %.2fm", res);
}