#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int count;
	printf("하루의 평균 걸음 수를 입력하시오: ");
	scanf("%d", &count);
	if (count >= 10000) {
		printf("건강관리 잘하고 있습니다!");
	}
	else {
		printf("운동량이 부족합니다.");
	}
	return 0;
}