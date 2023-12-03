#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[8];
	int odd[4];
	int even[4];
	for (int i = 0; i < 8; i++) {
		printf("NUM%d : ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 8; i++) {
		if (arr[i] % 2 == 0) {
			odd[i / 2] = arr[i];
		}
		else {
			even[i / 2] = arr[i];
		}
	}

	printf("È¦¼ö : ");
	for (int i = 0; i < 4; i++) {
		printf("%d ", even[i]);
	}
	printf("\n");
	printf("Â¦¼ö : ");
	for (int i = 0; i < 4; i++) {
		printf("%d ", odd[i]);
	}
}