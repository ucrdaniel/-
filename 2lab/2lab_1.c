#include <stdio.h>
#include <math.h>

int main() {
    double a, b, D, sin_a, ln_b, tg_a_b;

    // Ввод значений переменных a и b
    printf("Введите значение a и b через пробел: ");
    scanf("%lf %lf", &a, &b);

    // Вычисление sin(a), |ln(b)| и tg(a/b)
    sin_a = sin(a);
    ln_b = log(fabs(b));
    tg_a_b = tan(a/b);

    // Проверка на отрицательное значение подкоренного выражения
    if (sin_a * sin_a - 12 * ln_b < 0) {
        printf("Ошибка: извлечение корня из отрицательного числа\n");
        return 1;
    }

    // Вычисление значения D по формуле
    D = (-sin_a + sqrt(sin_a * sin_a - 12 * ln_b)) / ((b - a) * (b - a)) * exp(tg_a_b);

    // Вывод значения D на экран
    printf("D = %lf\n", D);

    return 0;
}
