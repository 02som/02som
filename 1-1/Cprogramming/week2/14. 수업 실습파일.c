/*수업시작하자마자 한거*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = ;
	printf("정수 입력>>: "\n) /*scanf 쓰기 전 printf문으로 지시문 사용*/
	scanf("%d", &num);
	printf("input num: %d\n", num)
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;            // 정수형 변수 선언

	printf("정수? ");   // 정수를 입력을 하도록 사용자에게 알려주기 위한 출력문
	scanf("%d", &num);  // num에 10진수로 정수 입력

	printf("10진수 %d는 16진수 %x입니다.\n", num, num);

	return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[20] = ;
	printf("이름 입력>>");
	char ch = 'A';
	printf("이름: %s,\n", name)
	return 0;
}


	
	/* 여러개 서식 지정자로 입력받기 */
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


/*여러개 서식지정자 이용*/
#define _CRT_SECURE_NO_WARNINGS     // scanf 관련 컴파일 에러를 무시하기 위한 문장
#include <stdio.h>

int main()
{
    char name[20];
    int age;
    char gender;

    printf("이름, 나이, 성별(M/F) 순으로 입력하세요.\n");
    scanf("%s %d %c", name, &age, &gender);    // 3개의 변수 입력

    printf("이름: %s\n", name);
    printf("나이: %d\n", age);
    printf("성별: %c\n", gender);

    return 0;
}


/*여러개 서식지정자 이용: 각각 입력받는 경우*/
#define _CRT_SECURE_NO_WARNINGS     // scanf 관련 컴파일 에러를 무시하기 위한 문장
#include <stdio.h>

int main()
{
    char name[20];
    int age;
    char gender;

    printf("이름을 입력하세요>>");
    scanf("%s", name);
    printf("나이를 입력하세요>>");
    scanf("%d", &age);
    printf("성별을 입력하세요>>");
    scanf(" %c", &gender);

    printf("이름: %s\n", name);
    printf("나이: %d\n", age);
    printf("성별: %c\n", gender);

    return 0;
}
