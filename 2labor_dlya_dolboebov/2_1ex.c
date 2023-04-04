#include <stdio.h>

int main() {
    float a, b, result;

    printf("Введите значение a: ");
    scanf("%f", &a);

    printf("Введите значение b: ");
    scanf("%f", &b);

    result = (a > 5 && b > 0) ? (3 * a * a) : ((a > 0 && a <= 5 && b != 0) ? (a / b) : (b + a - 1));

    printf("Результат вычисления функции f(a, b) равен: %f\n", result);

    return 0;
}
