# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	char good[] = "Good!";
	char* bad = "Bad!";

	printf("%s %s", good, bad);

	good[0] = 'H';
	bad = "New Bad";

	return 0;
}