#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[4][9];
	int j = 0;
	for (int i = 1; i <= 3; i++) {
		for (int k = 2; k < 6; k++) {
			for (j = 0; j <= 8; j++) {
				arr[i][j] = k * (j+1);
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		break;
	}
}