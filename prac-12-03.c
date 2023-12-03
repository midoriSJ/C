#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[3][2] = { {6, 7}, {8, 9}, {3, 4} };
	printf("%d %d \n", arr[1][0], arr[0][1]);
	printf("%d %d \n", *(arr[2]+1),*(arr[1]+1));
	printf("%d %d \n", (*(arr+2))[0], (*(arr+0))[1]);
	printf("%d %d \n", **arr, *(*(arr+0)+0));
}