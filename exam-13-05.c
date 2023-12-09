# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50];

	printf("str1의 길이 : %d, str2의 길이 : %d\n", strlen(str1), strlen(str2));
	strcpy(str3, str1);

	strncpy(str2, str1, 5);
	printf("%s\n%s\n%s\n", str1, str2, str3);

	return 0;
}