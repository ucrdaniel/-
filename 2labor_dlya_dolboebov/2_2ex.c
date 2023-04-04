#include <stdio.h>

int main() {
    float a, b, result;

    printf("Введите значение a: ");
    scanf("%f", &a);

    printf("Введите значение b: ");
    scanf("%f", &b);

    if (a > 5 && b > 0) {
        result = 3 * a * a;
    } else {
        if (a > 0 && a <= 5 && b != 0) {
            result = a / b;
        } else {
            result = b + a - 1;
        }
    }

    printf("Результат вычисления функции f(a, b) равен: %f\n", result);

    return 0;
}