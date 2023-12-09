# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int second(int x) {
	int hour = x / 3600;
	int minute = (x - (3600*hour)) / 60;
	int sec = (x - (3600 * hour) - (60 * minute));

	printf("%d시간/%d분/%d초", hour, minute, sec);
}

int main() {
	int sec;
	printf("몇 초 : ");
	scanf("%d", &sec);
	second(sec);

}