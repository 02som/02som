#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 3

//학생정보를저장하는구조체정의... 구조체에는 이름학번점수저장,
// 3명학생정보저장하도록 구조체배열생성, 구조체포인터배열을 매개변수로하여 
// 사용자로부터 값을받아 초기화하는함수와 학생들의 점수평균을 계산하는 함수작성하고 테스트


struct Student {
	char name[10];
	int id;
	int score;
};
void initialize_students(struct Student students[], int size) {
	for (int i = 0; i < SIZE; i++) {
		printf("이름, 학번, 점수 입력: ");
		scanf("%s %d %d", students[i].name, &students[i].id, &students[i].score);
	}
}
double calculate_average(struct Student students[], int size) {
	int sum=0;
	for (int i = 0; i < SIZE; i++) {
		sum += students[i].score;
	}
	return (double)sum / size;
}

int main(void) {
	struct Student students[SIZE];

	//사용자로부터 학생 정보 입력 받아 초기화하는 함수 호출
	initialize_students(students, SIZE);

	//평균 계산하는 함수 호출
	double avg = calculate_average(students, SIZE);
	printf("학생 평균 점수: %.2lf\n", avg);
	return 0;
}




/*／
*  배운걸 열심히 떠올려서 써보려고 했는데  ａｓｄｆｓａ 타자는 이상하게 나오고
하는 수 없이 포인터배열제외 실행결과는 같이 나오는 코드로（위） 제출합니다。。。 ＼（ㅠㅠ）／
* １학기동안 Ｃ언어 가르쳐주셔서 감사했습니다¡¡ 수고하셨습니다
* 
struct Student {
	char name[10];
	int id;
	int score;
};

void initialize_students(struct Student* students[], int size) {
	for (int i = 0; i < SIZE; i++) {
		printf("이름, 학번, 점수 입력: ");
		scanf(" %s %d %d\n", students[i]->name, &students[i]->id, &students[i]->score);
	}
}
double calculate_average(struct Student* students[], int size) {
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += students[i]->score;
	}
	return (double)sum / size;
}

int main(void) {
	struct Student students[SIZE];
	struct Student* s_ptrs[SIZE] = { 0 };


	//사용자로부터 학생 정보 입력 받아 초기화하는 함수 호출
	initialize_students(&s_ptrs, SIZE);
	for (int i = 0; i < SIZE; i++) {
		students[i] = *s_ptrs[i];
	}

	//평균 계산하는 함수 호출
	double avg = calculate_average(&s_ptrs, SIZE);
	printf("학생 평균 점수: %.2lf\n", avg);
	return 0;
}*/