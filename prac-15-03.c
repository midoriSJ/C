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

	printf("%d와 %d 사이 7의 배수의 개수는 %d개입니다!", x, x + 200, cnt);
}

int main() {
	int a;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	inputNum(a);
}