# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

void between(int x, int y) {
	int total = 0;
	for (int i = x + 1; i < y; i++) {
		total += i;
	}
	printf("%d�� %d ������ ������ ������ : %d", x, y, total);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	between(a, b);
	return 0;
}