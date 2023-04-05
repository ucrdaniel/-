#include <stdio.h>
#include<stdlib.h>

int main() {
    int n, f1 = 1, f2 = 1, f_sum;
    printf("Введите число для определения последующего числа Фибоначчи: ");
    scanf("%d", &n);
    if (n > 1) {
        while (f1 <= n)
        {
            f_sum = f1 + f2;
            f2 = f1;
            f1 = f_sum;
        }
        printf("Первое число Фибоначчи, большее чем %d это %d\n", n, f1);
    } else {
        printf("Введите число больше 1\n");
    }

    return 0;
}
