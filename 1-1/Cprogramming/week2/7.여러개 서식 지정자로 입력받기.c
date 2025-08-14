#define _CRT_SECURE_NO_WARNINGS     // scanf 관련 컴파일 에러를 무시하기 위한 문장
#include <stdio.h>

int main()
{
    int age;                // 나이를 저장하기 위한 int형 변수
	float height;	        // 키를 저장하기 위한 float형 변수
	float weight;	        // 몸무게를 저장하기 위한 float형 변수

    printf("나이, 키, 몸무게를 입력하세요: ");
    scanf("%d %f %f", &age, &height, &weight);      // 3개의 변수에 순서대로 입력

    printf("나이  : %5d\n", age);		            // 폭을 5칸에 맞춰 출력
    printf("키    : %5.1f\n", height);  
    printf("몸무게: %5.1f\n", weight);
}
