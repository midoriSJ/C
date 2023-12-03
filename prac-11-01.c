#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* ptr = arr;
	int i = 0;
	while (i < 5) {
		printf("%d ", ptr[i]);
		i++;
	}
}