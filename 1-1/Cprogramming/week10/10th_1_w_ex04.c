#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
// 실습3 정수와 배수의개수 배갭ㄴ수로전달, 정수배수출력
//정수로 0보다작거나같은값: 프로그램 종료

int repeat(int x, int y) {
	for (int i = 1; i <= y; i++) {
		printf("%d ", x * i);
	}
}


int main(void) {
	int x=0, y=0, end;
	while (1) {
		printf("\n정수>> ");
		scanf("%d %d", &x, &y);
		repeat(x,y);
		if (x <= 0 || y <= 0) {
			break;
		}
	}

	printf("\n프로그램이 종료됩니다.");
}