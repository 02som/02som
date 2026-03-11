#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void draw_exercise_bar(int minutes[], int size) {
	for (int i = 0; i < size; i++) {
		int bar = minutes[i] / 10;
		printf("Day %d: (%dºÐ) ", i + 1, minutes[i]);
		for (int j = 0; j < bar; j++) {
			printf("-");
		}
		printf("\n");
	}
}
int main(void) {
	int minutes[] = { 40,100,80,30,90,60,50 };
	int size = sizeof(minutes) / sizeof(minutes[0]);
	draw_exercise_bar(minutes, size);
	return 0;
}