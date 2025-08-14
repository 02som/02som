#include <stdio.h> 
int main(void)
{
	printf("20250298 이소민\n"); 
	printf("Good Job! \n");
	return 0;
}
//if 한 프로젝트 내 1st_m_ex01 주석 미처리 후 실행하는 경우 에러발생
//한 프로젝트 내 main()함수 1개만 사용

#include <stdio.h> 
int main(void)
{
	int sc = 89;
	char score = 'B';
	printf("c언어 점수는 %d점이고, 학점은 %c입니다.\n",sc,score);
	//순서헷갈리면 논리에러, 아스키코드값 출력(없으면 에러)
	return 0;
}
