#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//예제1

int main(void) {
	char sign;
	printf("신호등의 색깔 입력(R, G, Y): ");
	scanf("%c", &sign);

	switch (sign){
	case 'R': //case 'R' || 'r': 이건 True/False로 나오기때문에 x
	case 'r':
		printf("정지!\n");
		break;
	case 'G':
	case 'g':
		printf("진행!\n");
		break;
	case 'Y':
	case 'y':
		printf("주의!\n");
		break;
	default:
		printf("잘못 선택하셨습니다.\n");
	}
	return 0;


}
