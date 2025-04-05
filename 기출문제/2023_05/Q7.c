#include <stdio.h>
main() {
    int c = 0;
    for (int i = 1; i <= 2023; i++)
        if (i % 4 == 0)
            c++;
    printf("%d", c);
}
/*
풀이: 4의 약수가 몇개인지 계산
2023/4 = 505


답: 505
*/