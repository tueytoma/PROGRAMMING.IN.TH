#include <stdio.h>
#include <math.h>

int main () {
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    double c = sqrt(a*a + b*b);
    printf("%.6lf", c);

    return(0);
}
