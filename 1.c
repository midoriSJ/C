#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {

	srand(time(NULL));

	int num1 = (rand() % 100);
	int num2 = (rand() % 100 + 1);
	int num3 = rand();

	printf("%d %d %d", num1, num2, num3);
}