#include <stdio.h>
main() {
    int a = 50;
    int *b = &a;
    *b = *b + 20;
    printf("%d, %d\n", a, *b);
    char *s;
    s = "gilbut";
    for (int i = 0; i < 6; i += 2) {
        printf("%c ", s[i]);
        printf("%c ", *(s + i));
        printf("%s\n", s + i);
    }
}

/*
70
70
g, g, gilbut
l, l, lbut
u, u, ut


*/

test() {
    int a = 50;
    int *b = &a;
    
    printf("%p\n", &a);  // a의 주소
    printf("%p\n", b);   // b도 같은 주소
    printf("%d\n", *b);  // a의 값 (50)
    
    *b = *b + 20;        // a = a + 20
    printf("%d\n", a);   // 70
}

/*

🎯 핵심 정리표
표현	의미
a	변수 a의 값
&a	변수 a의 주소
p	주소를 담는 포인터 변수
*p	p가 가리키는 주소의 값 (즉, a)

*/