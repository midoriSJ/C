# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

void calc(int x, int y) {
	printf("%d\n", x + y);
	printf("%d\n", x - y);
	printf("%d\n", x * y);
	printf("%d\n", x / y);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	calc(a, b);
}