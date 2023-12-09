# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	char ch[30];
	gets(ch);
	puts(ch);
	printf("이 문자열은 다음 줄에서 출력됩니다. \n");

	return 0;
}