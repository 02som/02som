3-1--------------------------------------------------
#include <stdio.h>
int main(void)
{
    char ch = 0;
    int num = 0;
    double x = 0;
    printf("char    의 크기: %d\n", sizeof(char));
    printf("short   의 크기: %d\n", sizeof(short));
    printf("int     의 크기: %d\n", sizeof(int));
    printf("long    의 크기: %d\n", sizeof(long));
    printf("long long    의 크기: %d\n", sizeof(long long));
    printf("float   의 크기: %d\n", sizeof(float));
    printf("double  의 크기: %d\n", sizeof(double));
    printf("long double  의 크기: %d\n", sizeof(long double));
    printf("ch변수  의 크기: %d\n", sizeof(ch));
    printf("num변수  의 크기: %d\n", sizeof(num));
    printf("x변수  의 크기: %d\n", sizeof(x));
}
