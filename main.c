#include <stdio.h>
#include <math.h>
int main() {
double a,b,c;
printf("Type a,b,c numbers: \n");//input numbers
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
double ma, mb, mc;
ma = 0.5*sqrt(2*b*b + 2*c*c - a*a);//counting medians
mb = 0.5*sqrt(2*a*a + 2*c*c - b*b);
mc = 0.5*sqrt(2*b*b + 2*a*a - c*c);
printf("median to side a:%lf",ma);
printf("\nmedian to side b:%lf",mb);
printf("\nmedian to side c:%lf",mc);
}
