// «?:»
#include <stdio.h>

double f(double a, double b) {
    return (a > 5 && b > 0) ? 3*a*a : ((a > 0 && a <= 5 && b != 0) ? a/b : (b + a - 1));
}

int main() {
    double a, b;
    printf("Введите значения a и b: ");
    scanf("%f %f", &a, &b);
    printf("f(a, b) = %f\n", f(a, b));
    return 0;
}
