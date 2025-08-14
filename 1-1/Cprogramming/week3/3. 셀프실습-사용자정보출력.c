#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//사용자의 이름, 나이, 키(cm)를 입력받아 다음과 같은 형식으로 출력하는 프로그램을 작성하시오.
//이름 : 홍길동
//나이 : 20
//키 : 175.5 cm

int main(void) {
	char name[30]; //여기서 char name;으로 허면 한글자만 입력받으니까 옆에 꼭 [30]쓰기
	int age;
	float height;

	printf("사용자의 이름, 나이, 키를 입력하시오: ");
	scanf("%s %d %f", name, &age, &height); //name은 주소 역할을 하므로 & 필요x
  char name[30];는 문자열이므로 scanf에서 %s 서식 지정자를 사용해야 함.
	printf("이름: %s\n", name); //name은 주소 역할을 하므로 & 필요x
	printf("나이: %d\n", age);
	printf("키: %.2f\n", height);//소수점까지 나타내야 하니까 %f 사이에 .2 꼭넣기...
	return 0;
}
