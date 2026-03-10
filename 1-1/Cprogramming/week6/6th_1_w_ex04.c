#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int credit = 0;

	printf("연간 이용금액>> ");
	scanf("%d", &credit); 

	if (credit < 150000) {
		printf("회원님은 일반 고객입니다.");
	}
	else{
		if (credit >= 500000) {
			printf("회원님은 VVIP 고객입니다.");
		}
		else {
			printf("회원님은 VIP 고객입니다.");
		}
	}
	

	
	return 0;
}