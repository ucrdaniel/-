#include<stdio.h>
int main ()
{
   int c=5, d;
   double a=5, b;
   scanf(", b=%lf, c=%d, d=%d\n", &b, &d);
   a+=b-2;
   printf ("a=%lf, b=%lf, c=%d, d=%d\n", a,b,c,d);
   d+=++c+a;
   printf ("a=%lf, b=%lf, c=%d, d=%d\n", a,b,c,d);
   a*=c--;
   printf ("a=%lf, b=%lf, c=%d, d=%d\n", a,b,c,d);
   d*=((c/=2)+--b+(a/=10));
   //printf ("a=%lf, b=%lf, c=%d, d=%d\n", a,b,c,d);
   printf("a=%lf, b=%lf, c=%d, d=%d\n",a,b,c,d);
   return 0;

}

