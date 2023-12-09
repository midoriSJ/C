# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	char code[50];
	int total = 0;
	int tmp;
	printf("문자열 입력 : ");
	gets(code);

	for (int i = 0; i < strlen(code); i++) {
		if ((code[i] >= 48) && (code[i] <= 57)) {
			tmp = code[i];
			total += (tmp - 48);
		}
	}

	printf("숫자의 합 : %d", total);
}