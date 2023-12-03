#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int* ptr = arr;
	int i = 0;
	int sum = 0;

	while (i < 8) {
		if (ptr[i] % 2 != 0) {
			sum += ptr[i];
		}
		i++;
	}

	printf("배열 요소 중 홀수의 총합은 : %d", sum);
}