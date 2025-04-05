#include <stdio.h>
int factorial(int n);

main() {
    int (*pf)(int);
    pf = factorial;
    printf("%d", pf(3));
}

int factorial(int n) {
    if(n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

/*
풀이 pf(3)을 실행하면
3 * 2 * 1
답: 6

*/