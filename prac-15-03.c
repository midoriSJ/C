# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

void inputNum(int x) {
	int cnt = 0;
	for (int i = x; i < x + 200; i++) {
		if (i % 7 == 0) {
			cnt++;
		}
	}

	printf("%d�� %d ���� 7�� ����� ������ %d���Դϴ�!", x, x + 200, cnt);
}

int main() {
	int a;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	inputNum(a);
}