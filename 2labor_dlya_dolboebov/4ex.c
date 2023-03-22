#include <stdio.h>

int main() {
    int month;
    printf("Введите номер месяца (от 1 до 12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Ошибка: неверный номер месяца\n");
    } else if (month == 12 || month <= 2) {
        printf("Зима\n");
    } else if (month <= 5) {
        printf("Весна\n");
    } else if (month <= 8) {
        printf("Лето\n");
    } else {
        printf("Осень\n");
    }

    return 0;
}
