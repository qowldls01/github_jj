#include <stdio.h>

int main() {
    int p, q;

    // 진리표 헤더 출력
    printf("p\tq\tp 또는 q\n");
    printf("-----------------\n");

    // p와 q의 가능한 값(0은 거짓, 1은 참)
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            // p 또는 q의 결과 출력
            printf("%d\t%d\t%d\n", p, q, p || q);
        }
    }

    return 0;
}

