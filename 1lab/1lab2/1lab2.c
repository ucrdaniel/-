#include <stdio.h>

int main() 
{
    int c = 5, d;
    float a = 5, b;

    printf("Введите значения для b и d: ");
    scanf("%f %d", &b, &d);

    a += b - 2;
    printf("a=%f, b=%f, c=%d, d=%d\n", a, b, c, d);

    d += ++c + a;
    printf("a=%f, b=%f, c=%d, d=%d\n", a, b, c, d);

    a *= c--;
    printf("a=%f, b=%f, c=%d, d=%d\n", a, b, c, d);

    d *= ((c /= 2) + --b + (a /= 10));
    printf("a=%f, b=%f, c=%d, d=%d\n", a, b, c, d);

    return 0;
}
