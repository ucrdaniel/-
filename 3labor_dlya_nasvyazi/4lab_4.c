#include <stdio.h>

int main() {
    double x;
    // Введите значение для X
    printf("Введите значение для X: ");
    scanf("%lf", &x);

    // Цикл while для ввода нескольких значений X
    while (x > 0) {
        double product = 1;
        // Цикл for для вычисления произведения (X - 2)(X - 4)(X - 6)...(X - 22)
        for (int i = 2; i <= 22; i += 2) {
            product *= (x - i);
        }

        // Вывод результата
        printf("Произведение для X = %.2lf равно: %.2lf\n", x, product);
        printf("Введите другое значение для X: ");
        scanf("%lf", &x);
    }

    return 0;
}