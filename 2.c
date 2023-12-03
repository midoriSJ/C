#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <string.h>
#define LOTTO_MAX 45
#define LOTTO_COUNT 6

int main() {
	srand(time(NULL));

	int lotto[7];

	for (int i = 0; i < LOTTO_COUNT; i++) {
		lotto[i] = rand() % LOTTO_MAX + 1;
		for (int j = 0; j < i; j++) {
			if (lotto[j] == lotto[i]) {
				lotto[j] = rand() % (rand() % lotto[j] + 1) + 1;
			}
			lotto[j] = rand() % 45 + 1;
		}
		printf("%d ", lotto[i]);
	}
	lotto[strlen(lotto)] = rand() % 45 + 1;
	for (int i = 0; i < LOTTO_COUNT; i++) {
		if (lotto[strlen(lotto)] == lotto[i]) {
			lotto[strlen(lotto)] = rand() % (rand() % LOTTO_MAX + 1) + 1;
			while (lotto[strlen(lotto)] != lotto[i]) {
				lotto[strlen(lotto)] = rand() % (rand() % lotto[strlen(lotto)] + 1) + 1;
			}
			break;
		}
		lotto[strlen(lotto)] = rand() % 45 + 1;
	}
	printf("º¸³Ê½º : %d", lotto[strlen(lotto)]);
}