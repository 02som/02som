#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, num, sum=0;
	printf("정수 하나를 입력하시오: ");
	scanf("%d", &num);
	printf("1부터 입력한 수까지의 모든 숫자 중에서 4의 배수는: ");
	for (i = 1; i <= num; i++) {
		if (i % 4 == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}