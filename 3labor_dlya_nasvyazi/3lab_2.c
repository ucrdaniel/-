#include <stdio.h>
#include <math.h>

int main() {
    double x, a;
    // Введите значения для x и a
    printf("Введите значения для x и a: ");
    scanf("%lf %lf", &x, &a);

    double epsilon = 1e-4;
    double term = 1;
    double sum = term;
    double n = 0;
    double xlna = x * log(a);

    // Цикл while для вычисления суммы бесконечного ряда с заданной точностью
    while (fabs(term) > epsilon) {
        n++;
        term *= xlna / n; // Рекуррентное вычисление слагаемого
        sum += term; // Добавление слагаемого к сумме
    }

    // Вывод результата
    printf("Сумма бесконечного ряда равна: %.4lf\n", sum);
    printf("Значение функции f = a^x равно: %.4lf\n", pow(a, x));
    return 0;
}