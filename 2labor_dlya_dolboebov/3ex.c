#include <stdio.h>

int main() {
    int n;
    printf("Введите двухзначное число: ");
    scanf("%d", &n);

    int a = n / 10; // первая цифра
    int b = n % 10; // вторая цифра

    if (a == b) {
        n++;
    } else {
        n = (a > b) ? a*10 : b*10;
    }

    printf("Результат: %d\n", n);
    return 0;
}
