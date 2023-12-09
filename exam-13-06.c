# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	char str1[50] = "Michael ";
	char str2[50] = "Michael ";

	strcat(str1, "Bolton");
	printf("%s\n", str1);

	strncat(str2, "Jackson Five", 7);
	printf("%s\n", str2);

	printf("비교 결과 : %d\n", strcmp(str1, str2));
	printf("비교 결과 : %d", strncmp(str1, str2, 7));

	return 0;
}