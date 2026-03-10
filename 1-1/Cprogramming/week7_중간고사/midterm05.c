#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score, count=0, end;
	

	while (1) {
		printf("점수 입력: ");
		scanf("%d", &score);
		if (score < 0) {
			printf("잘못된 입력입니다.\n");
			continue;
		}
		else if (score >= 60) {
			if (score>= 90) {
				printf("장학금 대상자입니다.\n");
				count++;
				if (count == 2) {
					goto end;
				}
			}
			else {
				printf("합격입니다.\n");
			}
			continue;
		}
		else {
			printf("불합격입니다.\n");
			continue;
		}
		
	}
end:
	printf("장학금 대상자가 2명 발생했습니다. 종료합니다.");
	
	return 0;
}