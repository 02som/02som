#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct contact {
    char name[20]; 
    char number[20]; 
    int bell; 
};

int main(void)
{
    struct contact s1;

    // 입력
    printf("이름 : ");
    scanf("%s", s1.name);

    printf("전화번호 : ");
    scanf("%s", s1.number);

    printf("벨소리 : ");
    scanf("%d", &s1.bell);

    // 출력
    printf("이름 : %s\n", s1.name);
    printf("전화번호 : %s\n", s1.number);
    printf("벨소리 : %d\n", s1.bell);

    return 0;
}
