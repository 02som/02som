#include <stdio.h>

int main(void)
{
    printf("sizeof(\'x\') = %d\n", sizeof('x'));    
    printf("sizeof(0xa) = %d\n", sizeof(0xa));      
    printf("sizeof(65536U) = %d\n", sizeof(65536U));
    printf("sizeof(0.25F) = %d\n", sizeof(0.25F));  
    printf("sizeof(.5) = %d\n", sizeof(.5));        
    printf("sizeof(\"x\") = %d\n", sizeof("x"));    
}

==============================
<결과>
sizeof('x') = 4
sizeof(0xa) = 4
sizeof(65536U) = 4
sizeof(0.25F) = 4
sizeof(.5) = 8 (걍 '실수'라 8바이트로 출력됨)
sizeof("x") = 2

//리터럴 상수
#include <stdio.h>

int main(void)
{
    printf("sizeof(\'a\') = %d\n", sizeof('a'));        // 4바이트
    printf("sizeof(12345) = %d\n", sizeof(12345));
    printf("sizeof(12345U) = %d\n", sizeof(12345U));
    printf("sizeof(12345L) = %d\n", sizeof(12345L));

    printf("sizeof(12.34F) = %d\n", sizeof(12.34F));
    printf("sizeof(12.34567) = %d\n", sizeof(12.34567));
    printf("sizeof(1.234e-5) = %d\n", sizeof(1.234e-5));

    printf("sizeof(\"abcde\") = %d\n", sizeof("abcde"));

    return 0;
}
==================================
<결과>
sizeof('a') = 4
sizeof(12345) = 4
sizeof(12345U) = 4
sizeof(12345L) = 4
sizeof(12.34F) = 4
sizeof(12.34567) = 8
sizeof(1.234e-5) = 8
sizeof("abcde") = 6
