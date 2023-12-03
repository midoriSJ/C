#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char bingo[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				bingo[i][j] = 'o';
			}
			else {
				bingo[i][j] = 'x';
			}
			printf("%c ", bingo[i][j]);
		}
		printf("\n");
	}
}