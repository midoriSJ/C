# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	char code[50];
	int total = 0;
	int tmp;
	printf("���ڿ� �Է� : ");
	gets(code);

	for (int i = 0; i < strlen(code); i++) {
		if ((code[i] >= 48) && (code[i] <= 57)) {
			tmp = code[i];
			total += (tmp - 48);
		}
	}

	printf("������ �� : %d", total);
}