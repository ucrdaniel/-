#include <stdio.h>
#include <math.h>

int main() {
    double x, epsilon = 1e-3, term = 1, sum = 1, factorial = 1, f;
    int n = 1, max_iter = 1000;

    // Ввод значения x
    printf("Введите значение x (1 <= x <= 2): ");
    scanf("%lf", &x);

    // Проверка корректности введенного значения x
    if (x < 1 || x > 2) {
        printf("Ошибка: некорректное значение x\n");
        return 0;
    }

    // Вычисление суммы ряда с заданной точностью
    while (fabs(term) >= epsilon && n <= max_iter) {
        factorial *= n;
        term *= x / factorial;
        sum += term;
        n++;
    }

    // Вывод результата
    printf("Значение суммы ряда S: %.5lf\n", sum);

    // Вычисление значения функции f=e^x для проверки
    f = exp(x);

    // Вывод результата
    printf("Значение функции f=e^x: %.5lf\n", f);

    return 0;
}
