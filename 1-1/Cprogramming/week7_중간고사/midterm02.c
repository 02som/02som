#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;
	char ch;
	printf("1~10까지의 번호를 입력하시오: ");
	scanf("%d", &number);
	switch (number) {
	case 3:
		printf("1등 당첨\n");
		break;
	case 2:
	case 5:
		printf("2등 당첨\n");
		break;
	case 1:
	case 4:
	case 7:
		printf("3등 당첨\n");
		break;
	default:
		printf("다음을 기대하세요.\n");
	}
	return 0;

}