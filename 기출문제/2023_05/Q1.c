#include <stdio.h>
main() {
    int n[] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5; i++)
        printf("%d", () );
}

/* 풀이
출력결과가 43215 일때
()에 들어갈  문자는?
괄호의 식에 사용할 문자는 다음으로 제한: n, i, +, -, /, %, %, 0~9, (,), [,]

i = 0 일때 n[0] * 10^0
i = 1 일때 n[1] * 10^4
i = 2 일때 n[2] * 10^3
i = 3 일때 n[3] * 10^2
i = 4 일때 n[4] * 10^1 

이럴경우 위의 수식을 다 더하면 43215

==> 이걸 축약해서 써보자면

n[i] * 10^((5-i)%5)


따라서 ()안에 들어갈말은 n[i] * 10^((5-i)%5) 이 아닐까?

더하는게아니고 각각 출력이라
n[(i + 1) % 5]
이면 되겟네
*/