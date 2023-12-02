/*
사용자 정의 함수를 만들어 선을 그리는 프로그램을 작성하시오.
출력 : ==============================
	   line 함수를 호출하였습니다.
	   line 함수를 다시 호출합니다. 
	   ==============================
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line() {
	printf("==============================\n");
}

int main() {
	line();
	printf("line 함수를 호출하였습니다.\n");
	printf("line 함수를 다시 호출합니다\n");
	line();
}