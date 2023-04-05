#include <stdio.h>
#include<stdlib.h>

int main() {
    double tf;
    for (double tc = 0; tc <= 100; tc++) {
        tf = tc * 9 / 5 + 32;
        printf("Градус по Цельсию:  %.1lf\t Градус по Фаренгейту: %.1lf\n", tc, tf);
    }

    return 0;
}
