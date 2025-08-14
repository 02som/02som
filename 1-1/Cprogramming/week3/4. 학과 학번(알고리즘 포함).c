/*
- 알고리즘
    1. 변수선언
    2. printf문으로 입력지시문
    3. scanf 변수입력
    4. printf로 서식에 맞게 출력
    */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char dept[100];
    int s_id;
    char name[20] = "홍길동";

    printf("학과를 입력하세요: ");
    scanf("%s", dept);
    printf("학번을 입력하세요: ");
    scanf("%d", &s_id);

    printf("저는 %s학과에 재학중인 %d학번 %s입니다.", dept, s_id, name);
    return 0;
}

/////////////////////

#수업시간에 제대로 쓴 버전
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char dept[100]; /*문자배열*/
    int s_id;
    char name[20];

    printf("학과 학번 이름 입력: ");
    scanf("%s %d %s", dept, &s_id, name); /*변수 입력받을 때 값 배달: 주소연산자 붙이기(예외: 캐릭터형은 써야되지만 배열형은 안씀)*/
    printf("저는 %s학과에 재학중인 %d학번 %s입니다.", dept, s_id, name); /*대응되는 변수이름 그대로 쓰기*/
    return 0;
}
