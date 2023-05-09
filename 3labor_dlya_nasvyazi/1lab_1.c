#include <stdio.h>

int main() {
    int n;
    // Введите значение для n
    printf("Введите значение для n: ");
    scanf("%d", &n);

    int sum = 0;
    int factorial = 1;
    // Цикл for для вычисления суммы факториалов от 1 до n
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Вычисление факториала
        sum += factorial; // Добавление факториала к сумме
    }

    // Вывод результата
    printf("Сумма факториалов от 1 до %d равна: %d\n", n, sum);
    return 0;
}