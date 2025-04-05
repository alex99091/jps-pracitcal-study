#include <stdio.h>
main() {
    int score[] = {86, 53, 95, 76, 61};
    char grade;
    char str[] = "Rank";
    for (int i = 0; i < 5; i++) {
        switch (score[i] / 10) {
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            default: grade = 'F';
        }
        if (grade != 'F') 
            printf("%d is %c %s\n", i + 1, grade, str);
    }
}

/* 풀이
1 is B Rank
3 is A Rank
4 is C Rank

case 문에서 break쓰는지 안쓰는지 확인하기
*/