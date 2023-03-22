// if
#include <stdio.h>

double f(double a, double b) {
    double result;
    if (a > 5 && b > 0) {
        result = 3*a*a;
    } else if (a > 0 && a <= 5 && b != 0) {
        result = a/b;
    } else {
        result = b + a - 1;
    }
    return result;
}

int main() {
    double a, b;
    printf("Введите значения a и b: ");
    scanf("%f %f", &a, &b);
    printf("f(a, b) = %f\n", f(a, b));
    return 0;
}
