#include <stdio.h>
struct jsu {
    char nae[12];
    int os, db, hab, hhab;
}

int main() {
    struct jsu st[3] = { {"데이터1", 95, 88}    // st[0]
                       , {"데이터2", 84, 91}    // st[1]
                       , {"데이터3", 86, 75}    // st[2]
                       }
    struct jsu* p;
    p = &st[0]; 
    // p 는 st[0]을 가르킴 따라서 p == st[0] , p + 1 == st[1], p + 2 == st[2] 가 됨
    (p + 1)->hab = (p + 1)->os + (p + 2)->db;
    (p + 1)->hhab = (p + 1)->hab + p->os +p ->db;
    printf("%d", (p + 1) ->hab + (p +1)-> hhab);
}


/* 풀이
 (p + 1)->hab = (p + 1)->os + (p + 2)->db;
 즉 st[1].hab = st[1].os + st[2].db = 84 + 75 = 159

 (p + 1)->hhab = (p + 1)->hab + p->os +p ->db;
 즉 st[1].hhab = st[1].hab + st[0].os + st[0].db = 159 + 95 + 88 = 342

 st[1].hab + st[1].hhab = 159 + 342 = 501

 답: 501임

*/