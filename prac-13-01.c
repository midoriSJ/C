# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	char ch1[50];
	char ch2[50];
	char res;

	gets(ch1);
	gets(ch2);

	res = strcmp(ch1, ch2);

	if (res == 0) {
		printf("같습니다.");
	}
	else {
		printf("같지 않습니다.");
	}
	
}