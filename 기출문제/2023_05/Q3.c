#include <stdio.h>
char n[30];
char* getname() {
    printf("이름 입력 : ");
    gets(n);
    return n;
}

main() {
    char* n1 = getname();
    char* n2 = getname();
    char* n3 = getname();
    printf("%s\n", n1);
    printf("%s\n", n2);
    printf("%s\n", n3);
}

/*
풀이: char n[30]; 은 전역변수이므로
출력결과는
이름 입력 : 
이름 입력 : 
이름 입력 : 
박영희
박영희
박영희
*/