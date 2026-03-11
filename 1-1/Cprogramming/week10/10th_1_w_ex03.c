#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
/*
//ex2. 사용자로부터 정수값을 입력받아 반환하는 함수
// 함수 반환형 : int, 함수명 : get_integer, 매개변수 없음]
//매개변수 없는데 리턴잇음 입력받은값이 리턴이됨

int get_integer(void) {
	int num = 0;
	printf("정수값을 입력하세요: ");
	scanf("%d", &num);
	return num;
} 

int main(void) {
	int num=get_integer();
	printf("%d", num);
}

//홀짝구분

int odd_even(int num) {
	if (num % 2 == 0) {
		return 0;  //짝수
	}
	else {
		return 1;  //홀수
	}
}

int main(void) {
	int result = 0, num = 0;
	printf("정수값을 입력하세요: ");
	scanf("%d", &num);
	result = odd_even(num);

	if (result == 0)
		printf("짝수입니다.\n");
	else
		printf("홀수입니다.\n");

	return 0;
}
*/