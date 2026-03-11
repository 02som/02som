#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define R_SIZE 5
#define C_SIZE 3

//예제 7번(report)

int main(void) {
	int i, j, h;
	int score[R_SIZE][C_SIZE] = { 0 };
	int sum[R_SIZE] = { 0 };
	int avg[C_SIZE] = { 0 };

	for (i = 0; i < R_SIZE; i++) {
		printf("%d번째 학생의 점수를 입력하시오>> ", i+1);
		for (j = 0; j < C_SIZE; j++) {
			scanf("%d", &score[i][j]);
			sum[i] += score[i][j];
			
		}
	}
	for (i = 0; i < C_SIZE; i++) {
		for (j = 0; j < R_SIZE; j++) {
			avg[i] += score[j][i];
		}
	}
	printf("======학생별 과목 점수 출력======\n");
	for (i = 0; i < R_SIZE; i++) {
		for (j = 0; j < C_SIZE; j++) {
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}
	printf("======학생별 평균 점수 출력======\n");
	for (i = 0; i < R_SIZE; i++) {
		printf("%d번째 학생의 평균: %.2lf \n", i+1, (double)sum[i] / C_SIZE);
	}
	printf("======과목별 평균 점수 출력======\n");
	for (i = 0; i < C_SIZE; i++) {
		printf("%d번째 과목의 평균: %.2lf\n", i + 1, (double)avg[i] / R_SIZE );
	}
	return 0;
}