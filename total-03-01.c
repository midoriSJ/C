#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[5];
	int max, min;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("NUM%d : ", i+1);
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i <= 4; i++) {
		if (arr[i - 1] > arr[i]) {
			max = arr[i - 1];
			if (max < arr[4]) {
				max = arr[4];
			}
		}
	}

	for (int i = 1; i <= 4; i++) {
		if (arr[i - 1] > arr[i]) {
			min = arr[i];
			if (min > arr[4]) {
				min = arr[4];
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}

	printf("�ִ� : %d\n", max);
	printf("�ּڰ� : %d\n", min);
	printf("���հ� : %d\n", sum);
}