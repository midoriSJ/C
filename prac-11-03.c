#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int* ptr = arr;
	int tmp[8];
	int i = 0;
	int j = 0;

	while (i < 8) {
		tmp[i] = ptr[7 - i];
		i++;
	}
	
	while (j < 8) {
		printf("%d ", tmp[j]);
		j++;
	}
	
}