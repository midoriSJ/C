# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	char ch1[50];
	char ch2[50];

	gets(ch1);
	gets(ch2);

	if (strlen(ch1) < strlen(ch2)) {
		printf("%s\n", ch2);
		printf("%s\n", ch1);
	}
	else {
		printf("%s\n", ch1);
		printf("%s\n", ch2);
	}
}