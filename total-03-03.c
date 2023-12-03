#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char ch[4];

	scanf("%s", ch);

	for (int i = 0; i < 4; i++) {
		for (int j = 4; j > i; j--) {
			printf("%c ", ch[(strlen(ch) - j)]);
		}
		printf("\n");
	}

	return 0;
}