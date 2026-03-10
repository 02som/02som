//실습 3. 월을 입력받아 몇 분기인지를 출력하는 프로그램을 switch~case문을 이용해 작성하시오.

//[힌트] 1~3월(1사분기), 4~6월(2사분기), 7~9월(3사분기), 10~12월(4사분기)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int month = 0;

	printf("몇 월인가요?:");
	scanf("%d", &month); //개행문자쓸경우 아예[ 값출력x

	switch (month) {
	case 1:
	case 2:
	case 3:
		printf("1분기");
		break;
	case 4:
	case 5:
	case 6:
		printf("2분기");
		break;
	case 7:
	case 8:
	case 9:
		printf("3분기");
		break;
	case 10:
	case 11:
	case 12:
		printf("4분기");
		break;
	default:
		printf("해당 월은 존재하지 않습니다.");
		break;
	}
	return 0;
}