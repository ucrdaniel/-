#include <stdio.h>

int main() {
    int month;

    // Запрос у пользователя номера месяца
    printf("Введите номер месяца: ");
    scanf("%d", &month);

    // Оператор switch для определения времени года по номеру месяца
    switch(month) {
        case 12:
        case 1:
        case 2:
            printf("Зима\n");
            break;  // Принудительный выход из оператора switch
        case 3:
        case 4:
        case 5:
            printf("Весна\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Лето\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Осень\n");
            break;
        default:
            printf("Некорректный номер месяца\n");
            break;
    }

    return 0;
}
