#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 1e-6

int main() {
    double x,a,s;
    int n=0;
    printf("x=");
    scanf("%lf", &x);
    a=1;
    s=a;
    do {
        n++;
        a*=-x/n;
        s+=a;
    } while (fabs(a)>EPS);
    printf("s = %lf\t e^-x = %lf\n", s, exp(-x));  
    return 0;
}
